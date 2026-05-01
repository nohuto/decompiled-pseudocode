/*
 * XREFs of ??$MakeAndInitialize@VCEnumerateEntries@@V1@AEAPEAEAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCEnumerateEntries@@AEAPEAEAEAK@Z @ 0x18002FAE0
 * Callers:
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x18002FA5C (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 * Callees:
 *     ??0CEnumerateEntries@@QEAA@XZ @ 0x18002FB98 (--0CEnumerateEntries@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEnumerateEntries,CEnumerateEntries,unsigned char * &,unsigned long &>(
        CEnumerateEntries **a1,
        _QWORD *a2,
        int *a3)
{
  unsigned int v6; // edi
  CEnumerateEntries *v7; // rax
  CEnumerateEntries *v8; // rbx
  int v9; // ecx

  v6 = 0;
  *a1 = 0LL;
  v7 = (CEnumerateEntries *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = CEnumerateEntries::CEnumerateEntries(v7);
    v9 = *a3;
    *((_QWORD *)v8 + 2) = *a2;
    *((_DWORD *)v8 + 6) = v9;
    (*(void (__fastcall **)(CEnumerateEntries *))(*(_QWORD *)v8 + 8LL))(v8);
    *a1 = v8;
    (*(void (__fastcall **)(CEnumerateEntries *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
