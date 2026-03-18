/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x14039AAC0
 * Callers:
 *     KiInitMachineDependent @ 0x14039A818 (KiInitMachineDependent.c)
 *     KiExecuteDpc @ 0x14039AA10 (KiExecuteDpc.c)
 *     KiDeregisterNmiSxCallback @ 0x14056CA94 (KiDeregisterNmiSxCallback.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140306C50 (KeSetSystemGroupAffinityThread.c)
 */

void __fastcall KiSetSystemAffinityThreadToProcessor(int a1, struct _GROUP_AFFINITY *a2)
{
  unsigned int v2; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  v2 = KiProcessorIndexToNumberMappingTable[a1];
  Affinity.Group = v2 >> 6;
  Affinity.Mask = 1LL << (v2 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, a2);
}
