/*
 * XREFs of ?GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18016BFC0
 * Callers:
 *     ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18016BE9C (-GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1805BA030 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::GetScaleFactor(IUnknown **this, enum DEVICE_SCALE_FACTOR *a2)
{
  HRESULT ScaleFactorForMonitor; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = SCALE_100_PERCENT;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  ScaleFactorForMonitor = IUnknown_QueryService(
                            this[2],
                            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                            &ppvOut);
  v5 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v7 = 2262LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    goto LABEL_5;
  }
  ScaleFactorForMonitor = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut + 40LL))(ppvOut, &v10);
  v5 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v7 = 2265LL;
    goto LABEL_9;
  }
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v10, a2);
  v5 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v7 = 2267LL;
    goto LABEL_9;
  }
  v5 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  return v5;
}
