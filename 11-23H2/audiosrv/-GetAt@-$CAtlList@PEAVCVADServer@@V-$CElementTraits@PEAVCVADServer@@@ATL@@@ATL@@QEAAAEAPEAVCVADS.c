/*
 * XREFs of ?GetAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@PEAU__POSITION@@@Z @ 0x18011D534
 * Callers:
 *     ?Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800654C0 (-Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     AudioServerGetAudioStreamHandle @ 0x180120A20 (AudioServerGetAudioStreamHandle.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetAt(__int64 a1, __int64 a2)
{
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  return a2 + 16;
}
