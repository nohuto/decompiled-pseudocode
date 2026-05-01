/*
 * XREFs of ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x18010792C
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x180137914 (-RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CastToUnknown@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@IEAAPEAUIUnknown@@XZ @ 0x1800EB1E4 (-CastToUnknown@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarke.c)
 *     ?CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x180104804 (-CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x180104AD8 (-CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@.c)
 *     ?MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180107B64 (-MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?TabletModeViewManagerProxy_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180107BEC (-TabletModeViewManagerProxy_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CIconLoader_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180107C74 (-CIconLoader_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x180108174 (-MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMult.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x180137FDC (-CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::_InitChildServices(CMultitaskingViewServiceProvider *this)
{
  void **v1; // r14
  const struct _GUID *v3; // rdx
  int Instance; // ebx
  const struct _GUID *v5; // rdx
  IUnknown *v6; // rax
  const struct _GUID *v7; // rdx
  const struct _GUID *v8; // rcx
  const struct _GUID *v9; // r8
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (void **)((char *)this + 184);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 23);
  Instance = CAllUpViewService_CreateInstance(
               (struct IMultitaskingViewTaskScheduler *)(((unsigned __int64)this + 96) & -(__int64)(this != 0LL)),
               v3,
               v1);
  if ( Instance < 0 )
  {
    v13 = 263LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)Instance,
      v14);
    return (unsigned int)Instance;
  }
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 29);
  Instance = CVirtualDesktopSwitcherService_CreateInstance(
               (struct IMultitaskingViewTaskScheduler *)(((unsigned __int64)this + 96) & -(__int64)(this != 0LL)),
               v5,
               (void **)this + 29);
  if ( Instance < 0 )
  {
    v13 = 264LL;
    goto LABEL_18;
  }
  v6 = (IUnknown *)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown((__int64)this);
  Instance = IUnknown_SetSite((IUnknown *)*v1, v6);
  if ( Instance < 0 )
  {
    v13 = 265LL;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 24);
  Instance = CPPIAllUpViewService_CreateInstance(
               (CMultitaskingViewServiceProvider *)((char *)this + 96),
               v7,
               (void **)this + 24);
  if ( Instance < 0 )
  {
    v13 = 266LL;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 25);
  Instance = MultitaskingViewVisibilityService_CreateInstance(v8, (void **)this + 25);
  if ( Instance < 0 )
  {
    v13 = 267LL;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 22);
  Instance = MultitaskingViewGestureHandler_CreateInstance(
               (CMultitaskingViewServiceProvider *)((char *)this + 96),
               *((struct IMultitaskingViewVisibilityService **)this + 25),
               v9,
               (void **)this + 22);
  if ( Instance < 0 )
  {
    v13 = 268LL;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 26);
  Instance = TabletModeViewManagerProxy_CreateInstance(v10, (void **)this + 26);
  if ( Instance < 0 )
  {
    v13 = 269LL;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 27);
  Instance = CIconLoader_CreateInstance(v11, (void **)this + 27);
  if ( Instance < 0 )
  {
    v13 = 270LL;
    goto LABEL_18;
  }
  return (unsigned int)Instance;
}
