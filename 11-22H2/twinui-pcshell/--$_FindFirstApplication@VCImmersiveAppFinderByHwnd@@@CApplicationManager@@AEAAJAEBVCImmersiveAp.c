/*
 * XREFs of ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18003FFA0
 * Callers:
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x180052918 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800C6BA0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800C71E0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800C7770 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x1800D0870 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800D2490 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x18039C370 (-HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?QueryObjectForWindow@CApplicationManager@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x18039E720 (-QueryObjectForWindow@CApplicationManager@@UEAAJIPEAPEAUIInspectable@@@Z.c)
 *     ?SetApplicationWindowSafe@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x18039FFA0 (-SetApplicationWindowSafe@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x1803A23E4 (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1803A293C (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A2F4C (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A3204 (-_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@View.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1803A34BC (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A36E0 (-_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCImmersiveAppFinderByHwnd@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1801647C0 (--$FindEx@VCImmersiveAppFinderByHwnd@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationInte.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v6; // r14
  int v7; // ebp
  __int64 v8; // rsi
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v6 = (_QWORD *)(a1 + 632);
  v10 = 0LL;
  v7 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHwnd>(
         a1 + 632,
         a2,
         &v10,
         &v11);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  if ( v7 >= 0 )
  {
    v8 = v11;
    if ( a3 )
      v7 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*v6 + 8 * v11))(
             *(_QWORD *)(*v6 + 8 * v11),
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             a3);
    if ( a4 )
      *a4 = v8;
  }
  return (unsigned int)v7;
}
