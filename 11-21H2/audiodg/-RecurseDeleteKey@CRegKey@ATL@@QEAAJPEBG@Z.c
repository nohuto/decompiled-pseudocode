/*
 * XREFs of ?RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x140086358
 * Callers:
 *     ?RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x140086358 (-RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14008680C (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     ?Close@CRegKey@ATL@@QEAAJXZ @ 0x1400846D0 (-Close@CRegKey@ATL@@QEAAJXZ.c)
 *     ?DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x1400851D4 (-DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z @ 0x140085644 (-Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z.c)
 *     ?RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x140086358 (-RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall ATL::CRegKey::RecurseDeleteKey(HKEY *this, const unsigned __int16 *a2)
{
  DWORD i; // eax
  DWORD v5; // ebx
  DWORD cchName; // [rsp+40h] [rbp-C0h] BYREF
  HKEY hKey[3]; // [rsp+48h] [rbp-B8h] BYREF
  struct _FILETIME ftLastWriteTime; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR Name[256]; // [rsp+70h] [rbp-90h] BYREF

  memset(hKey, 0, sizeof(hKey));
  for ( i = ATL::CRegKey::Open(hKey, *this, a2, 0x2001Fu); ; i = ATL::CRegKey::RecurseDeleteKey(
                                                                   (ATL::CRegKey *)hKey,
                                                                   Name) )
  {
    v5 = i;
    if ( i )
      break;
    cchName = 256;
    if ( RegEnumKeyExW(hKey[0], 0, Name, &cchName, 0LL, 0LL, 0LL, &ftLastWriteTime) )
    {
      ATL::CRegKey::Close(hKey);
      v5 = ATL::CRegKey::DeleteSubKey((ATL::CRegKey *)this, a2);
      break;
    }
  }
  ATL::CRegKey::Close(hKey);
  return v5;
}
