/*
 * XREFs of ??$MakeAndInitialize@VCBaseTrayFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@AEAPEBG@Z @ 0x1801367BC
 * Callers:
 *     ?RuntimeClassInitialize@CNetworkExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180136AEC (-RuntimeClassInitialize@CNetworkExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CBaseTrayFlyoutExperienceManager@@QEAA@HH@Z @ 0x18013653C (--0CBaseTrayFlyoutExperienceManager@@QEAA@HH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBaseTrayFlyoutExperienceManager,IInspectable,IServiceProvider * &,unsigned short const * &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  CBaseTrayFlyoutExperienceManager *v6; // rax
  CBaseTrayFlyoutExperienceManager *v7; // rsi
  int v8; // edi
  CBaseTrayFlyoutExperienceManager *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (CBaseTrayFlyoutExperienceManager *)operator new(0x1E8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  if ( v6 )
  {
    v7 = CBaseTrayFlyoutExperienceManager::CBaseTrayFlyoutExperienceManager(v6);
    v10 = v7;
    v11 = 0LL;
    v8 = (*(__int64 (__fastcall **)(CBaseTrayFlyoutExperienceManager *, _QWORD, _QWORD))(*(_QWORD *)v7 + 80LL))(
           v7,
           *a2,
           *a3);
    if ( v8 >= 0 )
      v8 = (**(__int64 (__fastcall ***)(CBaseTrayFlyoutExperienceManager *, GUID *, _QWORD *))v7)(
             v7,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a1);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
