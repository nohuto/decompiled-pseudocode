/*
 * XREFs of ?get_Created@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAE@Z @ 0x180391FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::get_Created(
        TwinUI::Cortana::ShellExperienceView *this,
        bool *a2)
{
  *a2 = *((_QWORD *)this + 7) != 0LL;
  return 0LL;
}
