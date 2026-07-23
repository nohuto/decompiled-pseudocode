/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x14039ACA0
 * Callers:
 *     KiInitMachineDependent @ 0x14039A9F8 (KiInitMachineDependent.c)
 *     KiExecuteDpc @ 0x14039ABF0 (KiExecuteDpc.c)
 *     KiDeregisterNmiSxCallback @ 0x14056D154 (KiDeregisterNmiSxCallback.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140306EE0 (KeSetSystemGroupAffinityThread.c)
 */

void __fastcall KiSetSystemAffinityThreadToProcessor(int a1, _GROUP_AFFINITY *a2)
{
  unsigned int v2; // ecx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  v2 = KiProcessorIndexToNumberMappingTable[a1];
  Affinity.Group = v2 >> 6;
  Affinity.Mask = 1LL << (v2 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, a2);
}
