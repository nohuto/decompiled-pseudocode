/*
 * XREFs of sub_140253DD4 @ 0x140253DD4
 * Callers:
 *     sub_140253DB4 @ 0x140253DB4 (sub_140253DB4.c)
 *     sub_140A51484 @ 0x140A51484 (sub_140A51484.c)
 *     sub_140B10D98 @ 0x140B10D98 (sub_140B10D98.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 */

__int64 sub_140253DD4()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v4; // r9
  int v5; // eax
  bool v6; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C44A50);
  if ( (__int64 *)qword_140C44A40 == &qword_140C44A40 )
  {
    byte_140C44A00 = 0;
    KeSetEvent(&stru_140C44A20, 0, 0);
  }
  else
  {
    stru_140C449E0.Parameter = 0LL;
    stru_140C449E0.List.Flink = 0LL;
    stru_140C449E0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1402DD320;
    ExQueueWorkItem(&stru_140C449E0, DelayedWorkQueue);
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C44A50);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v4 = *((_QWORD *)CurrentPrcb + 4375);
        v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v6 = (v5 & *(_DWORD *)(v4 + 20)) == 0;
        *(_DWORD *)(v4 + 20) &= v5;
        if ( v6 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v0);
  return sub_140775698(1LL);
}
