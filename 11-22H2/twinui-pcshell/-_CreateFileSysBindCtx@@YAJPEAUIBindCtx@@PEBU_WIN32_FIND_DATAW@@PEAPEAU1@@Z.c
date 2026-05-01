/*
 * XREFs of ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x18075CF74
 * Callers:
 *     ?SHSimpleIDListFromFindDataAndFlags@@YAJPEBGPEBU_WIN32_FIND_DATAW@@W4SIMPLE_IDLIST_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x18075B2B4 (-SHSimpleIDListFromFindDataAndFlags@@YAJPEBGPEBU_WIN32_FIND_DATAW@@W4SIMPLE_IDLIST_FLAGS@@PEAPEF.c)
 *     ?GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z @ 0x18079AA34 (-GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z.c)
 *     ?SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@KW4REPARSE_PARTIAL_IDLIST_MODE@@PEAPEAUIBindCtx@@@Z @ 0x18079B0C8 (-SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     BindCtx_SetMode @ 0x180752A80 (BindCtx_SetMode.c)
 *     ?CreateFileSystemBindData@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180753168 (-CreateFileSystemBindData@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall _CreateFileSysBindCtx(
        const struct _GUID *a1,
        const struct _WIN32_FIND_DATAW *a2,
        struct IBindCtx **a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  void *v9; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  v7 = CreateFileSystemBindData(a1, &v9);
  if ( v7 >= 0 )
  {
    if ( a2 )
      (*(void (__fastcall **)(void *, const struct _WIN32_FIND_DATAW *))(*(_QWORD *)v9 + 24LL))(v9, a2);
    v7 = BindCtx_SetMode(v6, v5, a3);
    if ( v7 >= 0 )
      ((void (__fastcall *)(_QWORD, const wchar_t *, void *))(*a3)->lpVtbl->RegisterObjectParam)(
        *a3,
        L"File System Bind Data",
        v9);
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v7;
}
