/*
 * XREFs of ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180753208
 * Callers:
 *     ?_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z @ 0x18075D484 (-_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z @ 0x1803CC82C (-ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?ILNextHidden@@YAPEFBU_HIDDENITEMID@@PEFBU1@PEFBU_ITEMIDLIST@@@Z @ 0x1803CC8E4 (-ILNextHidden@@YAPEFBU_HIDDENITEMID@@PEFBU1@PEFBU_ITEMIDLIST@@@Z.c)
 *     BindCtx_SetMode @ 0x180752A80 (BindCtx_SetMode.c)
 *     ?ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z @ 0x180756DB4 (-ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z.c)
 *     ?_GetTombstoneShortcutLocation@CBackupLocationManager@@AEBAJPEAG0_K@Z @ 0x18075E174 (-_GetTombstoneShortcutLocation@CBackupLocationManager@@AEBAJPEAG0_K@Z.c)
 *     ?s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z @ 0x18075F0C8 (-s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CBackupLocationManager::CreateTombstoneLnk(
        CBackupLocationManager *this,
        LPCITEMIDLIST pidl,
        struct _ITEMIDLIST **a3)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // r9
  int TombstoneShortcutLocation; // ebx
  int v9; // eax
  HRESULT v10; // edi
  ITEMIDLIST *v11; // rcx
  LPITEMIDLIST v12; // rcx
  struct _ITEMIDLIST *v13; // rbx
  const ITEMIDLIST *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // si
  ITEMIDLIST *v18; // rcx
  ITEMIDLIST *v19; // rcx
  const struct _ITEMIDLIST *ID; // rax
  const struct _HIDDENITEMID *HiddenID; // rax
  unsigned __int16 *v22; // r10
  const struct _ITEMIDLIST *i; // rsi
  const struct _HIDDENITEMID *v24; // rdi
  LPITEMIDLIST v25; // rcx
  ITEMIDLIST *v26; // rcx
  LPITEMIDLIST ppidl; // [rsp+38h] [rbp-C8h] BYREF
  char v29; // [rsp+40h] [rbp-C0h]
  struct _SHFILEOPSTRUCTW FileOp; // [rsp+48h] [rbp-B8h] BYREF
  LPCITEMIDLIST pidlChild; // [rsp+80h] [rbp-80h]
  LPCITEMIDLIST pidl1; // [rsp+88h] [rbp-78h]
  IBindCtx *pbc; // [rsp+90h] [rbp-70h] BYREF
  LPITEMIDLIST pidlParent; // [rsp+98h] [rbp-68h]
  WCHAR pszPath[264]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR v36[264]; // [rsp+2B0h] [rbp+1B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+508h] [rbp+408h]

  memset_0(pszPath, 0, 0x20AuLL);
  if ( !SHGetPathFromIDListW(pidl, pszPath) )
  {
    v6 = 3084LL;
LABEL_42:
    TombstoneShortcutLocation = -2147467259;
    goto LABEL_43;
  }
  memset_0(v36, 0, 0x20AuLL);
  TombstoneShortcutLocation = CBackupLocationManager::_GetTombstoneShortcutLocation(this, pszPath, v36, v7);
  if ( TombstoneShortcutLocation < 0 )
  {
    v6 = 3088LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)TombstoneShortcutLocation);
    return (unsigned int)TombstoneShortcutLocation;
  }
  *(_OWORD *)&FileOp.hwnd = 0LL;
  memset(&FileOp.fFlags, 0, 24);
  FileOp.wFunc = 2;
  FileOp.pFrom = pszPath;
  FileOp.pTo = v36;
  FileOp.fFlags = 1556;
  if ( SHFileOperationW(&FileOp) || FileOp.fAnyOperationsAborted )
  {
    v6 = 3095LL;
    goto LABEL_42;
  }
  v9 = CBackupLocationManager::s_CopyLocalizedName(pszPath, v36);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC1A,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v9);
  pidlChild = 0LL;
  ppidl = 0LL;
  v29 = 1;
  v10 = SHILCreateFromPath(v36, &ppidl, 0LL);
  if ( v29 )
  {
    v11 = (ITEMIDLIST *)pidlChild;
    pidlChild = ppidl;
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( v10 >= 0 )
  {
    pidlParent = 0LL;
    ppidl = 0LL;
    v29 = 1;
    v10 = SHGetKnownFolderIDList(&FOLDERID_UserPinned, 0x9000u, 0LL, &ppidl);
    if ( v29 )
    {
      v12 = pidlParent;
      pidlParent = ppidl;
      if ( v12 )
        CoTaskMemFree(v12);
    }
    if ( v10 >= 0 )
    {
      v13 = 0LL;
      pidl1 = 0LL;
      v14 = ILFindChild(pidlParent, pidlChild);
      if ( !v14 )
        goto LABEL_29;
      pbc = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&pbc);
      if ( (int)BindCtx_SetMode(v16, v15, &pbc) >= 0 )
      {
        pidl1 = 0LL;
        ppidl = 0LL;
        v29 = 1;
        v17 = SHParseDisplayName(L"::{1f3427c8-5c10-4210-aa03-2ee45287d668}", pbc, &ppidl, 0, 0LL) >= 0;
        if ( v29 )
        {
          v18 = (ITEMIDLIST *)pidl1;
          pidl1 = ppidl;
          if ( v18 )
            CoTaskMemFree(v18);
        }
        if ( v17 )
          v13 = ILCombine(pidl1, v14);
        v19 = (ITEMIDLIST *)pidl1;
        pidl1 = 0LL;
        if ( v19 )
          CoTaskMemFree(v19);
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&pbc);
      if ( !v13 )
      {
LABEL_29:
        v13 = (struct _ITEMIDLIST *)pidlChild;
        pidlChild = 0LL;
      }
      ID = ILFindLastID(pidl);
      HiddenID = ILFindFirstHiddenID(ID);
      for ( i = (const struct _ITEMIDLIST *)((char *)v22 + *v22);
            ;
            HiddenID = (const struct _HIDDENITEMID *)ILNextHidden(v24, i) )
      {
        v24 = HiddenID;
        if ( !HiddenID )
        {
          *a3 = v13;
          v10 = 0;
          goto LABEL_35;
        }
        pidl1 = 0LL;
        v13 = ILAppendHiddenID(v13, HiddenID);
        if ( !v13 )
          break;
      }
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC3E,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)0x8007000ELL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC20,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v10);
    }
LABEL_35:
    v25 = pidlParent;
    pidlParent = 0LL;
    if ( v25 )
      CoTaskMemFree(v25);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1D,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v10);
  }
  v26 = (ITEMIDLIST *)pidlChild;
  pidlChild = 0LL;
  if ( v26 )
    CoTaskMemFree(v26);
  return (unsigned int)v10;
}
