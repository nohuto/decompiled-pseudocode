/*
 * XREFs of KeRegisterBugCheckCallback @ 0x1403B5E30
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14024AFA0 @ 0x14024AFA0 (sub_14024AFA0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

BOOLEAN __stdcall KeRegisterBugCheckCallback(
        PKBUGCHECK_CALLBACK_RECORD CallbackRecord,
        PKBUGCHECK_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Buffer,
        ULONG Length,
        PUCHAR Component)
{
  __int64 v5; // r14
  unsigned __int8 CurrentIrql; // di
  BOOLEAN v10; // si
  struct _LIST_ENTRY *v11; // r8
  __int64 v12; // rax
  __int64 v14; // r9
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  int v18; // edx
  bool v19; // zf

  v5 = Length;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v14 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KeAcquireSpinLockAtDpcLevel(&qword_140C2BD10);
  v10 = 0;
  if ( !CallbackRecord->State && !sub_14024AFA0(&qword_140C2BD20, CallbackRecord) )
  {
    CallbackRecord->CallbackRoutine = CallbackRoutine;
    CallbackRecord->Buffer = Buffer;
    CallbackRecord->Checksum = (ULONG_PTR)&Component[(unsigned __int64)CallbackRoutine + v5 + (_QWORD)Buffer];
    CallbackRecord->Length = v5;
    CallbackRecord->Component = Component;
    CallbackRecord->State = 1;
    v12 = qword_140C2BD20;
    if ( *(struct _LIST_ENTRY **)(qword_140C2BD20 + 8) != v11 )
      __fastfail(3u);
    CallbackRecord->Entry.Flink = (struct _LIST_ENTRY *)qword_140C2BD20;
    v10 = 1;
    CallbackRecord->Entry.Blink = v11;
    *(_QWORD *)(v12 + 8) = CallbackRecord;
    qword_140C2BD20 = (__int64)CallbackRecord;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C2BD10);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = *((_QWORD *)CurrentPrcb + 4375);
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v19 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v10;
}
