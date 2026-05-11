/*
 * XREFs of USBCntrlGetSetProcessingUnitEnable @ 0x1C00396B0
 * Callers:
 *     TopologyProcessExtensionUnit @ 0x1C002D1B0 (TopologyProcessExtensionUnit.c)
 *     TopologyProcessProcessUnit @ 0x1C002DE10 (TopologyProcessProcessUnit.c)
 * Callees:
 *     USBCntrlGetSetProcessingUnitValue @ 0x1C00396E0 (USBCntrlGetSetProcessingUnitValue.c)
 */

__int64 __fastcall USBCntrlGetSetProcessingUnitEnable(int a1, int a2, int a3, __int64 a4)
{
  return USBCntrlGetSetProcessingUnitValue(a1, a2, a3, 1, a4, 1);
}
