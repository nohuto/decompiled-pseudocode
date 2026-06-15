/*
 * XREFs of ?GetNext@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAAEAPEAVCApplication@@AEAPEAU__POSITION@@@Z @ 0x18000BC60
 * Callers:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18002C748 (--1CApplicationManager@@MEAA@XZ.c)
 *     ?FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z @ 0x18002CB1C (-FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z.c)
 *     ?HandleEndpointRemoved@CApplicationManager@@QEAAXPEBG@Z @ 0x18002CE74 (-HandleEndpointRemoved@CApplicationManager@@QEAAXPEBG@Z.c)
 *     ?MuteAllAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x18002D374 (-MuteAllAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x18002DD74 (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 *     ?ResetAllApplicationSpecificEndpoints@CApplicationManager@@QEAAJK@Z @ 0x18002F0B0 (-ResetAllApplicationSpecificEndpoints@CApplicationManager@@QEAAJK@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18002F42C (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     ?UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x18002F6FC (-UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012B04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::GetNext(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rax

  v2 = *a2;
  if ( !*a2 )
    ATL::AtlThrowImpl(-2147467259);
  *a2 = (_QWORD *)*v2;
  return v2 + 2;
}
