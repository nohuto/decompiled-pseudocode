/*
 * XREFs of ?v_GetChangeCount@CTaskbandPin@@MEAAJPEAK@Z @ 0x18074FC90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CTaskbandPin::v_GetChangeCount(CTaskbandPin *this, unsigned int *pvData)
{
  DWORD pcbData; // [rsp+30h] [rbp-18h] BYREF

  pcbData = 4;
  if ( SHGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
         L"FavoritesChanges",
         0LL,
         pvData,
         &pcbData) )
  {
    *pvData = 0;
  }
  return 0LL;
}
