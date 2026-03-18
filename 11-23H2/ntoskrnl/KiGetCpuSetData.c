/*
 * XREFs of KiGetCpuSetData @ 0x14036EDC4
 * Callers:
 *     KeQueryCpuSetInformation @ 0x140850F4C (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetCpuSetData(int a1, int a2)
{
  return KiCpuSetData + 16LL * (unsigned int)(a2 + (a1 << 6));
}
