/*
 * XREFs of ?SubscribeToServices@CMultitaskingViewServiceProvider@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800DAEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VsUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180114010 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VsUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119284 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CMultitaskingViewServiceProvider::SubscribeToServices(
        CMultitaskingViewServiceProvider *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v5; // r14
  int v6; // eax
  unsigned int v7; // ebx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v9; // eax
  __int64 v10; // rdx
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v12; // eax
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v14; // eax
  struct IServiceProviderVtbl *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  struct IServiceProviderVtbl *v18; // rax
  int v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v22; // [rsp+60h] [rbp+30h] BYREF
  __int64 v23; // [rsp+68h] [rbp+38h] BYREF
  __int64 v24; // [rsp+70h] [rbp+40h] BYREF
  __int64 v25; // [rsp+78h] [rbp+48h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  v5 = (_QWORD *)((char *)this + 200);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 25);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))QueryService)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
    v22 = 0LL;
    v8 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v8)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           &v22);
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8C,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v9);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 24LL))(*((_QWORD *)this + 20), v22);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 21) + 24LL))(*((_QWORD *)this + 21), v22);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), v22);
      LOBYTE(v10) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VsUpdates>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_VsUpdates>::GetImpl'::`2'::impl,
        v10);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 26) + 24LL))(*((_QWORD *)this + 26), v22);
      lpVtbl = a2->lpVtbl;
      v23 = 0LL;
      v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
              a2,
              &SID_VirtualDesktopSwitcher,
              &GUID_7a25165a_86f1_4b4a_b1d2_e89650cd9589,
              &v23);
      v7 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x95,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v12);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v23);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 72LL))(*((_QWORD *)this + 19), v23);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v23);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), *v5);
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 23) + 24LL))(*((_QWORD *)this + 23), v22);
        v24 = 0LL;
        v13 = a2->lpVtbl->QueryService;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
        v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v13)(
                a2,
                &SID_TouchpadSettingsManager,
                &GUID_6cde4e33_661a_4801_8f97_e9ff66c2443a,
                &v24);
        v7 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x9E,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
            (const char *)(unsigned int)v14);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 40LL))(*((_QWORD *)this + 19), v24);
          v15 = a2->lpVtbl;
          v25 = 0LL;
          if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v15->QueryService)(
                 a2,
                 &SID_VirtualDesktopManager,
                 &GUID_b2f925b9_5a0f_4d2e_9f4d_2b1507593c10,
                 &v25) >= 0 )
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), v25);
          LOBYTE(v17) = 3;
          LOBYTE(v16) = 1;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
            v16,
            v17);
          v18 = a2->lpVtbl;
          v23 = 0LL;
          v19 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v18->QueryService)(
                  a2,
                  &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
                  &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
                  &v23);
          v7 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xAC,
              (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
              (const char *)(unsigned int)v19);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v23);
          }
          else
          {
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19), v23);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v23);
            v7 = 0;
          }
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v25);
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
  }
  return v7;
}
