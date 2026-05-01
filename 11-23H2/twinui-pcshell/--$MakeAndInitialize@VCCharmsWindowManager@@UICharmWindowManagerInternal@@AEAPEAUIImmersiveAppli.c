/*
 * XREFs of ??$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Details@WRL@Microsoft@@YAJPEAPEAUICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Z @ 0x180103DBC
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800FA538 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CCharmsWindowManager@@QEAA@XZ @ 0x180103120 (--0CCharmsWindowManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCharmsWindowManager,ICharmWindowManagerInternal,IImmersiveApplicationTransitionHelper * &>(
        _QWORD *a1,
        __int64 *a2)
{
  CCharmsWindowManager *v4; // rax
  CCharmsWindowManager *v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (CCharmsWindowManager *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CCharmsWindowManager::CCharmsWindowManager(v4);
    v6 = *a2;
    if ( *((_QWORD *)v5 + 12) != v6 )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v9 = *((_QWORD *)v5 + 12);
      *((_QWORD *)v5 + 12) = v6;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
    }
    v7 = (**(__int64 (__fastcall ***)(CCharmsWindowManager *, GUID *, _QWORD *))v5)(
           v5,
           &GUID_abda261c_6cda_4269_9160_4a16fbc0ffee,
           a1);
    (*(void (__fastcall **)(CCharmsWindowManager *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v7;
}
