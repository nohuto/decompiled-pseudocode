/*
 * XREFs of ?OnMoveSizeAttempted@TabletModePositionerManager@@UEAAXPEAUHWND__@@PEAUIApplicationView@@KK@Z @ 0x1805B7640
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabletModePositionerManager::OnMoveSizeAttempted(
        TabletModePositionerManager *this,
        HWND a2,
        struct IApplicationView *a3,
        unsigned int a4)
{
  __int64 v4; // rsi
  __int64 (__fastcall *v6)(struct IApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v8; // eax
  HRESULT v9; // eax
  IUnknown *punk[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppvOut; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    v4 = a4;
    punk[0] = 0LL;
    v6 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a3 + 80LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)punk);
    v8 = v6(a3, AddressOf);
    if ( v8 >= 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
      v9 = IUnknown_QueryService(
             punk[0],
             &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
             &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
             &ppvOut);
      if ( v9 >= 0 )
        (*(void (__fastcall **)(void *, struct IApplicationView *, _QWORD))(*(_QWORD *)ppvOut + 24LL))(
          ppvOut,
          a3,
          `TabletModePositionerManager::MoveSizeTypeFromArrangementMessage'::`2'::MoveSizeMessageParamToMoveSizeTypeMap[v4]);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB3,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
          (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB0,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)punk);
  }
}
