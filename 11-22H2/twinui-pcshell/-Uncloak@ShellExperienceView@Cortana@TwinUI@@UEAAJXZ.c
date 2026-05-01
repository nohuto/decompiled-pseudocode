/*
 * XREFs of ?Uncloak@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1804700C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uncloak@CSingleViewShellExperience@@QEAAJXZ @ 0x180054F10 (-Uncloak@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::Uncloak(HSTRING *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CSingleViewShellExperience::Uncloak(this + 6);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
