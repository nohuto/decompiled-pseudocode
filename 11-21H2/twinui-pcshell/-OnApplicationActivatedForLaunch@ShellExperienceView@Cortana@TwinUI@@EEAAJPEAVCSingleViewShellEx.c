/*
 * XREFs of ?OnApplicationActivatedForLaunch@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x180391420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::OnApplicationActivatedForLaunch(
        TwinUI::Cortana::ShellExperienceView *this,
        struct CSingleViewShellExperience *a2)
{
  return TwinUI::Cortana::ShellExperienceView::_FireViewChanged((char *)this - 40, 0LL);
}
