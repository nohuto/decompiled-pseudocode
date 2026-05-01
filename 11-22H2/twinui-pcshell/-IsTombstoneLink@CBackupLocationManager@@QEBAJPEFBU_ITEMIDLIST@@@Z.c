/*
 * XREFs of ?IsTombstoneLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z @ 0x1807588A0
 * Callers:
 *     ?_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z @ 0x18075DE24 (-_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?ILIsParentByPath@CPinnedList@@SAHPEFBU_ITEMIDLIST@@0H@Z @ 0x1807570FC (-ILIsParentByPath@CPinnedList@@SAHPEFBU_ITEMIDLIST@@0H@Z.c)
 */

__int64 __fastcall CBackupLocationManager::IsTombstoneLink(const wchar_t **this, const struct _ITEMIDLIST *a2)
{
  signed int v3; // ebx
  __int64 v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rdx
  WCHAR *v7; // rax
  __int64 v8; // r8
  WCHAR *v9; // rcx
  __int64 v10; // r11
  __int64 v11; // rax
  char *v12; // rdx
  WCHAR v13; // r8
  WCHAR *v14; // rax
  HRESULT v15; // eax
  ITEMIDLIST *v16; // rcx
  ITEMIDLIST *v17; // rcx
  LPITEMIDLIST ppidl; // [rsp+38h] [rbp-C8h] BYREF
  char v20; // [rsp+40h] [rbp-C0h]
  LPCITEMIDLIST pidl1; // [rsp+48h] [rbp-B8h]
  IUnknown *punk[2]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t pszItem[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v3 = StringCchCopyW(pszItem, 260LL, *this);
  if ( v3 < 0 )
  {
    v5 = 4115LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = v4;
  v7 = pszItem;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  v8 = (v4 - v6) & -(__int64)(v6 != 0);
  v3 = v6 == 0 ? 0x80070057 : 0;
  if ( v6 )
  {
    v9 = &pszItem[v8];
    v10 = v4 - v8;
    if ( v10 )
    {
      v11 = 2147483646LL;
      v12 = (char *)((char *)L"\\Tombstones" - (char *)v9);
      do
      {
        if ( !v11 )
          break;
        v13 = *(WCHAR *)((char *)v9 + (_QWORD)v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    v3 = v10 == 0 ? 0x8007007A : 0;
    *v14 = 0;
  }
  if ( v3 < 0 )
  {
    v5 = 4116LL;
    goto LABEL_3;
  }
  punk[0] = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)punk);
  v15 = SHCreateItemInKnownFolder(
          &FOLDERID_UserPinned,
          0x1000u,
          pszItem,
          &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
          (void **)punk);
  v3 = v15;
  if ( v15 >= 0 )
  {
    pidl1 = 0LL;
    ppidl = 0LL;
    v20 = 1;
    v3 = SHGetIDListFromObject(punk[0], &ppidl);
    if ( v20 )
    {
      v16 = (ITEMIDLIST *)pidl1;
      pidl1 = ppidl;
      if ( v16 )
        CoTaskMemFree(v16);
    }
    if ( v3 >= 0 )
    {
      if ( ILIsParent(pidl1, a2, 0) || (v3 = 1, (unsigned int)CPinnedList::ILIsParentByPath(pidl1, a2, 1u)) )
        v3 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x101A,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v3);
    }
    v17 = (ITEMIDLIST *)pidl1;
    pidl1 = 0LL;
    if ( v17 )
      CoTaskMemFree(v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1017,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v15);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)punk);
  return (unsigned int)v3;
}
