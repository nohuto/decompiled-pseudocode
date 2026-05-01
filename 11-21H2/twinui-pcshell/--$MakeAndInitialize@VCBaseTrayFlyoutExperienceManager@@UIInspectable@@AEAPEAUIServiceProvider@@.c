/*
 * XREFs of ??$MakeAndInitialize@VCBaseTrayFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@AEAPEBGAEAPEBGAEAW4LIGHT_DISMISS_FLAGS@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@AEAPEBG2AEAW4LIGHT_DISMISS_FLAGS@@@Z @ 0x1803928D4
 * Callers:
 *     BaseTrayFlyoutExperienceManager_CreateInstanceWithTestAndDismissFlags @ 0x1803976B0 (BaseTrayFlyoutExperienceManager_CreateInstanceWithTestAndDismissFlags.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CBaseTrayFlyoutExperienceManager@@QEAA@HH@Z @ 0x180392F00 (--0CBaseTrayFlyoutExperienceManager@@QEAA@HH@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBaseTrayFlyoutExperienceManager,IInspectable,IServiceProvider * &,unsigned short const * &,unsigned short const * &,enum LIGHT_DISMISS_FLAGS &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5)
{
  CBaseTrayFlyoutExperienceManager *v9; // rax
  int v10; // edx
  int v11; // r8d
  int v12; // edi
  CBaseTrayFlyoutExperienceManager *v13; // rsi
  CBaseTrayFlyoutExperienceManager *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (CBaseTrayFlyoutExperienceManager *)operator new(0x1E8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v9;
  if ( v9 )
  {
    v13 = CBaseTrayFlyoutExperienceManager::CBaseTrayFlyoutExperienceManager(v9, v10, v11);
    v15 = v13;
    v12 = (*(__int64 (__fastcall **)(CBaseTrayFlyoutExperienceManager *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v13 + 64LL))(
            v13,
            *a2,
            *a3,
            *a4,
            *a5);
    if ( v12 >= 0 )
      v12 = (**(__int64 (__fastcall ***)(CBaseTrayFlyoutExperienceManager *, GUID *, _QWORD *))v13)(
              v13,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              a1);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
