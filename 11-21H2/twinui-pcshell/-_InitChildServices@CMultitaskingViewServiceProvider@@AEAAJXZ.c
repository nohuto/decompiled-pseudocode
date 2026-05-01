/*
 * XREFs of ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x180113E9C
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x180114850 (-RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CastToUnknown@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@IEAAPEAUIUnknown@@XZ @ 0x1800B0FBC (-CastToUnknown@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarke.c)
 *     ?MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D1370 (-MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D3204 (-CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D33D8 (-CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID.c)
 *     ?CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D3648 (-CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@.c)
 *     ?MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FD364 (-MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMult.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VsUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180114010 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VsUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?CIconLoader_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180114440 (-CIconLoader_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?TabletModeViewManagerProxy_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180114600 (-TabletModeViewManagerProxy_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::_InitChildServices(CMultitaskingViewServiceProvider *this)
{
  void **v1; // rsi
  const struct _GUID *v3; // rdx
  __int64 v4; // rdx
  int Instance; // ebx
  const struct _GUID *v6; // rdx
  IUnknown *v7; // rax
  const struct _GUID *v8; // rdx
  const struct _GUID *v9; // rcx
  const struct _GUID *v10; // r8
  const struct _GUID *v11; // rcx
  const struct _GUID *v12; // rcx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (void **)((char *)this + 184);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 23);
  Instance = CAllUpViewService_CreateInstance(
               (struct IMultitaskingViewTaskScheduler *)(((unsigned __int64)this + 96) & -(__int64)(this != 0LL)),
               v3,
               v1);
  if ( Instance < 0 )
  {
    v14 = 250LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VsUpdates>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VsUpdates>::GetImpl'::`2'::impl,
    v4);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 29);
  Instance = CVirtualDesktopSwitcherService_CreateInstance(
               (struct IMultitaskingViewTaskScheduler *)(((unsigned __int64)this + 96) & -(__int64)(this != 0LL)),
               v6,
               (void **)this + 29);
  if ( Instance < 0 )
  {
    v14 = 253LL;
    goto LABEL_18;
  }
  v7 = (IUnknown *)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown((__int64)this);
  Instance = IUnknown_SetSite((IUnknown *)*v1, v7);
  if ( Instance < 0 )
  {
    v14 = 255LL;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 24);
  Instance = CPPIAllUpViewService_CreateInstance(
               (CMultitaskingViewServiceProvider *)((char *)this + 96),
               v8,
               (void **)this + 24);
  if ( Instance < 0 )
  {
    v14 = 256LL;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 25);
  Instance = MultitaskingViewVisibilityService_CreateInstance(v9, (void **)this + 25);
  if ( Instance < 0 )
  {
    v14 = 257LL;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 22);
  Instance = MultitaskingViewGestureHandler_CreateInstance(
               (CMultitaskingViewServiceProvider *)((char *)this + 96),
               *((struct IMultitaskingViewVisibilityService **)this + 25),
               v10,
               (void **)this + 22);
  if ( Instance < 0 )
  {
    v14 = 258LL;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 26);
  Instance = TabletModeViewManagerProxy_CreateInstance(v11, (void **)this + 26);
  if ( Instance < 0 )
  {
    v14 = 259LL;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 27);
  Instance = CIconLoader_CreateInstance(v12, (void **)this + 27);
  if ( Instance < 0 )
  {
    v14 = 260LL;
    goto LABEL_18;
  }
  return (unsigned int)Instance;
}
