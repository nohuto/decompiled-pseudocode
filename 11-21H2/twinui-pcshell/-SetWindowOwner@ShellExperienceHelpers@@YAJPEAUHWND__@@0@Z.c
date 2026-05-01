/*
 * XREFs of ?SetWindowOwner@ShellExperienceHelpers@@YAJPEAUHWND__@@0@Z @ 0x1803BF3AC
 * Callers:
 *     ?SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1803BF350 (-SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801661D4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?FixRelativeZOrderingBeforeOwnership@ShellExperienceHelpers@@YAXPEAUHWND__@@0@Z @ 0x1803BEC24 (-FixRelativeZOrderingBeforeOwnership@ShellExperienceHelpers@@YAXPEAUHWND__@@0@Z.c)
 */

signed int __fastcall ShellExperienceHelpers::SetWindowOwner(HWND hWnd, HWND hWndInsertAfter, HWND a3)
{
  __int64 v5; // rdx
  wil::details *v6; // rcx
  __int64 v7; // r8
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( hWndInsertAfter )
    ShellExperienceHelpers::FixRelativeZOrderingBeforeOwnership(hWnd, hWndInsertAfter, a3);
  SetLastError(0);
  if ( SetWindowLongPtrW(hWnd, -8, (LONG_PTR)hWndInsertAfter) || !GetLastError() )
  {
    if ( hWndInsertAfter )
      SetWindowPos(hWnd, hWndInsertAfter, 0, 0, 0, 0, 0x13u);
    return 0;
  }
  else if ( GetLastError() == 1400 )
  {
    return wil::details::GetLastErrorFailHr(v6, v5, v7, v8);
  }
  else
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x44,
             (int)"internal\\shell\\inc\\OwnedWindowHelpers.h",
             v8);
  }
}
