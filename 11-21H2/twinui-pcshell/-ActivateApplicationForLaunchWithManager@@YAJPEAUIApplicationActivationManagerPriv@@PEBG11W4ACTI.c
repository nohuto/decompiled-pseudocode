/*
 * XREFs of ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1805F0088
 * Callers:
 *     ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x1804E7450 (-ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z.c)
 *     ?ActivateApplicationForLaunch@@YAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAK@Z @ 0x1805EFFC8 (-ActivateApplicationForLaunch@@YAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAK@Z.c)
 * Callees:
 *     ??$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveWindowFactory@@@12@XZ @ 0x1800A4B60 (--$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveWindowFact.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x1805F0764 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 *     ?SetExistingSplashScreen@CImmersiveWindowFactoryBase@@QEAAXPEAUISplashScreen@@@Z @ 0x18061AC78 (-SetExistingSplashScreen@CImmersiveWindowFactoryBase@@QEAAXPEAUISplashScreen@@@Z.c)
 */

__int64 __fastcall ActivateApplicationForLaunchWithManager(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        struct ISplashScreen *a6,
        __int64 a7,
        CImmersiveWindowFactory *a8)
{
  CImmersiveWindowFactory *v8; // r14
  CImmersiveWindowFactoryBase *v9; // rbx
  struct ISplashScreen *v10; // rdi
  CImmersiveWindowFactory **v15; // rax
  CImmersiveWindowFactory *v16; // rcx
  unsigned int v17; // edi

  v8 = a8;
  v9 = 0LL;
  v10 = a6;
  *(_DWORD *)a8 = 0;
  if ( v10 && (a5 & 0x10001) == 0 )
  {
    v15 = Microsoft::WRL::Details::Make<CImmersiveWindowFactory,>(&a8);
    if ( &a6 != v15 )
    {
      v9 = *v15;
      *v15 = 0LL;
    }
    v16 = a8;
    if ( a8 )
    {
      a8 = 0LL;
      (*(void (__fastcall **)(CImmersiveWindowFactory *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( !v9 )
      return (unsigned int)-2147024882;
    CImmersiveWindowFactoryBase::SetExistingSplashScreen(v9, v10);
  }
  v17 = _ActivateApplicationForLaunchHelperWithWindowFactory(a1, a2, a3, a4, a5, a7, v9, v8);
  if ( v9 )
    (*(void (__fastcall **)(CImmersiveWindowFactoryBase *))(*(_QWORD *)v9 + 16LL))(v9);
  return v17;
}
