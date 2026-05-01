/*
 * XREFs of _lambda_0361bfdb57f0c2eeee46865918d0f50e_::operator() @ 0x18041FFB0
 * Callers:
 *     ?get@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplorerHost@@UE$AAAPE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@XZ @ 0x1804217F4 (-get@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSourc_ea_1804217F4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180063B30 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180453CCC (-AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_0361bfdb57f0c2eeee46865918d0f50e_::operator()(__int64 a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, GUID *, GUID *, struct IApplicationViewCollection **); // rbx
  int v4; // eax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, SID *, GUID *, struct IApplicationViewIconLoader **); // rbx
  int v7; // eax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, SID *, GUID *, struct IImmersiveShellHookService **); // rbx
  int v10; // eax
  int v11; // eax
  struct IAppViewDataSourceAdapter *v12; // rbx
  __int64 (__fastcall *v13)(struct IAppViewDataSourceAdapter *, GUID *, _QWORD); // rdi
  int v14; // eax
  struct IApplicationViewCollection *v15; // rbx
  int v17; // [rsp+20h] [rbp-28h]
  int v18; // [rsp+20h] [rbp-28h]
  struct IApplicationViewCollection *v19[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  __int64 (__fastcall ***v21)(_QWORD, __int64, __int64 *); // [rsp+70h] [rbp+28h] BYREF
  struct IAppViewDataSourceAdapter *v22; // [rsp+78h] [rbp+30h] BYREF
  struct IImmersiveShellHookService *v23; // [rsp+80h] [rbp+38h] BYREF
  struct IApplicationViewIconLoader *v24; // [rsp+88h] [rbp+40h] BYREF

  v19[0] = 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v3 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, struct IApplicationViewCollection **))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v19);
  v4 = v3(v2, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, v19);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD4,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v4,
      v17);
  v24 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v6 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, struct IApplicationViewIconLoader **))(*(_QWORD *)v5 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
  v7 = v6(v5, &SID_ApplicationViewIconLoaderService, &GUID_f622d8ac_35d3_4374_9148_66f1f7894191, &v24);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD7,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v7,
      v17);
  v23 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v9 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, struct IImmersiveShellHookService **))(*(_QWORD *)v8 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
  v10 = v9(v8, &SID_ImmersiveShellHookService, &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4, &v23);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xDA,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v10,
      v17);
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
  v11 = AppViewDataSourceAdapter_CreateInstance(v19[0], v24, v23, 0LL, &v22);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xDD,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v11,
      v18);
  v21 = 0LL;
  v12 = v22;
  v13 = *(__int64 (__fastcall **)(struct IAppViewDataSourceAdapter *, GUID *, _QWORD))(*(_QWORD *)v22 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
  v14 = v13(v12, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v21);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE0,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v14,
      v18);
  v15 = (struct IApplicationViewCollection *)__abi_winrt_cast_to(
                                               0,
                                               v21,
                                               (__int64)&_uuidof__AUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__);
  v19[1] = v15;
  __abi_winrt_ptr_assign((__int64 *)(*(_QWORD *)a1 + 72LL), (__int64)v15);
  if ( v15 )
    (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)v15 + 16LL))(v15);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v19);
}
