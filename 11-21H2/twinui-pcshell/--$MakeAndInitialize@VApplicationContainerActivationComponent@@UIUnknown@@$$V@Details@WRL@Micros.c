/*
 * XREFs of ??$MakeAndInitialize@VApplicationContainerActivationComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18056FB88
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VApplicationContainerActivationComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180572A30 (-CreateInstance@-$SimpleClassFactory@VApplicationContainerActivationComponent@@$0A@@WRL@Microsof.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0ApplicationContainerActivationComponent@@QEAA@XZ @ 0x1805712D4 (--0ApplicationContainerActivationComponent@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ApplicationContainerActivationComponent@@QEAAJXZ @ 0x18057410C (-RuntimeClassInitialize@ApplicationContainerActivationComponent@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationContainerActivationComponent,IUnknown,>(
        _QWORD *a1)
{
  ApplicationContainerActivationComponent *v2; // rax
  int v3; // edi
  ApplicationContainerActivationComponent *v4; // rbx

  *a1 = 0LL;
  v2 = (ApplicationContainerActivationComponent *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = ApplicationContainerActivationComponent::ApplicationContainerActivationComponent(v2);
    v3 = ApplicationContainerActivationComponent::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(ApplicationContainerActivationComponent *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(ApplicationContainerActivationComponent *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
