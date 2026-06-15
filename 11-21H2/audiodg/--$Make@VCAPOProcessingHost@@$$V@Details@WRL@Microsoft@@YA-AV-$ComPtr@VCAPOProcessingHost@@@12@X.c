/*
 * XREFs of ??$Make@VCAPOProcessingHost@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAPOProcessingHost@@@12@XZ @ 0x14002269C
 * Callers:
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x140020CE8 (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 * Callees:
 *     ??0CAPOProcessingHost@@QEAA@XZ @ 0x14002272C (--0CAPOProcessingHost@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
CAPOProcessingHost **__fastcall Microsoft::WRL::Details::Make<CAPOProcessingHost,>(CAPOProcessingHost **a1)
{
  CAPOProcessingHost *v2; // rax
  CAPOProcessingHost *v3; // rbx
  CAPOProcessingHost *v4; // rbx

  *a1 = 0LL;
  v2 = (CAPOProcessingHost *)operator new(0x128uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x128uLL);
    v4 = CAPOProcessingHost::CAPOProcessingHost(v3);
    if ( *a1 )
      (*(void (__fastcall **)(CAPOProcessingHost *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v4;
    v3 = 0LL;
  }
  if ( v3 )
    operator delete(v3);
  return a1;
}
