/*
 * XREFs of ?SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F7170
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JointResizeIcons@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801186A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JointResizeIcons@@@details@wil@@QEAAX_NW4.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultitaskingSettingsSimplification@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801188AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultitaskingSettingsSimplification@@@deta.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterForEvents@JointResize@@AEAAJXZ @ 0x18013875C (-RegisterForEvents@JointResize@@AEAAJXZ.c)
 *     ?IsJointResizeEnabled@JointResize@@AEAA_NXZ @ 0x1801B8E80 (-IsJointResizeEnabled@JointResize@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall JointResize::SubscribeToServices(JointResize *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v5; // ebx
  HRESULT (__stdcall *v6)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  JointResize *v12; // rcx
  __int64 v13; // rdx
  LPVOID v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rdx
  int ppv; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID v20; // [rsp+40h] [rbp+8h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 13);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
         &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
         (char *)this + 104);
  if ( v5 < 0 )
  {
    v17 = 217LL;
  }
  else
  {
    v6 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 14);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v6)(
           a2,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           (char *)this + 112);
    if ( v5 < 0 )
    {
      v17 = 218LL;
    }
    else
    {
      v7 = a2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 15);
      v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v7)(
             a2,
             &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
             &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
             (char *)this + 120);
      if ( v5 < 0 )
      {
        v17 = 219LL;
      }
      else
      {
        v8 = a2->lpVtbl->QueryService;
        v9 = *((_QWORD *)this + 16);
        *((_QWORD *)this + 16) = 0LL;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v8)(
               a2,
               &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
               &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
               (char *)this + 128);
        if ( v5 < 0 )
        {
          v17 = 220LL;
        }
        else
        {
          v10 = *((_QWORD *)this + 17);
          *((_QWORD *)this + 17) = 0LL;
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 16))(
                 *((_QWORD *)this + 16),
                 &GUID_dc8a3be5_1955_55a9_b901_9f152fa82752,
                 (char *)this + 136);
          if ( v5 < 0 )
          {
            v17 = 221LL;
          }
          else
          {
            LOBYTE(v11) = 1;
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultitaskingSettingsSimplification>::ReportUsage(
              &`wil::Feature<__WilFeatureTraits_Feature_MultitaskingSettingsSimplification>::GetImpl'::`2'::impl,
              v11);
            if ( !JointResize::IsJointResizeEnabled(v12) )
              return 0LL;
            v5 = JointResize::RegisterForEvents((JointResize *)((char *)this - 24));
            if ( v5 >= 0 )
            {
              LOBYTE(v13) = 1;
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_JointResizeIcons>::ReportUsage(
                &`wil::Feature<__WilFeatureTraits_Feature_JointResizeIcons>::GetImpl'::`2'::impl,
                v13);
              v20 = 0LL;
              CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &v20);
              v14 = v20;
              v20 = 0LL;
              v15 = *((_QWORD *)this + 28);
              *((_QWORD *)this + 28) = v14;
              if ( v15 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
              wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)&v20);
              return 0LL;
            }
            v17 = 234LL;
          }
        }
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
    (const char *)(unsigned int)v5,
    ppv);
  return (unsigned int)v5;
}
