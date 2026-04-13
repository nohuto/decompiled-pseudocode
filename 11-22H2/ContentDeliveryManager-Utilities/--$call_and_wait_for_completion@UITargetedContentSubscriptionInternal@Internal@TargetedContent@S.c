/*
 * XREFs of ??$call_and_wait_for_completion@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@5@$$ZPEAU6@@wil@@YA?A_PPEAUITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@P812345@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@5@@Z$$QEAPEAU6@@Z @ 0x1800C651C
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CBBCC (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wait_for_completion@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@V?$ComPtr@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800C6838 (--$wait_for_completion@PEAU-$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@V-$ComP.c)
 *     ??_9ITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@$BDA@AA @ 0x1800C7A68 (--_9ITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@$BDA@AA.c)
 */

__int64 __fastcall ___call_and_wait_for_completion_UITargetedContentSubscriptionInternal_Internal_TargetedContent_Services_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAU__IVectorView_PEAUHSTRING_____Collections_Foundation_Windows___Foundation_5___ZPEAU6__wil__YA_A_PPEAUITargetedContentSubscriptionInternal_Internal_TargetedContent_Services_Windows__P812345_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAU__IVectorView_PEAUHSTRING_____Collections_Foundation_Windows___Foundation_5__Z__QEAPEAU6__Z(
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
  v7 =  Windows::Services::TargetedContent::Internal::ITargetedContentSubscriptionInternal::`vcall'{48,{flat}}(
         a2,
         *a4,
         &v11);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x687,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v7,
      v9);
  wil::wait_for_completion<Windows::Foundation::Collections::IVectorView<HSTRING__ *> *,Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<HSTRING__ *>>>(
    a1,
    v11);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return a1;
}
