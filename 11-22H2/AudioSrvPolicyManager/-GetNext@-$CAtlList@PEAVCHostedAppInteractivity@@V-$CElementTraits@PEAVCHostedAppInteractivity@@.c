/*
 * XREFs of ?GetNext@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAAEAPEAVCHostedAppInteractivity@@AEAPEAU__POSITION@@@Z @ 0x18000D350
 * Callers:
 *     ?RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ @ 0x1800307B0 (-RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012B04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::GetNext(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rax

  v2 = *a2;
  if ( !*a2 )
    ATL::AtlThrowImpl(-2147467259);
  *a2 = (_QWORD *)*v2;
  return v2 + 2;
}
