/*
 * XREFs of ??$Make@UContext@ShellGesturesProcessor@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@UContext@ShellGesturesProcessor@@@12@XZ @ 0x18016DEC0
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180013510 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Context@ShellGesturesProcessor@@QEAA@XZ @ 0x18016E750 (--0Context@ShellGesturesProcessor@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall Microsoft::WRL::Details::Make<ShellGesturesProcessor::Context,>(__int64 *a1)
{
  ShellGesturesProcessor::Context *v2; // rax
  ShellGesturesProcessor::Context *v3; // rbx
  __int64 v4; // rbx

  *a1 = 0LL;
  v2 = (ShellGesturesProcessor::Context *)operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x1B0uLL);
    v4 = ShellGesturesProcessor::Context::Context(v3);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v4;
    v3 = 0LL;
  }
  if ( v3 )
    operator delete(v3);
  return a1;
}
