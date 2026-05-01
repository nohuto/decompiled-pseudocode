/*
 * XREFs of ?v_SetChangeCount@CTaskbandPin@@UEAAJK@Z @ 0x180750960
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CTaskbandPin::v_SetChangeCount(CTaskbandPin *this, int a2)
{
  int pvData; // [rsp+30h] [rbp-18h] BYREF

  pvData = a2;
  SHSetValueW(
    HKEY_CURRENT_USER,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
    L"FavoritesChanges",
    4u,
    &pvData,
    4u);
  return 0LL;
}
