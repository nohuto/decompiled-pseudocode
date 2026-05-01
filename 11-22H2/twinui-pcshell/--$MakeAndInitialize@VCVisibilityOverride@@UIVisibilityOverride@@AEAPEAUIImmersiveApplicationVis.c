/*
 * XREFs of ??$MakeAndInitialize@VCVisibilityOverride@@UIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Details@WRL@Microsoft@@YAJPEAPEAUIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x18010401C
 * Callers:
 *     ?s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID@@PEAPEAX@Z @ 0x180103F98 (-s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID.c)
 * Callees:
 *     ??0CVisibilityOverride@@QEAA@XZ @ 0x180103298 (--0CVisibilityOverride@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVisibilityOverride@@QEAAJPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x180104B90 (-RuntimeClassInitialize@CVisibilityOverride@@QEAAJPEAUIImmersiveApplicationVisibilityOverride@@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVisibilityOverride,IVisibilityOverride,IImmersiveApplicationVisibilityOverride * &>(
        _QWORD *a1,
        struct IImmersiveApplicationVisibilityOverride **a2)
{
  CVisibilityOverride *v4; // rax
  CVisibilityOverride *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = (CVisibilityOverride *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CVisibilityOverride::CVisibilityOverride(v4);
    v6 = CVisibilityOverride::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(CVisibilityOverride *, GUID *, _QWORD *))v5)(
             v5,
             &GUID_328dedb7_8f68_4e6c_a210_a6c2c37504e8,
             a1);
    if ( v5 )
      (*(void (__fastcall **)(CVisibilityOverride *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
