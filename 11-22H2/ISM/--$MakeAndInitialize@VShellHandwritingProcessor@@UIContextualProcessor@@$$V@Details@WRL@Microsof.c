/*
 * XREFs of ??$MakeAndInitialize@VShellHandwritingProcessor@@UIContextualProcessor@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIContextualProcessor@@@Z @ 0x180077790
 * Callers:
 *     ?Create@ShellHandwritingProcessor@@SAJPEAPEAUIContextualProcessor@@@Z @ 0x180077B08 (-Create@ShellHandwritingProcessor@@SAJPEAPEAUIContextualProcessor@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006A110 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0ShellHandwritingProcessor@@QEAA@XZ @ 0x18007797C (--0ShellHandwritingProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ @ 0x1800781C0 (-RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ShellHandwritingProcessor,IContextualProcessor,>(
        _QWORD *a1)
{
  void *v2; // rax
  int v3; // edi
  ShellHandwritingProcessor *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  ShellHandwritingProcessor *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = ShellHandwritingProcessor::ShellHandwritingProcessor((ShellHandwritingProcessor *)v2);
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
