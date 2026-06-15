/*
 * XREFs of ?GetNext@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAAEAPEAVCChildSubmixInstance@@AEAPEAU__POSITION@@@Z @ 0x140009E48
 * Callers:
 *     ?DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ @ 0x140007160 (-DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ.c)
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x140007C50 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 *     ?FindChildSubmix@CSubmixImpl@@IEAAPEAVCChildSubmixInstance@@PEAUISubmixInternal@@@Z @ 0x140009E08 (-FindChildSubmix@CSubmixImpl@@IEAAPEAVCChildSubmixInstance@@PEAUISubmixInternal@@@Z.c)
 *     ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140024A00 (-DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?InfluencesSaDeviceState@CSubmixImpl@@UEAA_NXZ @ 0x14002D390 (-InfluencesSaDeviceState@CSubmixImpl@@UEAA_NXZ.c)
 *     ?DisconnectFromRightPipe@CSubmixImpl@@UEAAJ_K@Z @ 0x140067FF0 (-DisconnectFromRightPipe@CSubmixImpl@@UEAAJ_K@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::GetNext(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx

  v2 = *a2;
  if ( !*a2 )
    ATL::AtlThrowImpl(-2147467259);
  *a2 = (_QWORD *)*v2;
  return v2 + 2;
}
