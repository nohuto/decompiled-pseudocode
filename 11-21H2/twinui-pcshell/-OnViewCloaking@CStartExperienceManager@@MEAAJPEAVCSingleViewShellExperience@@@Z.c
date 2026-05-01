/*
 * XREFs of ?OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180038620
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801191C4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@QEAAX_NW4Reporting.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewCloaking(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  if ( !*((_BYTE *)this + 592) )
  {
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_STest03>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl,
      a2,
      0LL);
  }
  return 0LL;
}
