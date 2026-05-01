/*
 * XREFs of ?SHSimpleIDListFromFindDataAndFlags@@YAJPEBGPEBU_WIN32_FIND_DATAW@@W4SIMPLE_IDLIST_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x18075B2B4
 * Callers:
 *     ?_ShouldAddMenu@CPinnedList@@IEAAJI@Z @ 0x18075E9F4 (-_ShouldAddMenu@CPinnedList@@IEAAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x18075CF74 (-_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall SHSimpleIDListFromFindDataAndFlags(
        struct IBindCtx *a1,
        const struct _WIN32_FIND_DATAW *a2,
        __int64 a3,
        LPITEMIDLIST *a4)
{
  HRESULT v6; // ebx
  IBindCtx *pbc; // [rsp+30h] [rbp-28h] BYREF

  *a4 = 0LL;
  if ( LOWORD(a1->lpVtbl) )
  {
    v6 = _CreateFileSysBindCtx(a1, a2, &pbc);
    if ( v6 >= 0 )
    {
      v6 = SHParseDisplayName((PCWSTR)a1, pbc, a4, 0, 0LL);
      ((void (__fastcall *)(IBindCtx *))pbc->lpVtbl->Release)(pbc);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v6;
}
