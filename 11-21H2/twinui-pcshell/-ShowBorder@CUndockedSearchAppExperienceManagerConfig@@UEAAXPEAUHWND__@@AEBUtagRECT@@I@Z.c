/*
 * XREFs of ?ShowBorder@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@I@Z @ 0x1800310A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CUndockedSearchAppExperienceManagerConfig::ShowBorder(
        CUndockedSearchAppExperienceManagerConfig *this,
        HWND a2,
        const struct tagRECT *a3)
{
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SRTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SRTest>::GetImpl'::`2'::impl,
    a2,
    a3);
}
