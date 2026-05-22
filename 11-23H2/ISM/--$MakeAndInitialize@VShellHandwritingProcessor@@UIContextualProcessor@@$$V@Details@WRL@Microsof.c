/*
 * XREFs of ??$MakeAndInitialize@VShellHandwritingProcessor@@UIContextualProcessor@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIContextualProcessor@@@Z @ 0x180063C80
 * Callers:
 *     ?Create@ShellHandwritingProcessor@@SAJPEAPEAUIContextualProcessor@@@Z @ 0x180064068 (-Create@ShellHandwritingProcessor@@SAJPEAPEAUIContextualProcessor@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ShellHandwritingProcessor@@QEAA@XZ @ 0x180063E80 (--0ShellHandwritingProcessor@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180063F38 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ @ 0x180064740 (-RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ShellHandwritingProcessor,IContextualProcessor,>(
        _QWORD *a1)
{
  ShellHandwritingProcessor *v2; // rax
  int v3; // edi
  ShellHandwritingProcessor *v4; // rbx
  ShellHandwritingProcessor *v6; // [rsp+30h] [rbp+8h] BYREF
  ShellHandwritingProcessor *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = (ShellHandwritingProcessor *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = ShellHandwritingProcessor::ShellHandwritingProcessor(v2);
    v7 = v4;
    v6 = 0LL;
    v3 = ShellHandwritingProcessor::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      v3 = (**(__int64 (__fastcall ***)(ShellHandwritingProcessor *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
             a1);
      (*(void (__fastcall **)(ShellHandwritingProcessor *))(*(_QWORD *)v4 + 16LL))(v4);
    }
    else if ( v4 )
    {
      (*(void (__fastcall **)(ShellHandwritingProcessor *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v6);
  return (unsigned int)v3;
}
