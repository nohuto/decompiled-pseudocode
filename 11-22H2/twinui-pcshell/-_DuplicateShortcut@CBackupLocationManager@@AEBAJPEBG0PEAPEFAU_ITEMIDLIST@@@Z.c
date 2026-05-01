/*
 * XREFs of ?_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z @ 0x18075D94C
 * Callers:
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180752E1C (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x18075D048 (-_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z @ 0x18075F0C8 (-s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z.c)
 *     ?s_ShouldCreateNewFile@CBackupLocationManager@@CAJPEAGI@Z @ 0x18075F538 (-s_ShouldCreateNewFile@CBackupLocationManager@@CAJPEAGI@Z.c)
 */

__int64 __fastcall CBackupLocationManager::_DuplicateShortcut(
        PCWSTR *this,
        const unsigned __int16 *a2,
        wchar_t *a3,
        struct _ITEMIDLIST **a4)
{
  int NewFile; // ebx
  const WCHAR *FileNameW; // rax
  unsigned int v10; // edx
  LPITEMIDLIST ppidl; // [rsp+30h] [rbp-D0h] BYREF
  struct _SHFILEOPSTRUCTW FileOp; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR pszName[264]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR pszPath[264]; // [rsp+280h] [rbp+180h] BYREF

  memset_0(pszPath, 0, 0x20AuLL);
  NewFile = StringCchCopyW(pszPath, 260LL, a2);
  if ( NewFile >= 0 )
  {
    memset_0(pszName, 0, 0x20AuLL);
    NewFile = StringCchCopyW(pszName, 260LL, a3);
    if ( NewFile >= 0 )
    {
      FileNameW = PathFindFileNameW(pszPath);
      NewFile = PathCchAppend(pszName, 0x104uLL, FileNameW);
      if ( NewFile >= 0 )
      {
        NewFile = SHParseDisplayName(a2, 0LL, &ppidl, 0, 0LL);
        if ( NewFile >= 0 )
        {
          NewFile = CBackupLocationManager::s_ShouldCreateNewFile(pszName, v10);
          ILFree(ppidl);
        }
      }
    }
    if ( NewFile )
    {
      if ( NewFile < 0 )
        return (unsigned int)NewFile;
    }
    else
    {
      FileOp.pFrom = pszPath;
      FileOp.pTo = pszName;
      *(_OWORD *)&FileOp.hwnd = 0LL;
      FileOp.wFunc = 2;
      memset(&FileOp.fFlags, 0, 24);
      FileOp.fFlags = 1556;
      if ( SHFileOperationW(&FileOp) || FileOp.fAnyOperationsAborted )
        return (unsigned int)-2147467259;
      CBackupLocationManager::s_CopyLocalizedName(a2, pszName);
    }
    NewFile = CBackupLocationManager::_CreateKnownFolderPidl(this, pszName, a4);
    if ( NewFile < 0 )
      return (unsigned int)SHParseDisplayName(pszName, 0LL, a4, 0, 0LL);
  }
  return (unsigned int)NewFile;
}
