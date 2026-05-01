/*
 * XREFs of ?SubscribeToServices@CMultitaskingViewServiceProvider@@UEAAJPEAUIServiceProvider@@@Z @ 0x180137CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F710 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v11; // eax
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v13; // eax
  struct IServiceProviderVtbl *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct IServiceProviderVtbl *v17; // rax
  int v18; // eax
  __int64 v20[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v22; // [rsp+70h] [rbp+30h] BYREF
  __int64 v23; // [rsp+78h] [rbp+38h] BYREF
  __int64 v24; // [rsp+80h] [rbp+40h] BYREF
  __int64 v25; // [rsp+88h] [rbp+48h] BYREF

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
      (void *)0x8E,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
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
        (void *)0x92,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v9);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 24LL))(*((_QWORD *)this + 20), v22);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 21) + 24LL))(*((_QWORD *)this + 21), v22);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), v22);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 26) + 24LL))(*((_QWORD *)this + 26), v22);
      lpVtbl = a2->lpVtbl;
      v20[0] = 0LL;
      v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
              a2,
              &SID_VirtualDesktopSwitcher,
              &GUID_7a25165a_86f1_4b4a_b1d2_e89650cd9589,
              v20);
      v7 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9A,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v11);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 72LL))(*((_QWORD *)this + 19), v20[0]);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), *v5);
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 23) + 24LL))(*((_QWORD *)this + 23), v22);
        v24 = 0LL;
        v12 = a2->lpVtbl->QueryService;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
        v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v12)(
                a2,
                &SID_TouchpadSettingsManager,
                &GUID_6cde4e33_661a_4801_8f97_e9ff66c2443a,
                &v24);
        v7 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA2,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
            (const char *)(unsigned int)v13);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 40LL))(*((_QWORD *)this + 19), v24);
          v14 = a2->lpVtbl;
          v25 = 0LL;
          if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v14->QueryService)(
                 a2,
                 &SID_VirtualDesktopManager,
                 &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
                 &v25) >= 0 )
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), v25);
          LOBYTE(v16) = 3;
          LOBYTE(v15) = 1;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
            v15,
            v16);
          v17 = a2->lpVtbl;
          v23 = 0LL;
          v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v17->QueryService)(
                  a2,
                  &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
                  &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
                  &v23);
          v7 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xB0,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
              (const char *)(unsigned int)v18);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
          }
          else
          {
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19), v23);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
            v7 = 0;
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v20);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
  }
  return v7;
}
