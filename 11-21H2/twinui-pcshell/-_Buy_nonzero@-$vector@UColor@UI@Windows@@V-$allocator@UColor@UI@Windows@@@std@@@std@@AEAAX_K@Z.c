/*
 * XREFs of ?_Buy_nonzero@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x18023877C
 * Callers:
 *     ??0AssistantLightStrip@Lighting@TwinUI@@QEAA@V?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@V?$vector@HV?$allocator@H@std@@@std@@1@Z @ 0x180561124 (--0AssistantLightStrip@Lighting@TwinUI@@QEAA@V-$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<Windows::UI::Color>::_Buy_nonzero(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  return std::vector<int>::_Buy_raw(a1, a2);
}
