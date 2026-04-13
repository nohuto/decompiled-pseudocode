/*
 * XREFs of ?ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800C7B18
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CBBCC (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$GetActivationFactory@UITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800C56DC (--$GetActivationFactory@UITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@@.c)
 *     ??$call_and_wait_for_completion@UITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@4@$$ZPEAU5@@wil@@YA?A_PPEAUITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@P81234@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@4@@Z$$QEAPEAU5@@Z @ 0x1800C65A8 (--$call_and_wait_for_completion@UITargetedContentSubscriptionStatics@TargetedContent@Services@Wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = *((_QWORD *)this + 1);
  try
  {
    v3 = (__int64 *)wil::GetActivationFactory<Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>(
                      (const WCHAR *)&v10,
                      a2,
                      a3);
    ___call_and_wait_for_completion_UITargetedContentSubscriptionStatics_TargetedContent_Services_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVTargetedContentSubscription_TargetedContent_Services_Windows___Foundation_4___ZPEAU5__wil__YA_A_PPEAUITargetedContentSubscriptionStatics_TargetedContent_Services_Windows__P81234_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVTargetedContentSubscription_TargetedContent_Services_Windows___Foundation_4__Z__QEAPEAU5__Z(
      (__int64)&v8,
      *v3,
      v4,
      &v9);
    v5 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v10);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x128,
      (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      v6);
  }
}
