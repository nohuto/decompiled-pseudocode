/*
 * XREFs of ??$MakeAndInitialize@VCVisibilityOverride@@UIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Details@WRL@Microsoft@@YAJPEAPEAUIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x1800D3A40
 * Callers:
 *     ?s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D39BC (-s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID.c)
 * Callees:
 *     ?RuntimeClassInitialize@CVisibilityOverride@@QEAAJPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x1800D3BB8 (-RuntimeClassInitialize@CVisibilityOverride@@QEAAJPEAUIImmersiveApplicationVisibilityOverride@@@.c)
 *     ??0CVisibilityOverride@@QEAA@XZ @ 0x1800D3D48 (--0CVisibilityOverride@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
