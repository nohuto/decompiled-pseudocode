/*
 * XREFs of ??$call_and_wait_for_completion@UITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@4@$$ZPEAU5@@wil@@YA?A_PPEAUITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@P81234@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@4@@Z$$QEAPEAU5@@Z @ 0x1800C65A8
 * Callers:
 *     ?ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800C7B18 (-ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wait_for_completion@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@V?$ComPtr@UITargetedContentSubscription@TargetedContent@Services@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UITargetedContentSubscription@TargetedContent@Services@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800C6918 (--$wait_for_completion@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@V-$ComP.c)
 *     ??_9ITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@$BDA@AA @ 0x1800C7A88 (--_9ITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@$BDA@AA.c)
 */

__int64 __fastcall ___call_and_wait_for_completion_UITargetedContentSubscriptionStatics_TargetedContent_Services_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVTargetedContentSubscription_TargetedContent_Services_Windows___Foundation_4___ZPEAU5__wil__YA_A_PPEAUITargetedContentSubscriptionStatics_TargetedContent_Services_Windows__P81234_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVTargetedContentSubscription_TargetedContent_Services_Windows___Foundation_4__Z__QEAPEAU5__Z(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v7; // eax
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  v7 =  Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics::`vcall'{48,{flat}}(a2, *a4, &v11);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x687,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v7,
      v9);
  wil::wait_for_completion<Windows::Services::TargetedContent::TargetedContentSubscription *,Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::ITargetedContentSubscription>>(
    a1,
    v11);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return a1;
}
