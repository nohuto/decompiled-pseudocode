/*
 * XREFs of ??$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Z @ 0x1801373A4
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800FA538 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??0CClassicWindowManager@@QEAA@XZ @ 0x1800FF008 (--0CClassicWindowManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z @ 0x18013763C (-RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CClassicWindowManager,IClassicWindowManagerPrivate,IImmersiveSystemModeInternal * &>(
        _QWORD *a1,
        struct IImmersiveSystemModeInternal **a2)
{
  CClassicWindowManager *v4; // rax
  CClassicWindowManager *v5; // rdi
  int v6; // esi

  *a1 = 0LL;
  v4 = (CClassicWindowManager *)operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CClassicWindowManager::CClassicWindowManager(v4);
    v6 = CClassicWindowManager::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(CClassicWindowManager *, GUID *, _QWORD *))v5)(
             v5,
             &GUID_226276c7_ca53_498c_b0be_ad1ea9c0ffee,
             a1);
    if ( v5 )
      (*(void (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
