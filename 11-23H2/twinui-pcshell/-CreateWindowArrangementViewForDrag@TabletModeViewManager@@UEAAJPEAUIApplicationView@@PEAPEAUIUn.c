/*
 * XREFs of ?CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUnknown@@@Z @ 0x1805C3520
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CastToUnknown@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@IEAAPEAUIUnknown@@XZ @ 0x1800EB1E4 (-CastToUnknown@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarke.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180578AA8 (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV2@PEAUIWindowArrangementView@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@$$QEAPEAVTabletModeViewManager@@$$QEAPEAUIWindowArrangementView@@@Z @ 0x1805C2EA0 (--$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV.c)
 *     ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x1805C3818 (-GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARR.c)
 *     ?WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1805D5D78 (-WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModeViewManager::CreateWindowArrangementViewForDrag(
        TabletModeViewManager *this,
        struct IApplicationView *a2,
        struct IUnknown **a3)
{
  unsigned int v6; // ebx
  const struct _GUID *v7; // rcx
  int Instance; // eax
  IUnknown *v9; // rax
  char v10; // r14
  int AppLayoutForDropFeedback; // eax
  __int64 v12; // rdx
  IUnknown **p_punk; // [rsp+30h] [rbp-10h] BYREF
  char v15; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  IUnknown *punk; // [rsp+80h] [rbp+40h] BYREF
  __int64 v18; // [rsp+90h] [rbp+50h] BYREF
  IUnknown *v19; // [rsp+98h] [rbp+58h] BYREF

  *a3 = 0LL;
  if ( !*((_QWORD *)this + 5) )
  {
    punk = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&punk);
    Instance = WindowArrangementView_CreateInstance(v7, (void **)&punk);
    v6 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD1,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)Instance);
LABEL_15:
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&punk);
      return v6;
    }
    v9 = (IUnknown *)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown((__int64)this - 88);
    IUnknown_SetSite(punk, v9);
    p_punk = &punk;
    v10 = 1;
    v15 = 1;
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    AppLayoutForDropFeedback = TabletModeViewManager::GetAppLayoutForDropFeedback((char *)this - 88, a2, 3LL, &v18);
    v6 = AppLayoutForDropFeedback;
    if ( AppLayoutForDropFeedback >= 0 )
    {
      AppLayoutForDropFeedback = ((__int64 (__fastcall *)(IUnknown *, struct IApplicationView *, __int64))punk->lpVtbl[1].QueryInterface)(
                                   punk,
                                   a2,
                                   v18);
      v6 = AppLayoutForDropFeedback;
      if ( AppLayoutForDropFeedback >= 0 )
      {
        v19 = punk;
        p_punk = (IUnknown **)((char *)this - 88);
        AppLayoutForDropFeedback = Microsoft::WRL::Details::MakeAndInitialize<TabletModeViewManager::CachedWindowArrangementViewLifetime,IUnknown,TabletModeViewManager *,IWindowArrangementView *>(
                                     a3,
                                     (struct TabletModeViewManager **)&p_punk,
                                     (struct IWindowArrangementView **)&v19);
        v6 = AppLayoutForDropFeedback;
        if ( AppLayoutForDropFeedback >= 0 )
        {
          Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 6, (__int64 *)&punk);
          v6 = 0;
          v10 = 0;
LABEL_13:
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
          if ( v10 )
            IUnknown_SetSite(punk, 0LL);
          goto LABEL_15;
        }
        v12 = 220LL;
      }
      else
      {
        v12 = 218LL;
      }
    }
    else
    {
      v12 = 217LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)AppLayoutForDropFeedback);
    goto LABEL_13;
  }
  v6 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCE,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)0x8007139FLL);
  return v6;
}
