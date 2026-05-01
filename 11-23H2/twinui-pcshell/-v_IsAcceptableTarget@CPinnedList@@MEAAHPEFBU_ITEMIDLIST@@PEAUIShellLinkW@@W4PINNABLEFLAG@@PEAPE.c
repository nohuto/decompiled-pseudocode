/*
 * XREFs of ?v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18075F610
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1806A2560 (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ?SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z @ 0x18074F114 (-SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z.c)
 *     ??$SafeRelease@UIShellLinkW@@@@YAXPEAPEAUIShellLinkW@@@Z @ 0x180750F28 (--$SafeRelease@UIShellLinkW@@@@YAXPEAPEAUIShellLinkW@@@Z.c)
 *     ?GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z @ 0x180754248 (-GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z.c)
 *     ?_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z @ 0x18075E468 (-_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CPinnedList::v_IsAcceptableTarget(
        __int64 a1,
        const ITEMIDLIST *a2,
        IUnknown *a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  char v8; // r15
  int v11; // r14d
  BOOL v12; // ebx
  int v13; // esi
  struct IShellItem **v14; // r8
  int TaskbarPinnableItem; // eax
  void *lpVtbl; // rcx
  BOOL v17; // edi
  int v18; // eax
  bool v19; // sf
  WCHAR *v20; // rcx
  const WCHAR *ExtensionW; // rax
  const WCHAR *v22; // rsi
  CPinnedList *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  void *ppv; // [rsp+30h] [rbp-D0h] BYREF
  IUnknown *ppunk; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID v29; // [rsp+40h] [rbp-C0h] BYREF
  struct IShellItem v30; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR v31[264]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR pszPath[264]; // [rsp+260h] [rbp+160h] BYREF

  v8 = a4;
  v11 = 1;
  v12 = 1;
  if ( a8 )
    *a8 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  *a7 = 0LL;
  LODWORD(ppv) = 1073807360;
  if ( (int)SHGetNameAndFlagsW(a2, 0x8000u, pszPath, a4, (unsigned int *)&ppv) >= 0 )
  {
    v13 = (int)ppv;
    if ( ((unsigned int)ppv & 0x40000000) == 0 )
      return (v8 & 1) == 0;
    v12 = 0;
    if ( SHCreateItemFromIDList(a2, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv) < 0 )
      return v12;
    v30.lpVtbl = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v30);
    TaskbarPinnableItem = TaskbarPinHelper::GetTaskbarPinnableItem((TaskbarPinHelper *)ppv, &v30, v14);
    lpVtbl = ppv;
    if ( TaskbarPinnableItem >= 0 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
      lpVtbl = v30.lpVtbl;
      v30.lpVtbl = 0LL;
      ppv = lpVtbl;
    }
    v12 = 1;
    v17 = (v13 & 0x10000) != 0;
    v31[0] = 0;
    ppunk = 0LL;
    if ( (v13 & 0x10000) == 0 )
      goto LABEL_20;
    if ( a3 )
    {
      IUnknown_Set(&ppunk, a3);
    }
    else
    {
      v18 = (*(__int64 (__fastcall **)(void *, _QWORD, const GUID *, GUID *, IUnknown **))(*(_QWORD *)lpVtbl + 24LL))(
              lpVtbl,
              0LL,
              &BHID_SFUIObject,
              &GUID_000214f9_0000_0000_c000_000000000046,
              &ppunk);
      v19 = v18 < 0;
      if ( v18 < 0 )
        goto LABEL_18;
    }
    v19 = (int)CPinnedList::GetAppPathFromShortcut((struct IShellLinkW *)ppunk, (struct IShellItem *)ppv, 0x4000u, v31) < 0;
LABEL_18:
    if ( v19 )
      v17 = 0;
LABEL_20:
    if ( (v8 & 1) != 0 )
    {
      v20 = v31;
      if ( !v17 )
        v20 = pszPath;
      ExtensionW = PathFindExtensionW(v20);
      v22 = ExtensionW;
      if ( ExtensionW )
      {
        if ( StrCmpICW(ExtensionW, L".EXE") && StrCmpICW(v22, L".MSC") )
          goto LABEL_33;
      }
    }
    if ( (v8 & 2) == 0 )
      goto LABEL_48;
    if ( v31[0] != 58 || v31[1] != 58 || v31[2] != 123 || !v31[3] )
      v11 = 0;
    if ( !(unsigned int)CPinnedList::_IsLocalHardDisk((CPinnedList *)lpVtbl, pszPath)
      || v17 && !v11 && !(unsigned int)CPinnedList::_IsLocalHardDisk(v23, v31) && !PathIsURLW(v31) )
    {
LABEL_33:
      v12 = 0;
    }
    else
    {
LABEL_48:
      if ( (v8 & 8) != 0 )
      {
        v12 = 0;
        if ( CoCreateInstance(
               &CLSID_StartMenuCacheAndAppResolver,
               0LL,
               3u,
               &GUID_de25675a_72de_44b4_9373_05170450c140,
               &v29) >= 0 )
        {
          v24 = *(_QWORD *)v29;
          if ( ppunk )
            v25 = (*(__int64 (__fastcall **)(LPVOID, IUnknown *, void *))(v24 + 88))(v29, ppunk, ppv);
          else
            v25 = (*(__int64 (__fastcall **)(LPVOID, void *))(v24 + 80))(v29, ppv);
          v12 = v25 >= 0;
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    SafeRelease<IShellLinkW>((__int64 *)&ppunk);
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v30);
  }
  return v12;
}
