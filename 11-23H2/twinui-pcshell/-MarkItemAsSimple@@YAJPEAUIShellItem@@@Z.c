/*
 * XREFs of ?MarkItemAsSimple@@YAJPEAUIShellItem@@@Z @ 0x18079AFD4
 * Callers:
 *     ?SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@KW4REPARSE_PARTIAL_IDLIST_MODE@@PEAPEAUIBindCtx@@@Z @ 0x18079B0C8 (-SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@.c)
 * Callees:
 *     PropVariantClear_0 @ 0x1801C814B (PropVariantClear_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall MarkItemAsSimple(struct IShellItem *a1)
{
  int v1; // ebx
  PROPVARIANT pvar; // [rsp+30h] [rbp-28h] BYREF
  __int16 v4; // [rsp+38h] [rbp-20h]
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF

  v1 = ((__int64 (__fastcall *)(struct IShellItem *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93,
         &v6);
  if ( v1 >= 0 )
  {
    v1 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v6 + 64LL))(
           v6,
           4LL,
           &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
           &v5);
    if ( v1 >= 0 )
    {
      LOWORD(pvar) = 11;
      v4 = -1;
      v1 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v5 + 48LL))(
             v5,
             &PKEY_IsSimpleItem,
             &pvar);
      PropVariantClear_0(&pvar);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v1;
}
