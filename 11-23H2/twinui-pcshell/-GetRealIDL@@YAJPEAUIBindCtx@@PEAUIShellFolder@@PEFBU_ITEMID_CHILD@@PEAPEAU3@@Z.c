/*
 * XREFs of ?GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z @ 0x18079AC54
 * Callers:
 *     SimpleToRealIDListWithContext @ 0x18079B45C (SimpleToRealIDListWithContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     DisplayNameOfW @ 0x180750B94 (DisplayNameOfW.c)
 *     ?_GetAttributesFromFolderAndIDList@@YAJPEAUIShellFolder@@PEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@KPEAK@Z @ 0x18079B270 (-_GetAttributesFromFolderAndIDList@@YAJPEAUIShellFolder@@PEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx.c)
 *     ?_IsFilePlaceholder@@YA_NPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z @ 0x18079B31C (-_IsFilePlaceholder@@YA_NPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z.c)
 */

__int64 __fastcall GetRealIDL(struct IBindCtx *a1, struct IShellFolder *a2, const ITEMIDLIST *a3, LPITEMIDLIST *a4)
{
  struct IBindCtx *v8; // r8
  unsigned int v9; // r9d
  HRESULT v10; // ebx
  int v11; // eax
  LPITEMIDLIST v12; // rax
  _WORD *v13; // rcx
  struct _ITEMID_CHILD *v14; // rax
  unsigned int v16; // [rsp+40h] [rbp-268h] BYREF
  __int64 v17; // [rsp+48h] [rbp-260h] BYREF
  WCHAR v18[264]; // [rsp+50h] [rbp-258h] BYREF

  *a4 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IShellFolder *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_6589b6d2_5f8d_4b9e_b7e0_23cdd9717d8c,
         &v17) >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, struct IBindCtx *, const ITEMIDLIST *, LPITEMIDLIST *))(*(_QWORD *)v17 + 24LL))(
            v17,
            a1,
            a3,
            a4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    return (unsigned int)v10;
  }
  if ( !a3
    || !a3->mkid.cb
    || (v16 = 0, _GetAttributesFromFolderAndIDList(a2, (const struct _ITEMIDLIST_RELATIVE *)a3, v8, v9, &v16), !v16)
    && !_IsFilePlaceholder(a2, a3) )
  {
LABEL_15:
    v14 = (struct _ITEMID_CHILD *)ILCloneFirst(a3);
    *a4 = (LPITEMIDLIST)v14;
    return v14 == 0LL ? 0x8007000E : 0;
  }
  v10 = DisplayNameOfW((__int64)a2, a3, 32769LL, v18);
  if ( v10 >= 0 )
  {
    v11 = IShellFolder_ParseDisplayName(a2, 0LL, a1, v18, 0LL, a4, 0LL);
    v10 = v11;
    if ( v11 == -2147467263
      || v11 >= 0
      && (v12 = *a4) != 0LL
      && v12->mkid.cb
      && (v13 = (USHORT *)((char *)&v12->mkid.cb + v12->mkid.cb)) != 0LL
      && *v13 )
    {
      ILFree(*a4);
      goto LABEL_15;
    }
  }
  return (unsigned int)v10;
}
