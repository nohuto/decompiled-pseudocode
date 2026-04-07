/*
 * XREFs of std::_Func_impl_no_alloc__lambda_02cc1c50b8ad83b5853f3b1d8986beec__void_::_Do_call @ 0x18009BBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009870C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180105C50 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 */

void std::_Func_impl_no_alloc__lambda_02cc1c50b8ad83b5853f3b1d8986beec__void_::_Do_call()
{
  int v0; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(
         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
         0);
  if ( v0 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      760LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v0);
}
