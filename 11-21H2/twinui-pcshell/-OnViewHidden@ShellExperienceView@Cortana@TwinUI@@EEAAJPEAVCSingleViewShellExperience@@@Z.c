/*
 * XREFs of ?OnViewHidden@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180391520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::OnViewHidden(
        TwinUI::Cortana::ShellExperienceView *this,
        struct CSingleViewShellExperience *a2)
{
  return TwinUI::Cortana::ShellExperienceView::_FireViewChanged((char *)this - 40, 7LL);
}
