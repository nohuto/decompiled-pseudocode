/*
 * XREFs of ??$Make@VCAPOProcessingHost@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAPOProcessingHost@@@12@XZ @ 0x14006A4F4
 * Callers:
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x1400033FC (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CAPOProcessingHost@@QEAA@XZ @ 0x14006B3FC (--0CAPOProcessingHost@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
CAPOProcessingHost **__fastcall Microsoft::WRL::Details::Make<CAPOProcessingHost,>(CAPOProcessingHost **a1)
{
  CAPOProcessingHost *v2; // rax
  CAPOProcessingHost *v3; // rbx
  CAPOProcessingHost *v4; // rbx

  *a1 = 0LL;
  v2 = (CAPOProcessingHost *)operator new(0x1A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x1A0uLL);
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
