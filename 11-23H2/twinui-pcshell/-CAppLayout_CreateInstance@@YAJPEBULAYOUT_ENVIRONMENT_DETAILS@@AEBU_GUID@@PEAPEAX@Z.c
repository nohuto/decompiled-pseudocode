/*
 * XREFs of ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18016C4CC
 * Callers:
 *     ?Clone@CAppLayout@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016C080 (-Clone@CAppLayout@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout@@@Z @ 0x18016C2E8 (-CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout.c)
 *     ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x1805C3818 (-GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARR.c)
 *     ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x1805D1324 (-BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAppLayout@@@WRL@Microsoft@@IEAAKXZ @ 0x180140ABC (-InternalRelease@-$ComPtr@VCAppLayout@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18016C594 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIAp.c)
 *     ??0CAppLayout@@QEAA@XZ @ 0x18016C6D8 (--0CAppLayout@@QEAA@XZ.c)
 *     ?SetLayoutEnv@CAppLayout@@UEAAXPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18016C820 (-SetLayoutEnv@CAppLayout@@UEAAXPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_e618d2e1a4350f330cc93ddf3d982686_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18024F700 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_e618d2e1a4350f330cc93ddf3d982686_@@@ComTaskPool@Inte.c)
 */

__int64 __fastcall CAppLayout_CreateInstance(
        const struct LAYOUT_ENVIRONMENT_DETAILS *a1,
        const struct _GUID *a2,
        void **a3,
        __int64 a4)
{
  CAppLayout *v6; // rax
  CAppLayout *v7; // rax
  volatile int *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // [rsp+38h] [rbp+10h] BYREF
  CAppLayout *v18; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<CAppLayout>::InternalRelease(&v17, (__int64)a2, (__int64)a3, a4);
  v17 = 0LL;
  v6 = (CAppLayout *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v6;
  if ( v6 )
  {
    v7 = CAppLayout::CAppLayout(v6);
    v18 = v7;
    v11 = (__int64)v7;
    if ( v7 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CAppLayout *)((char *)v7 + 52), v8);
    v17 = v11;
    Microsoft::WRL::ComPtr<CAppLayout>::InternalRelease((__int64 *)&v18, (__int64)v8, v9, v10);
    if ( a1 )
      CAppLayout::SetLayoutEnv((CAppLayout *)(v11 + 40), a1);
    v13 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IAppLayoutInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutBuilder,IAppLayout,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>>(
            v11,
            &GUID_dad20bf4_9130_4ecb_bcce_cab826dcafae,
            a3);
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e618d2e1a4350f330cc93ddf3d982686_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e618d2e1a4350f330cc93ddf3d982686_>>(&v18);
    v13 = -2147024882;
  }
  Microsoft::WRL::ComPtr<CAppLayout>::InternalRelease(&v17, v12, v14, v15);
  return v13;
}
