/*
 * XREFs of KeRegisterBugCheckReasonCallback @ 0x14024AE50
 * Callers:
 *     sub_1403DF080 @ 0x1403DF080 (sub_1403DF080.c)
 *     sub_14054B14C @ 0x14054B14C (sub_14054B14C.c)
 *     sub_1405FD49C @ 0x1405FD49C (sub_1405FD49C.c)
 *     sub_1405FD594 @ 0x1405FD594 (sub_1405FD594.c)
 *     sub_140605200 @ 0x140605200 (sub_140605200.c)
 *     sub_140658604 @ 0x140658604 (sub_140658604.c)
 *     sub_1408555E0 @ 0x1408555E0 (sub_1408555E0.c)
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 *     sub_140B27708 @ 0x140B27708 (sub_140B27708.c)
 *     sub_140B28664 @ 0x140B28664 (sub_140B28664.c)
 *     sub_140B2A8FC @ 0x140B2A8FC (sub_140B2A8FC.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14024AFA0 @ 0x14024AFA0 (sub_14024AFA0.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

BOOLEAN __stdcall KeRegisterBugCheckReasonCallback(
        PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord,
        PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine,
        KBUGCHECK_CALLBACK_REASON Reason,
        PUCHAR Component)
{
  __int64 v5; // rsi
  BOOLEAN v8; // r14
  unsigned __int8 CurrentIrql; // bp
  struct _LIST_ENTRY *v10; // rdi
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rax
  __int64 v14; // r9
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  int v18; // edx
  bool v19; // zf

  v5 = Reason;
  v8 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v14 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KeAcquireSpinLockAtDpcLevel(&qword_140C2BD10);
  if ( CallbackRecord->State )
    goto LABEL_15;
  if ( (_DWORD)v5 == 4 || (v10 = (struct _LIST_ENTRY *)&qword_140C2B810, (_DWORD)v5 == 6) )
    v10 = (struct _LIST_ENTRY *)&qword_140C2B800;
  if ( (unsigned __int8)sub_14024AFA0(v10, CallbackRecord) )
  {
LABEL_15:
    v8 = 0;
    goto LABEL_10;
  }
  CallbackRecord->CallbackRoutine = CallbackRoutine;
  CallbackRecord->Reason = v5;
  CallbackRecord->Component = Component;
  CallbackRecord->Checksum = (ULONG_PTR)CallbackRoutine + v5 + (_QWORD)Component;
  CallbackRecord->State = 1;
  if ( (_DWORD)v5 == 1023 )
  {
    if ( _InterlockedIncrement(&dword_140C2A954) == 1 && !qword_140C2AAA8 )
      KeInsertQueueDpc(&stru_140C2AA60, 0LL, 0LL);
  }
  else if ( (_DWORD)v5 == 7 )
  {
    Blink = v10->Blink;
    if ( Blink->Flink == v10 )
    {
      CallbackRecord->Entry.Flink = v10;
      CallbackRecord->Entry.Blink = Blink;
      Blink->Flink = &CallbackRecord->Entry;
      v10->Blink = &CallbackRecord->Entry;
      goto LABEL_10;
    }
LABEL_22:
    __fastfail(3u);
  }
  Flink = v10->Flink;
  if ( v10->Flink->Blink != v10 )
    goto LABEL_22;
  CallbackRecord->Entry.Flink = Flink;
  CallbackRecord->Entry.Blink = v10;
  Flink->Blink = &CallbackRecord->Entry;
  v10->Flink = &CallbackRecord->Entry;
LABEL_10:
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
  return v8;
}
