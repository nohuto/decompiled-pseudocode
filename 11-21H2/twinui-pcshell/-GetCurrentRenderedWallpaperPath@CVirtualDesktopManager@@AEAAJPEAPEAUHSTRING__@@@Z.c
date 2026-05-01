/*
 * XREFs of ?GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z @ 0x180545778
 * Callers:
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180548360 (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@P.c)
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054ACB0 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z.c)
 *     ?UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x18054C1E8 (-UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$com_ptr_t@UIWindowManagementEvents@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ @ 0x1800F9E14 (--B-$com_ptr_t@UIWindowManagementEvents@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180138444 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?Release@HString@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x18017A3CC (-Release@HString@Wrappers@WRL@Microsoft@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180181B50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7437abe9868d87a11c5e0bb58da3a0ad___ @ 0x1801B4E58 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_7437abe9868d87a11c5e0bb58da3a0ad.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAA_NXZ @ 0x1801B5CF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAA_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x18033E490 (--$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopManager::GetCurrentRenderedWallpaperPath(CVirtualDesktopManager *this, HSTRING *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  LPVOID v5; // rbx
  __int64 (__fastcall *v6)(LPVOID, _QWORD, void **); // rdi
  void **v7; // rax
  int v8; // eax
  HRESULT v9; // eax
  HSTRING v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  LPVOID ppv; // [rsp+50h] [rbp+20h] BYREF
  const wchar_t *v14; // [rsp+58h] [rbp+28h] BYREF
  const wchar_t *v15; // [rsp+60h] [rbp+30h] BYREF

  ppv = this;
  *a2 = 0LL;
  v14 = 0LL;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwSotUpdates>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_VwSotUpdates>::GetImpl'::`2'::impl) )
  {
    ppv = 0LL;
    CoCreateInstance(
      &GUID_c2cf3110_460e_4fc1_b9d0_8a1c0c9cc4bd,
      0LL,
      4u,
      &GUID_c182461f_dfac_4375_ab6e_4cc45aa7f9cc,
      &ppv);
    v5 = ppv;
    if ( ppv )
    {
      v6 = *(__int64 (__fastcall **)(LPVOID, _QWORD, void **))(*(_QWORD *)ppv + 32LL);
      v7 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v14);
      v8 = v6(v5, 0LL, v7);
      v4 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6C8,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v8);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&ppv);
        goto LABEL_13;
      }
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&ppv);
LABEL_8:
    if ( wil::com_ptr_t<IWindowManagementEvents,wil::err_returncode_policy>::operator bool(&v14) )
    {
      ppv = 0LL;
      v15 = v14;
      v9 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>((HSTRING *)&ppv, &v15);
      v4 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6CF,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v9);
        Microsoft::WRL::Wrappers::HString::Release((HSTRING *)&ppv);
        goto LABEL_13;
      }
      v10 = (HSTRING)ppv;
      ppv = 0LL;
      *a2 = v10;
      Microsoft::WRL::Wrappers::HString::Release((HSTRING *)&ppv);
    }
    v4 = 0;
    goto LABEL_13;
  }
  ppv = &v14;
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7437abe9868d87a11c5e0bb58da3a0ad___((__int64)&ppv);
  v4 = v3;
  if ( v3 >= 0 )
    goto LABEL_8;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6C0,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_13:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v14);
  return v4;
}
