/*
 * XREFs of ?GetTombstonePath@CBackupLocationManager@@QEBAJPEAPEAG@Z @ 0x180756C18
 * Callers:
 *     ?_GetTombstoneShortcutLocation@CBackupLocationManager@@AEBAJPEAG0_K@Z @ 0x18075E174 (-_GetTombstoneShortcutLocation@CBackupLocationManager@@AEBAJPEAG0_K@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CBackupLocationManager::GetTombstonePath(PCWSTR *this, unsigned __int16 **a2)
{
  HRESULT Error; // ebx
  ITEMIDLIST *v5; // rcx
  ITEMIDLIST *v6; // rcx
  LPITEMIDLIST ppidl; // [rsp+28h] [rbp-D8h] BYREF
  char v9; // [rsp+30h] [rbp-D0h]
  LPCITEMIDLIST pidl; // [rsp+38h] [rbp-C8h]
  WCHAR pszPath[264]; // [rsp+40h] [rbp-C0h] BYREF

  *a2 = 0LL;
  pidl = 0LL;
  ppidl = 0LL;
  v9 = 1;
  Error = SHGetKnownFolderIDList(&FOLDERID_UserPinned, 0x9000u, 0LL, &ppidl);
  if ( v9 )
  {
    v5 = (ITEMIDLIST *)pidl;
    pidl = ppidl;
    if ( v5 )
      CoTaskMemFree(v5);
  }
  if ( Error >= 0 )
  {
    if ( SHGetPathFromIDListW(pidl, pszPath) )
    {
      Error = PathCchAppend(pszPath, 0x104uLL, *this);
      if ( Error >= 0 )
      {
        Error = PathCchAppend(pszPath, 0x104uLL, L"Tombstones");
        if ( Error >= 0 )
        {
          if ( PathFileExistsW(pszPath)
            || CreateDirectoryW(pszPath, 0LL)
            || (Error = ResultFromKnownLastError(), Error >= 0) )
          {
            Error = SHStrDupW(pszPath, a2);
          }
        }
      }
    }
    else
    {
      Error = -2147024882;
    }
  }
  v6 = (ITEMIDLIST *)pidl;
  pidl = 0LL;
  if ( v6 )
    CoTaskMemFree(v6);
  return (unsigned int)Error;
}
