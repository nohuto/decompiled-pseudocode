/*
 * XREFs of KeDeregisterBugCheckReasonCallback @ 0x14025C0E0
 * Callers:
 *     sub_140603390 @ 0x140603390 (sub_140603390.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

BOOLEAN __stdcall KeDeregisterBugCheckReasonCallback(PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord)
{
  unsigned __int8 CurrentIrql; // di
  BOOLEAN v3; // bp
  bool v4; // zf
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v8; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v11; // r9
  int v12; // edx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KeAcquireSpinLockAtDpcLevel(&qword_140C2BD10);
  v3 = 0;
  if ( CallbackRecord->State == 1 )
  {
    v4 = CallbackRecord->Reason == 1023;
    CallbackRecord->State = 0;
    if ( v4 )
      _InterlockedAdd(&dword_140C2A954, 0xFFFFFFFF);
    Flink = CallbackRecord->Entry.Flink;
    Blink = CallbackRecord->Entry.Blink;
    if ( (PKBUGCHECK_REASON_CALLBACK_RECORD)CallbackRecord->Entry.Flink->Blink != CallbackRecord
      || (PKBUGCHECK_REASON_CALLBACK_RECORD)Blink->Flink != CallbackRecord )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    v3 = 1;
    Flink->Blink = Blink;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C2BD10);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v4 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v4 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v3;
}
