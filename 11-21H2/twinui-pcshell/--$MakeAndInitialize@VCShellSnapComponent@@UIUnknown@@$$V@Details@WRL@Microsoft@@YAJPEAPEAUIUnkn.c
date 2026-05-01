/*
 * XREFs of ??$MakeAndInitialize@VCShellSnapComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18014AE3C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCShellSnapComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18014ADC0 (-CreateInstance@-$SimpleClassFactory@VCShellSnapComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown.c)
 * Callees:
 *     ?RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ @ 0x1800B0754 (-RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ.c)
 *     ??0CShellSnapComponent@@QEAA@XZ @ 0x18014AF08 (--0CShellSnapComponent@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CShellSnapComponent,IUnknown,>(_QWORD *a1)
{
  CShellSnapComponent *v2; // rax
  CShellSnapComponent *v3; // rdi
  int v4; // esi

  *a1 = 0LL;
  v2 = (CShellSnapComponent *)operator new(0x630uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = CShellSnapComponent::CShellSnapComponent(v2);
    v4 = CShellSnapComponent::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(CShellSnapComponent *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(CShellSnapComponent *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
