/*
 * XREFs of ??$MakeAndInitialize@VMagnifierProcessor@@UIContextualProcessor@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIContextualProcessor@@@Z @ 0x1801AEEF0
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035B8C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0MagnifierProcessor@@QEAA@XZ @ 0x1801AF454 (--0MagnifierProcessor@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MagnifierProcessor,IContextualProcessor,>(_QWORD *a1)
{
  MagnifierProcessor *v2; // rax
  unsigned int v3; // esi
  MagnifierProcessor *v4; // rbx

  *a1 = 0LL;
  v2 = (MagnifierProcessor *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = MagnifierProcessor::MagnifierProcessor(v2);
    v3 = (**(__int64 (__fastcall ***)(MagnifierProcessor *, GUID *, _QWORD *))v4)(
           v4,
           &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
           a1);
    (*(void (__fastcall **)(MagnifierProcessor *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
