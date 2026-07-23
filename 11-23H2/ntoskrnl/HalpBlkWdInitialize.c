/*
 * XREFs of HalpBlkWdInitialize @ 0x140B92E18
 * Callers:
 *     HalpBlkInitSystem @ 0x140B48F28 (HalpBlkInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14031E7AC (KiInitializeTimer2.c)
 */

ULONG_PTR (*HalpBlkWdInitialize())()
{
  ULONG_PTR (*result)(); // rax

  word_140C5FDE2 = 0;
  KiInitializeTimer2((unsigned __int64)&HalpBlkWdTimer, (__int64)HalpBlkWdTimerRoutine, 0LL, 8);
  HalpBlkWdWorkItem.Parameter = 0LL;
  result = HalpBlkWdWorkerRoutine;
  HalpBlkWdWorkItem.List.Flink = 0LL;
  HalpBlkWdWorkItem.WorkerRoutine = (void (__fastcall *)(void *))HalpBlkWdWorkerRoutine;
  return result;
}
