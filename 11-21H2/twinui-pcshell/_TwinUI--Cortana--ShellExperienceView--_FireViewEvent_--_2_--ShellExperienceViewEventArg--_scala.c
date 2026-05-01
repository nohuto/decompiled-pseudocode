/*
 * XREFs of _TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::_scalar_deleting_destructor_ @ 0x180390FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::_ShellExperienceViewEventArg @ 0x180390F64 (_TwinUI--Cortana--ShellExperienceView--_FireViewEvent_--_2_--ShellExperienceViewEventArg--_Shell.c)
 */

void *__fastcall TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::_ShellExperienceViewEventArg((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
