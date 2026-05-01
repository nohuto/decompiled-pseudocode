/*
 * XREFs of _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$0 @ 0x1801D971C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1805D83B0 (--1-$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper__ResumeCoro_1_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 136) = *(_QWORD *)(a2 + 368) + 16LL;
  return wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::~com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(*(_QWORD *)(a2 + 136));
}
