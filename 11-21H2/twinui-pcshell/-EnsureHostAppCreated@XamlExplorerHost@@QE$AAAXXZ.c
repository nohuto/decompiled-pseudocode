/*
 * XREFs of ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x1800633AC
 * Callers:
 *     ?EnsureXamlIslandHosting@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x180062B18 (-EnsureXamlIslandHosting@XamlExplorerHostShellComponent@@AEAAJXZ.c)
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1804204C4 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA?AV?$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ @ 0x180063244 (-GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA-AV-$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180063B30 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x180064220 (--0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvid.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall XamlExplorerHost::EnsureHostAppCreated(__int64 a1)
{
  __int64 v2; // rbp
  _QWORD *RuntimeSiteAggregator; // rax
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  void *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rbx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h]

  v2 = a1 + 88;
  if ( !*(_QWORD *)(a1 + 88) )
  {
    v13 = 0LL;
    RuntimeSiteAggregator = XamlExplorerHost::GetRuntimeSiteAggregator(a1, &v14);
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*RuntimeSiteAggregator;
    v5 = **(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*RuntimeSiteAggregator;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
    v6 = v5(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v13);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x74,
        (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
        (const char *)(unsigned int)v6,
        v11);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    v7 = Platform::Details::Heap::Allocate(0xF8uLL, 0x110uLL);
    v14 = (__int64)v7;
    v8 = *(_QWORD *)(a1 + 40);
    v9 = __abi_winrt_cast_to(0LL, v13, &_uuidof__AUIXamlMetadataProvider_Markup_Xaml_UI_Windows__);
    v15 = v9;
    v10 = WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::XamlExplorerHostApp(v7, v9, v8);
    v14 = v10;
    __abi_winrt_ptr_assign(v2, v10);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  }
}
