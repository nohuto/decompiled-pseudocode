/*
 * XREFs of ?Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z @ 0x180391370
 * Callers:
 *     <none>
 * Callees:
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1805F1994 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::Launch(TwinUI::Cortana::ShellExperienceView *this, HSTRING a2)
{
  CSingleViewShellExperience *v2; // rbx

  v2 = (TwinUI::Cortana::ShellExperienceView *)((char *)this + 32);
  CSingleViewShellExperience::SetArgs((TwinUI::Cortana::ShellExperienceView *)((char *)this + 32), a2);
  return CSingleViewShellExperience::Launch(v2);
}
