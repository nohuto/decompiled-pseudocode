/*
 * XREFs of ?OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18014EB50
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180091C4C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800C40C0 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??1ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAA@XZ @ 0x1804FFF18 (--1ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180502E7C (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x18050724C (-StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18050A244 (-ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  DWORD v6; // edx
  _QWORD v7[40]; // [rsp+20h] [rbp-158h] BYREF

  if ( *(_DWORD *)(a1 + 96) == 1 )
  {
    if ( *(_DWORD *)(a1 + 100) == 1 )
    {
      if ( a3 == 1 || a3 == 4 )
        goto LABEL_10;
      if ( a3 > 6 )
      {
        if ( a3 <= 8 )
        {
          wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
            (__int64)v7,
            (__int64)"ApplicationViewChangedFocus");
          v7[0] = &TabletModeTraceLogging::ApplicationViewChangedFocus::`vftable';
          TabletModeTraceLogging::ApplicationViewChangedFocus::StartActivity(
            (TabletModeTraceLogging::ApplicationViewChangedFocus *)v7,
            a2);
          TabletModePositioner::ForegroundViewChanged((TabletModePositioner *)(a1 - 136), a2);
          wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
            (__int64)v7,
            v6);
          TabletModeTraceLogging::ApplicationViewChangedFocus::~ApplicationViewChangedFocus((TabletModeTraceLogging::ApplicationViewChangedFocus *)v7);
          return 0LL;
        }
        if ( a3 == 11 )
LABEL_10:
          TabletModePositioner::ViewRemoved((TabletModePositioner *)(a1 - 136), a2);
      }
    }
    return 0LL;
  }
  return 2147947423LL;
}
