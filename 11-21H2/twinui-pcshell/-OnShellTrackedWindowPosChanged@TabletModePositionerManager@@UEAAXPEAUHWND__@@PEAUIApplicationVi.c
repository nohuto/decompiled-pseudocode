/*
 * XREFs of ?OnShellTrackedWindowPosChanged@TabletModePositionerManager@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1804FEFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabletModePositionerManager::OnShellTrackedWindowPosChanged(
        TabletModePositionerManager *this,
        HWND a2,
        struct IApplicationView *a3,
        unsigned int a4,
        unsigned int a5,
        struct tagRECT *a6)
{
  __int64 (__fastcall *v8)(struct IApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v10; // eax
  HRESULT v11; // eax
  __int64 v12; // rax
  IUnknown *punk[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v14; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  void *ppvOut; // [rsp+70h] [rbp+20h] BYREF

  if ( a3 )
  {
    punk[0] = 0LL;
    v8 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a3 + 80LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)punk);
    v10 = v8(a3, AddressOf);
    if ( v10 >= 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      v11 = IUnknown_QueryService(
              punk[0],
              &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
              &GUID_bfb5cdb3_5571_4e1f_9541_a1e9fa66b59a,
              &ppvOut);
      if ( v11 >= 0 )
      {
        v12 = *(_QWORD *)ppvOut;
        v14 = (__int128)*a6;
        (*(void (__fastcall **)(void *, struct IApplicationView *, _QWORD, __int128 *, unsigned int))(v12 + 24))(
          ppvOut,
          a3,
          a4,
          &v14,
          a5);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA2,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
          (const char *)(unsigned int)v11);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9F,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)punk);
  }
}
