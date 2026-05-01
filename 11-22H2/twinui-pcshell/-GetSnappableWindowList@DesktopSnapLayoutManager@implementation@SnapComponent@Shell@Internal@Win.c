/*
 * XREFs of ?GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AV?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@XZ @ 0x180684008
 * Callers:
 *     ?GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@UWindowId@UI@67@@Z @ 0x180684494 (-GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Inter.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$convert@$00U_GUID@@@guid@winrt@@CA?AU01@AEBU_GUID@@@Z @ 0x180088608 (--$convert@$00U_GUID@@@guid@winrt@@CA-AU01@AEBU_GUID@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013A728 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18013A89C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x1801A2090 (--$create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?release_ref@?$com_ptr@VJointResize@@@winrt@@AEAAXXZ @ 0x180392284 (-release_ref@-$com_ptr@VJointResize@@@winrt@@AEAAXXZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVirtualDesktopManagerInternal@@@Z @ 0x180673DF8 (-IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVi.c)
 *     ??$IID_PPV_ARGS_Helper@UIVirtualDesktopManagerInternal@@@@YAPEAPEAXPEAU?$com_ptr@UIVirtualDesktopManagerInternal@@@winrt@@@Z @ 0x180680F58 (--$IID_PPV_ARGS_Helper@UIVirtualDesktopManagerInternal@@@@YAPEAPEAXPEAU-$com_ptr@UIVirtualDeskto.c)
 *     ??$_Emplace_reallocate@AEAU?$com_ptr@UIApplicationView@@@winrt@@@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@QEAAPEAU?$com_ptr@UIApplicationView@@@winrt@@QEAU23@AEAU23@@Z @ 0x1806810F8 (--$_Emplace_reallocate@AEAU-$com_ptr@UIApplicationView@@@winrt@@@-$vector@U-$com_ptr@UIApplicati.c)
 *     std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681C14 (std--_Sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowList(
        __int64 a1)
{
  IUnknown *v2; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  __int64 *v4; // rax
  HRESULT v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  struct IUnknown *v9; // rdi
  struct IUnknown v10; // rax
  struct IApplicationView *v11; // rdx
  __int64 v12; // rbx
  __int64 *v13; // rdx
  int v15; // [rsp+20h] [rbp-69h]
  char v16; // [rsp+30h] [rbp-59h]
  struct IUnknown *v17; // [rsp+38h] [rbp-51h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-49h] BYREF
  int v19; // [rsp+48h] [rbp-41h]
  __int64 v20; // [rsp+50h] [rbp-39h] BYREF
  bool v21[8]; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v22; // [rsp+60h] [rbp-29h] BYREF
  SnapLayoutHelpers *v23; // [rsp+68h] [rbp-21h] BYREF
  __int64 *v24; // [rsp+70h] [rbp-19h]
  SnapLayoutHelpers *v25; // [rsp+78h] [rbp-11h] BYREF
  IUnknown *punk; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v27; // [rsp+88h] [rbp-1h] BYREF
  __int64 v28; // [rsp+90h] [rbp+7h] BYREF
  __int64 *v29; // [rsp+98h] [rbp+Fh]
  __int64 v30[2]; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+27h] BYREF
  unsigned int v32; // [rsp+B8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v30[1] = a1;
  v19 = 0;
  winrt::guid::convert<1,_GUID>((__int64)&v31, (int *)&CLSID_ImmersiveShell);
  winrt::create_instance<IServiceProvider>((__int64)&punk, (__int64)&v31);
  v2 = punk;
  if ( !punk )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17E,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
      (const char *)0x80004005LL,
      v15);
  *(_QWORD *)v21 = 0LL;
  QueryInterface = punk->lpVtbl[1].QueryInterface;
  v4 = IID_PPV_ARGS_Helper<IVirtualDesktopManagerInternal>((__int64 *)v21);
  ((void (__fastcall *)(IUnknown *, SID *, GUID *, __int64 *))QueryInterface)(
    v2,
    &SID_VirtualDesktopManager,
    &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
    v4);
  ppvOut = 0LL;
  v5 = IUnknown_QueryService(
         v2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &winrt::impl::guid_v<IApplicationViewCollection>,
         &ppvOut);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  v6 = (__int64 *)ppvOut;
  v30[0] = (__int64)ppvOut;
  v19 = 2;
  if ( !ppvOut )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x186,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
      (const char *)0x80004002LL,
      v15);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v19 = 3;
  v20 = 0LL;
  v7 = *v6;
  v20 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 32))(v6, &v20);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18B,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
      (const char *)(unsigned int)v8,
      v15);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    (__int64)&v31,
    v20);
  v22 = 0;
  v23 = 0LL;
  v24 = &v31;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v22);
  v27 = v32;
  v28 = 0LL;
  v29 = &v31;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v27);
  while ( v22 != v27 || v24 != v29 )
  {
    v9 = (struct IUnknown *)v23;
    v25 = v23;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
    ppvOut = 0LL;
    v10.lpVtbl = v9->lpVtbl;
    ppvOut = 0LL;
    if ( ((int (__fastcall *)(struct IUnknown *, void **))v10.lpVtbl[3].AddRef)(v9, &ppvOut) >= 0
      && SnapLayoutHelpers::IsSnappableWindow(v9, v11, 0LL, *(__int64 **)v21) )
    {
      v12 = 0LL;
      v17 = 0LL;
      if ( v9 )
      {
        winrt::com_ptr<JointResize>::release_ref((__int64 *)&v17);
        v12 = (__int64)v9;
        v17 = v9;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
      }
      v13 = *(__int64 **)(a1 + 8);
      if ( v13 == *(__int64 **)(a1 + 16) )
      {
        std::vector<winrt::com_ptr<IApplicationView>>::_Emplace_reallocate<winrt::com_ptr<IApplicationView> &>(
          (__int64 *)a1,
          (__int64)v13,
          (__int64 *)&v17);
        v12 = (__int64)v17;
      }
      else
      {
        *v13 = v12;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
        *(_QWORD *)(a1 + 8) += 8LL;
      }
      if ( v12 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v17);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppvOut);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v25);
    ++v22;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v22);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
  std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
    *(__int64 **)a1,
    *(__int64 **)(a1 + 8),
    (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3,
    v16);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v30);
  if ( *(_QWORD *)v21 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v21);
  winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&punk);
  return a1;
}
