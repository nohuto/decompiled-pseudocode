/*
 * XREFs of EtwpBuffersFlushRequired @ 0x140364608
 * Callers:
 *     EtwpSwitchBuffer @ 0x140227CE8 (EtwpSwitchBuffer.c)
 *     EtwInitialize @ 0x14081D2FC (EtwInitialize.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140228234 (EtwpQueryUsedProcessorCount.c)
 */

bool __fastcall EtwpBuffersFlushRequired(_DWORD *a1)
{
  return !a1[53] || (int)(a1[58] - EtwpQueryUsedProcessorCount((__int64)a1) - a1[57]) >= a1[53];
}
