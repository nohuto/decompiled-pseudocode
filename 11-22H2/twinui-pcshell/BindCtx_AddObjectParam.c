/*
 * XREFs of BindCtx_AddObjectParam @ 0x18060B3E8
 * Callers:
 *     BindCtx_CreateWithObjectParam @ 0x18060B4A0 (BindCtx_CreateWithObjectParam.c)
 *     BindCtx_CreateWithObjectParam_0 @ 0x18074E888 (BindCtx_CreateWithObjectParam_0.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z @ 0x18060A0C4 (--$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z.c)
 */

__int64 __fastcall BindCtx_AddObjectParam(__int64 a1, __int64 a2, CDummyUnknown *a3)
{
  char *v4; // rax
  unsigned int v5; // ebx
  CDummyUnknown *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v4 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (CDummyUnknown *)v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 4) = 0LL;
    *(_QWORD *)v4 = &CDummyUnknown::`vftable'{for `IOleWindow'};
    *((_QWORD *)v4 + 1) = &CDummyUnknown::`vftable'{for `IPersist'};
    *((_QWORD *)v4 + 2) = &CDummyUnknown::`vftable'{for `IObjectWithFolderEnumMode'};
    *((_DWORD *)v4 + 6) = 1;
    *((_DWORD *)v4 + 14) = 0;
    v7 = (CDummyUnknown *)v4;
    *(GUID *)(v4 + 40) = GUID_NULL;
    v5 = (*(__int64 (__fastcall **)(__int64, const wchar_t *))(*(_QWORD *)a1 + 72LL))(a1, L"Don't Translate Aliases");
    SafeRelease<CDummyUnknown>(&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
