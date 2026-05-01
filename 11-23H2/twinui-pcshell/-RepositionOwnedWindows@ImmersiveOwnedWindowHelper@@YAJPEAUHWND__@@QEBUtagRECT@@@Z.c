/*
 * XREFs of ?RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z @ 0x18005C224
 * Callers:
 *     ?SetPositionAndViewData@CTaskWindow@@UEAAJQEBUtagRECT@@QEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18005C170 (-SetPositionAndViewData@CTaskWindow@@UEAAJQEBUtagRECT@@QEBUAPPLICATION_VIEW_DATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

signed int __fastcall ImmersiveOwnedWindowHelper::RepositionOwnedWindows(
        ImmersiveOwnedWindowHelper *this,
        __int128 *a2,
        const struct tagRECT *const a3)
{
  signed int result; // eax
  LPARAM lParam; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]

  lParam = (LPARAM)GetAncestor((HWND)this, 2u);
  v6 = *a2;
  if ( !lParam
    || EnumWindows((WNDENUMPROC)ImmersiveOwnedWindowHelper::EnumImmersiveComponentOwnedWindows, (LPARAM)&lParam) )
  {
    return -2147023496;
  }
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
