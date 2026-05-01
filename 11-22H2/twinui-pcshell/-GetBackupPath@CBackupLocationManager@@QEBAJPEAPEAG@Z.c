/*
 * XREFs of ?GetBackupPath@CBackupLocationManager@@QEBAJPEAPEAG@Z @ 0x18075461C
 * Callers:
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x180752C34 (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180752E1C (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CBackupLocationManager::GetBackupPath(PCWSTR *this, unsigned __int16 **a2)
{
  HRESULT Error; // ebx
  LPITEMIDLIST ppidl; // [rsp+20h] [rbp-238h] BYREF
  WCHAR pszPath[264]; // [rsp+30h] [rbp-228h] BYREF

  *a2 = 0LL;
  Error = SHGetKnownFolderIDList(&FOLDERID_UserPinned, 0x9000u, 0LL, &ppidl);
  if ( Error >= 0 )
  {
    if ( SHGetPathFromIDListW(ppidl, pszPath) )
    {
      Error = PathCchAppend(pszPath, 0x104uLL, *this);
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
    else
    {
      Error = -2147024882;
    }
    ILFree(ppidl);
  }
  return (unsigned int)Error;
}
