/*
 * XREFs of ?Solidify@GhostDivider@@UEAAXXZ @ 0x18052C860
 * Callers:
 *     ?Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z @ 0x18052C810 (-Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18052A514 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?ChangeDividerVisibility@GhostDivider@@AEAAX_N@Z @ 0x18052BB1C (-ChangeDividerVisibility@GhostDivider@@AEAAX_N@Z.c)
 *     ?DrawGrabber@GhostDivider@@AEAAXXZ @ 0x18052BC4C (-DrawGrabber@GhostDivider@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GhostDivider::Solidify(GhostDivider *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_BYTE *)this + 92) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v7[0] = *((_QWORD *)this + 7);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JRITest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl,
    1u,
    v5,
    v6);
  GhostDivider::ChangeDividerVisibility(this, 1u);
  GhostDivider::DrawGrabber(this);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v7);
}
