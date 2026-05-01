/*
 * XREFs of ??$MakeAndInitialize@VApplicationContainerActivation@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18062DBC8
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VApplicationContainerActivation@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1806307D0 (-CreateInstance@-$SimpleClassFactory@VApplicationContainerActivation@@$0A@@WRL@Microsoft@@UEAAJP.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0ApplicationContainerActivation@@QEAA@XZ @ 0x18062EFB4 (--0ApplicationContainerActivation@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationContainerActivation,IUnknown,>(_QWORD *a1)
{
  ApplicationContainerActivation *v2; // rax
  unsigned int v3; // edi
  ApplicationContainerActivation *v4; // rbx

  *a1 = 0LL;
  v2 = (ApplicationContainerActivation *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = ApplicationContainerActivation::ApplicationContainerActivation(v2);
    v3 = (**(__int64 (__fastcall ***)(ApplicationContainerActivation *, GUID *, _QWORD *))v4)(
           v4,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
    (*(void (__fastcall **)(ApplicationContainerActivation *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
