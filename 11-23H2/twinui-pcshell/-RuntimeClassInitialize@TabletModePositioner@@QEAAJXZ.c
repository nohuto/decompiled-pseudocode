/*
 * XREFs of ?RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ @ 0x18010725C
 * Callers:
 *     ??$MakeAndInitialize@VTabletModePositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18019433C (--$MakeAndInitialize@VTabletModePositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnk.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CastToUnknown@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@IEAAPEAUIUnknown@@XZ @ 0x1800EB1E4 (-CastToUnknown@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarke.c)
 *     ?AppLayoutCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180107428 (-AppLayoutCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18019A5CC (-ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall TabletModePositioner::RuntimeClassInitialize(TabletModePositioner *this)
{
  void **v1; // rsi
  const struct _GUID *v3; // rcx
  HRESULT Instance; // ebx
  IUnknown *v5; // rax
  const struct _GUID *v6; // rcx
  __int64 v8; // rdx
  int v9[4]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v10; // [rsp+30h] [rbp-68h]
  GUID v11; // [rsp+40h] [rbp-58h]
  __int128 v12; // [rsp+50h] [rbp-48h]
  GUID v13; // [rsp+60h] [rbp-38h]
  void *v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v1 = (void **)((char *)this + 256);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 32);
  Instance = AppLayoutCache_CreateInstance(v3, v1);
  if ( Instance < 0 )
  {
    v8 = 331LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)Instance,
      v9[0]);
    return (unsigned int)Instance;
  }
  v5 = (IUnknown *)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown((__int64)this);
  Instance = IUnknown_SetSite((IUnknown *)*v1, v5);
  if ( Instance < 0 )
  {
    v8 = 332LL;
    goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 38);
  Instance = ScreenManager_CreateInstance(v6, (void **)this + 38);
  if ( Instance < 0 )
  {
    v8 = 333LL;
    goto LABEL_10;
  }
  v14 = *v1;
  *(GUID *)v9 = GUID_975d55f5_ce62_42c0_868a_eda817f3871e;
  v15 = 0LL;
  v10 = 0LL;
  v11 = GUID_3f48d9d3_200d_4446_bb9d_dae2a43781a2;
  v12 = 0LL;
  v13 = GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0;
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (TabletModePositioner *)((char *)this + 24),
               (const struct CImmersiveShellComponent::ISC_SERVICE *)v9,
               3u);
  if ( Instance < 0 )
  {
    v8 = 341LL;
    goto LABEL_10;
  }
  return (unsigned int)Instance;
}
