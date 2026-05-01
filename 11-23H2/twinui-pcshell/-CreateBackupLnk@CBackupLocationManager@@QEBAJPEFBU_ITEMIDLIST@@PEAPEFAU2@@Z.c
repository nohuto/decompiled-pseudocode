/*
 * XREFs of ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180752E1C
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180757410 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z @ 0x1806A5620 (-SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z.c)
 *     ?SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z @ 0x18074F114 (-SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z.c)
 *     ?GetBackupPath@CBackupLocationManager@@QEBAJPEAPEAG@Z @ 0x18075461C (-GetBackupPath@CBackupLocationManager@@QEBAJPEAPEAG@Z.c)
 *     ?ILIsParentByPath@CPinnedList@@SAHPEFBU_ITEMIDLIST@@0H@Z @ 0x1807570FC (-ILIsParentByPath@CPinnedList@@SAHPEFBU_ITEMIDLIST@@0H@Z.c)
 *     ?_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z @ 0x18075D218 (-_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z.c)
 *     ?_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z @ 0x18075D94C (-_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z @ 0x18075DB2C (-_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z.c)
 */

__int64 __fastcall CBackupLocationManager::CreateBackupLnk(
        CBackupLocationManager *this,
        const struct _ITEMIDLIST *a2,
        struct _ITEMIDLIST **a3,
        __int64 a4)
{
  int v7; // ebx
  int v8; // ebx
  unsigned __int16 *v9; // rdi
  int v10; // ebx
  int NewShortcut; // eax
  int v12; // r11d
  const WCHAR *FileNameW; // rax
  unsigned int v15[4]; // [rsp+40h] [rbp-C0h] BYREF
  LPITEMIDLIST ppidl; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t *v17; // [rsp+58h] [rbp-A8h] BYREF
  struct IApplicationResolver *ppv; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-98h] BYREF
  WCHAR pszDir[264]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR pszAssoc[264]; // [rsp+280h] [rbp+180h] BYREF
  WCHAR pszOut[264]; // [rsp+490h] [rbp+390h] BYREF

  v15[0] = 1614872576;
  *a3 = 0LL;
  v7 = SHGetNameAndFlagsW(a2, 0x8000u, pszAssoc, a4, v15);
  if ( v7 >= 0 )
  {
    v8 = 0;
    v9 = 0LL;
    if ( (v15[0] & 0x40000000) == 0
      || CoCreateInstance(
           &CLSID_StartMenuCacheAndAppResolver,
           0LL,
           3u,
           &GUID_de25675a_72de_44b4_9373_05170450c140,
           (LPVOID *)&ppv) < 0 )
    {
      goto LABEL_29;
    }
    if ( _GetAppIDFromIDList(ppv, a2, (unsigned __int16 **)&pv, (int *)&ppidl) >= 0 )
    {
      LOBYTE(v8) = *(_WORD *)pv != 0;
      if ( (_DWORD)ppidl && *(_WORD *)pv )
        v9 = (unsigned __int16 *)pv;
      else
        CoTaskMemFree(pv);
    }
    if ( ((*(void (__fastcall **)(struct IApplicationResolver *))(*(_QWORD *)ppv + 16LL))(ppv), !v8)
      || SHGetKnownFolderIDList(&FOLDERID_ImplicitAppShortcuts, 0x9000u, 0LL, &ppidl) >= 0
      && (ILIsParent(ppidl, a2, 0) || CPinnedList::ILIsParentByPath(ppidl, a2, 0) ? (v10 = 0) : (v10 = 1),
          ILFree(ppidl),
          !v10)
      || CBackupLocationManager::GetBackupPath(this, &v17) < 0 )
    {
LABEL_29:
      v7 = SHILClone(a2, a3);
      goto LABEL_30;
    }
    if ( (v15[0] & 0x10000) != 0 )
    {
      NewShortcut = CBackupLocationManager::_DuplicateShortcut(this, pszAssoc, v17, a3);
    }
    else
    {
      v7 = StringCchCopyW(pszDir, 260LL, v17);
      if ( v7 < 0 )
        goto LABEL_28;
      LODWORD(ppidl) = v12;
      if ( AssocQueryStringW(0x42u, ASSOCSTR_FRIENDLYAPPNAME, pszAssoc, 0LL, pszOut, (DWORD *)&ppidl) < 0
        || !PathIsFileSpecW(pszOut)
        || PathCleanupSpec(pszDir, pszOut) < 0
        || PathCchAppend(pszDir, 0x104uLL, pszOut) < 0 )
      {
        FileNameW = PathFindFileNameW(pszAssoc);
        v7 = PathCchAppend(pszDir, 0x104uLL, FileNameW);
        if ( v7 < 0 )
          goto LABEL_28;
      }
      v7 = PathCchRenameExtension(pszDir, 0x104uLL, L".lnk");
      if ( v7 < 0 )
        goto LABEL_28;
      NewShortcut = CBackupLocationManager::_CreateNewShortcut(this, a2, pszAssoc, v15[0], pszDir, v9, a3);
    }
    v7 = NewShortcut;
LABEL_28:
    CoTaskMemFree(v17);
LABEL_30:
    CoTaskMemFree(v9);
  }
  return (unsigned int)v7;
}
