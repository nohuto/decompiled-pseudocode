/*
 * XREFs of ?GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z @ 0x18079AA34
 * Callers:
 *     SimpleToRealIDListWithContext @ 0x18079B45C (SimpleToRealIDListWithContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x18075CF74 (-_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z.c)
 *     ?SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@KW4REPARSE_PARTIAL_IDLIST_MODE@@PEAPEAUIBindCtx@@@Z @ 0x18079B0C8 (-SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@.c)
 *     QueryInterfaceVariant @ 0x18079B3DC (QueryInterfaceVariant.c)
 */

__int64 __fastcall GetParsingBindCtx(
        struct IShellFolder2 *a1,
        const struct _ITEMID_CHILD *a2,
        __int64 a3,
        struct IBindCtx **a4)
{
  struct IShellFolder2Vtbl *lpVtbl; // rax
  __int64 v8; // rdx
  HRESULT v9; // eax
  __int64 v10; // rcx
  const struct _GUID *v11; // rcx
  HRESULT v12; // ebx
  struct IBindCtx *v14; // [rsp+30h] [rbp-D0h] BYREF
  VARIANT varIn; // [rsp+38h] [rbp-C8h] BYREF
  struct _WIN32_FIND_DATAW pv; // [rsp+50h] [rbp-B0h] BYREF

  v14 = 0LL;
  lpVtbl = a1->lpVtbl;
  memset(&varIn, 0, sizeof(varIn));
  if ( ((int (__fastcall *)(struct IShellFolder2 *, const struct _ITEMID_CHILD *, const PROPERTYKEY *, VARIANT *))lpVtbl->GetDetailsEx)(
         a1,
         a2,
         &PKEY_ParsingBindContext,
         &varIn) >= 0 )
  {
    v9 = QueryInterfaceVariant(&varIn, v8, &v14);
    goto LABEL_6;
  }
  if ( ((int (__fastcall *)(struct IShellFolder2 *, const struct _ITEMID_CHILD *, const PROPERTYKEY *, VARIANT *))a1->lpVtbl->GetDetailsEx)(
         a1,
         a2,
         &PKEY_FindData,
         &varIn) >= 0 )
  {
    v12 = VariantToBuffer(&varIn, &pv, 0x250u);
    if ( v12 < 0 )
    {
LABEL_7:
      VariantClear(&varIn);
      goto LABEL_9;
    }
    v9 = _CreateFileSysBindCtx(v11, &pv, &v14);
LABEL_6:
    v12 = v9;
    goto LABEL_7;
  }
  v12 = SHCreateOriginalItemBindCtx(v10, a1, a2);
LABEL_9:
  if ( v12 >= 0 )
  {
    v12 = ((__int64 (__fastcall *)(struct IBindCtx *, GUID *, struct IBindCtx **))v14->lpVtbl->QueryInterface)(
            v14,
            &GUID_0000000e_0000_0000_c000_000000000046,
            a4);
    ((void (__fastcall *)(struct IBindCtx *))v14->lpVtbl->Release)(v14);
  }
  return (unsigned int)v12;
}
