/*
 * XREFs of ?RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1803965E8
 * Callers:
 *     ??$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1803929F4 (--$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800A024C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CCC44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4Reporti.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$com_weak_query_nothrow@AEAV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@@wil@@YAJAEAV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@0@PEAPEAUIWeakReference@@@Z @ 0x180392CA0 (--$com_weak_query_nothrow@AEAV-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@@wil@@.c)
 *     BaseTrayFlyoutExperienceManager_CreateInstanceWithTestAndDismissFlags @ 0x1803976B0 (BaseTrayFlyoutExperienceManager_CreateInstanceWithTestAndDismissFlags.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MeetNowExperienceManager::RuntimeClassInitialize(
        MeetNowExperienceManager *this,
        struct IServiceProvider *a2)
{
  char *v4; // rsi
  int v5; // edx
  int v6; // r8d
  int InstanceWithTestAndDismissFlags; // ebx
  __int64 v8; // rdx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v10; // r9
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)this + 56;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 7);
  InstanceWithTestAndDismissFlags = BaseTrayFlyoutExperienceManager_CreateInstanceWithTestAndDismissFlags(
                                      (_DWORD)a2,
                                      v5,
                                      v6,
                                      3330,
                                      (__int64)v4);
  if ( InstanceWithTestAndDismissFlags >= 0 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 9, (__int64)this);
    *(_QWORD *)(*(_QWORD *)v4 + 384LL) = (char *)this + 48;
    *(_BYTE *)(*(_QWORD *)v4 + 465LL) = 1;
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 8);
    InstanceWithTestAndDismissFlags = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
                                        a2,
                                        &IID_IImmersiveWindowMessageService,
                                        &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                                        (char *)this + 64);
    if ( InstanceWithTestAndDismissFlags < 0 )
    {
      v8 = 113LL;
      goto LABEL_3;
    }
    InstanceWithTestAndDismissFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *))(**((_QWORD **)this + 8)
                                                                                                + 24LL))(
                                        *((_QWORD *)this + 8),
                                        0LL,
                                        (char *)this + 24,
                                        (char *)this + 408);
    if ( InstanceWithTestAndDismissFlags < 0 )
    {
      v8 = 114LL;
      goto LABEL_3;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_MACFlyout>::GetImpl'::`2'::impl,
      1u,
      3u,
      v10);
    lpVtbl = a2->lpVtbl;
    v17 = 0LL;
    v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))lpVtbl->QueryService)(
            a2,
            &SID_MeetAndChatManager,
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            &v17);
    InstanceWithTestAndDismissFlags = v12;
    if ( v12 >= 0 )
    {
      v14 = *((_QWORD *)this + 52);
      *((_QWORD *)this + 52) = 0LL;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v12 = wil::com_weak_query_nothrow<wil::com_ptr_t<IInspectable,wil::err_exception_policy> &>(
              &v17,
              (_QWORD *)this + 52);
      InstanceWithTestAndDismissFlags = v12;
      if ( v12 >= 0 )
      {
        InstanceWithTestAndDismissFlags = 0;
        goto LABEL_16;
      }
      v13 = 120LL;
    }
    else
    {
      v13 = 119LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_16:
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v17);
    return (unsigned int)InstanceWithTestAndDismissFlags;
  }
  v8 = 107LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
    (const char *)(unsigned int)InstanceWithTestAndDismissFlags);
  return (unsigned int)InstanceWithTestAndDismissFlags;
}
