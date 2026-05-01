/*
 * XREFs of ??$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Z @ 0x1800AD220
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800DCE30 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??0CImmersiveWindowManager@@QEAA@XZ @ 0x1800AD038 (--0CImmersiveWindowManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x1800AF484 (-RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CImmersiveWindowManager,IImmersiveWindowManager,IIAMServiceProvider * &>(
        _QWORD *a1,
        struct IIAMServiceProvider **a2)
{
  CImmersiveWindowManager *v4; // rax
  CImmersiveWindowManager *v5; // rdi
  int v6; // esi

  *a1 = 0LL;
  v4 = (CImmersiveWindowManager *)operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CImmersiveWindowManager::CImmersiveWindowManager(v4);
    v6 = CImmersiveWindowManager::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(CImmersiveWindowManager *, GUID *, _QWORD *))v5)(
             v5,
             &GUID_611aa8fe_b694_4129_86af_2c2553fff785,
             a1);
    if ( v5 )
      (*(void (__fastcall **)(CImmersiveWindowManager *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
