/*
 * XREFs of ?IsUndockedAssetAvailable@@YA_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1805F867C
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1800525BC (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F793C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall IsUndockedAssetAvailable(int a1, __int64 a2, __int64 a3, const char *a4)
{
  int v4; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a1 - 1;
  if ( v4 && v4 != 3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2D,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\utils.cpp",
      a4);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    1u,
    3u,
    (__int64)a4);
  return 1;
}
