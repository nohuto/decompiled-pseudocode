/*
 * XREFs of ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18011F2D0
 * Callers:
 *     ?CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout@@@Z @ 0x18011D308 (-CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout.c)
 *     ?Clone@CAppLayout@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D480 (-Clone@CAppLayout@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x18050B308 (-GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARR.c)
 *     ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x180518C74 (-BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CastToUnknown@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@IEAAPEAUIUnknown@@XZ @ 0x1800B0FBC (-CastToUnknown@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarke.c)
 *     ?InternalRelease@?$ComPtr@VCAppLayout@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EDE54 (-InternalRelease@-$ComPtr@VCAppLayout@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18011F240 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAppLayoutInternal@@U-.c)
 *     ??0CAppLayout@@QEAA@XZ @ 0x18011F3E4 (--0CAppLayout@@QEAA@XZ.c)
 *     ?SetLayoutEnv@CAppLayout@@UEAAXPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18011F5A0 (-SetLayoutEnv@CAppLayout@@UEAAXPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VCGITCookieObject@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1805F3478 (--1-$MakeAllocator@VCGITCookieObject@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CAppLayout_CreateInstance(
        const struct LAYOUT_ENVIRONMENT_DETAILS *a1,
        const struct _GUID *a2,
        void **a3)
{
  CAppLayout *v5; // rax
  CAppLayout *v6; // rax
  volatile int *v7; // rdx
  __int64 v8; // rbx
  const struct _GUID *v9; // r9
  _DWORD *v10; // rdx
  int CanCastTo; // edi
  _QWORD *v12; // r8
  void *v14; // rax
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF
  CAppLayout *v16; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<CAppLayout>::InternalRelease(&v15);
  v15 = 0LL;
  v5 = (CAppLayout *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v5;
  if ( v5 )
  {
    v6 = CAppLayout::CAppLayout(v5);
    v16 = v6;
    v8 = (__int64)v6;
    if ( v6 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CAppLayout *)((char *)v6 + 52), v7);
    v15 = v8;
    Microsoft::WRL::ComPtr<CAppLayout>::InternalRelease((__int64 *)&v16);
    if ( a1 )
      CAppLayout::SetLayoutEnv((CAppLayout *)(v8 + 40), a1);
    *a3 = 0LL;
    if ( InlineIsEqualGUID(&GUID_dad20bf4_9130_4ecb_bcce_cab826dcafae, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v14 = (void *)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown(v8);
      *a3 = v14;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 8LL))(v14);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)v8, v9, a3);
      if ( CanCastTo == -2147467262 )
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAppLayoutInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutBuilder,IAppLayout,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::CanCastTo(
                      v8 + 32,
                      v10,
                      v12);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CGITCookieObject>::~MakeAllocator<CGITCookieObject>(&v16);
    CanCastTo = -2147024882;
  }
  Microsoft::WRL::ComPtr<CAppLayout>::InternalRelease(&v15);
  return (unsigned int)CanCastTo;
}
