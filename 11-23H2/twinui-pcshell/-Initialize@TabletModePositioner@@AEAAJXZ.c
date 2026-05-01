/*
 * XREFs of ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x180107378
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b29ba4880acd431ce144875775ea4dfc__&_::Run @ 0x1801071F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b29ba4880acd431ce144875775ea4dfc__-_--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CastToUnknown@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@IEAAPEAUIUnknown@@XZ @ 0x1800EB1E4 (-CastToUnknown@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarke.c)
 *     ?ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180104E60 (-ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x1801077CC (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18019964C (-PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall TabletModePositioner::Initialize(TabletModePositioner *this)
{
  void **v2; // rsi
  struct IUnknown *v3; // rax
  const struct _GUID *v4; // rdx
  int Instance; // ebx
  IUnknown *v6; // rax
  const struct _GUID *v7; // rcx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 58) )
    return 0LL;
  v2 = (void **)((char *)this + 312);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 39);
  v3 = (struct IUnknown *)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown((__int64)this);
  Instance = ChromeManager_CreateInstance(v3, v4, v2);
  if ( Instance < 0 )
  {
    v9 = 1644LL;
  }
  else
  {
    v6 = (IUnknown *)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown((__int64)this);
    IUnknown_SetSite((IUnknown *)*v2, v6);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 40);
    Instance = PositionAdjustmentHistory_CreateInstance(v7, (void **)this + 40);
    if ( Instance < 0 )
    {
      v9 = 1649LL;
    }
    else
    {
      Instance = TabletModePositioner::InitializeAppLayoutForStartup(this);
      if ( Instance >= 0 )
        return 0LL;
      v9 = 1653LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)Instance,
    v10);
  return (unsigned int)Instance;
}
