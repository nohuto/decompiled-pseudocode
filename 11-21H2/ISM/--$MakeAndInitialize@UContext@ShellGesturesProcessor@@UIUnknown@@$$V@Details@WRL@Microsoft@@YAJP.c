/*
 * XREFs of ??$MakeAndInitialize@UContext@ShellGesturesProcessor@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180150420
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18000A5E0 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Context@ShellGesturesProcessor@@QEAA@XZ @ 0x1801508DC (--0Context@ShellGesturesProcessor@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ShellGesturesProcessor::Context,IUnknown,>(_QWORD *a1)
{
  ShellGesturesProcessor::Context *v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rbx

  *a1 = 0LL;
  v2 = (ShellGesturesProcessor::Context *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = ShellGesturesProcessor::Context::Context(v2);
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v4)(v4, &GUID_00000000_0000_0000_c000_000000000046, a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
