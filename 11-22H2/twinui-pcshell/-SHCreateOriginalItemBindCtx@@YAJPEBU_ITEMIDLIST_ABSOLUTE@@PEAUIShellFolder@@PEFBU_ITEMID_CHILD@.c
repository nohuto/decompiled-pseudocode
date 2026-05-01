/*
 * XREFs of ?SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@KW4REPARSE_PARTIAL_IDLIST_MODE@@PEAPEAUIBindCtx@@@Z @ 0x18079B0C8
 * Callers:
 *     ?GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z @ 0x18079AA34 (-GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x18075CF74 (-_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z.c)
 *     ?GetFileAttributesFromSFGAOFlags@@YAKK@Z @ 0x18079A9D0 (-GetFileAttributesFromSFGAOFlags@@YAKK@Z.c)
 *     ?MarkItemAsSimple@@YAJPEAUIShellItem@@@Z @ 0x18079AFD4 (-MarkItemAsSimple@@YAJPEAUIShellItem@@@Z.c)
 */

__int64 __fastcall SHCreateOriginalItemBindCtx(
        __int64 a1,
        IShellFolder *a2,
        const ITEMIDLIST *a3,
        __int64 a4,
        __int64 a5,
        struct IBindCtx **a6)
{
  int v6; // ebx
  const struct _GUID *v7; // rcx
  struct IBindCtx *v8; // rcx
  struct IShellItem *ppvItem; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h]
  struct _WIN32_FIND_DATAW v14; // [rsp+50h] [rbp-B0h] BYREF

  *a6 = 0LL;
  v6 = SHCreateItemWithParent(0LL, a2, a3, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)&ppvItem);
  if ( v6 >= 0 )
  {
    v6 = ((__int64 (__fastcall *)(struct IShellItem *, __int64, unsigned int *))ppvItem->lpVtbl->GetAttributes)(
           ppvItem,
           1614807040LL,
           &v11);
    if ( v6 >= 0 )
    {
      memset_0(&v14.ftCreationTime, 0, 0x24CuLL);
      v14.dwFileAttributes = GetFileAttributesFromSFGAOFlags(v11);
      v6 = _CreateFileSysBindCtx(v7, &v14, a6);
      if ( v6 >= 0 )
      {
        v8 = *a6;
        v12[1] = 0;
        v12[0] = 16;
        v13 = 4096LL;
        v6 = ((__int64 (__fastcall *)(struct IBindCtx *, _DWORD *))v8->lpVtbl->SetBindOptions)(v8, v12);
        if ( v6 < 0
          || (v6 = MarkItemAsSimple(ppvItem), v6 < 0)
          || (v6 = ((__int64 (__fastcall *)(struct IBindCtx *, const wchar_t *, struct IShellItem *))(*a6)->lpVtbl->RegisterObjectParam)(
                     *a6,
                     L"ParseOriginalItem",
                     ppvItem),
              v6 < 0) )
        {
          ((void (__fastcall *)(struct IBindCtx *))(*a6)->lpVtbl->Release)(*a6);
          *a6 = 0LL;
        }
      }
    }
    ((void (__fastcall *)(struct IShellItem *))ppvItem->lpVtbl->Release)(ppvItem);
  }
  return (unsigned int)v6;
}
