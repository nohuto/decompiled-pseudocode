/*
 * XREFs of ?get_ViewState@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAW4ExperienceViewState@CSingleViewShellExperience@@@Z @ 0x1801C0F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::get_ViewState(
        TwinUI::Cortana::ShellExperienceView *this,
        enum CSingleViewShellExperience::ExperienceViewState *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 18);
  return 0LL;
}
