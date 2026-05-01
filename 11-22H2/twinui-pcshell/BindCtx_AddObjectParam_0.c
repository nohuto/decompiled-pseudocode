/*
 * XREFs of BindCtx_AddObjectParam_0 @ 0x18079A7AC
 * Callers:
 *     BindCtx_RegisterObjectParam @ 0x18079A8AC (BindCtx_RegisterObjectParam.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z @ 0x18060A0C4 (--$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z.c)
 *     ??0CDummyUnknown@@QEAA@XZ @ 0x18060A650 (--0CDummyUnknown@@QEAA@XZ.c)
 */

__int64 __fastcall BindCtx_AddObjectParam_0(__int64 a1, __int64 a2, CDummyUnknown *a3)
{
  CDummyUnknown *v4; // rax
  unsigned int v5; // ebx
  CDummyUnknown *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( a3
    || (v4 = (CDummyUnknown *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow)) != 0LL
    && (v7 = CDummyUnknown::CDummyUnknown(v4), (a3 = v7) != 0LL) )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, CDummyUnknown *))(*(_QWORD *)a1 + 72LL))(
           a1,
           L"Folder Enum Mode",
           a3);
    SafeRelease<CDummyUnknown>(&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
