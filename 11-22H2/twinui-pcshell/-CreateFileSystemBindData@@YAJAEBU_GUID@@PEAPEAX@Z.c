/*
 * XREFs of ?CreateFileSystemBindData@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180753168
 * Callers:
 *     ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x18075CF74 (-_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CFileSysBindData@@QEAA@XZ @ 0x180751790 (--0CFileSysBindData@@QEAA@XZ.c)
 */

__int64 __fastcall CreateFileSystemBindData(const struct _GUID *a1, void **a2)
{
  unsigned int v3; // edi
  CFileSysBindData *v4; // rax
  CFileSysBindData *v5; // rax
  CFileSysBindData *v6; // rbx

  *a2 = 0LL;
  v3 = -2147024882;
  v4 = (CFileSysBindData *)operator new(0x278uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CFileSysBindData::CFileSysBindData(v4);
    v6 = v5;
    if ( v5 )
    {
      v3 = (**(__int64 (__fastcall ***)(CFileSysBindData *, GUID *, void **))v5)(
             v5,
             &GUID_01e18d10_4d8b_11d2_855d_006008059367,
             a2);
      (*(void (__fastcall **)(CFileSysBindData *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return v3;
}
