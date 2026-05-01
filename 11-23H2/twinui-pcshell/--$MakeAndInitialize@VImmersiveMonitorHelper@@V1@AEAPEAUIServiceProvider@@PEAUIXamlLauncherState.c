/*
 * XREFs of ??$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVImmersiveMonitorHelper@@AEAPEAUIServiceProvider@@$$QEAPEAUIXamlLauncherState@@@Z @ 0x18010389C
 * Callers:
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180104F20 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Z @ 0x1800E50D0 (-RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherStat.c)
 *     ??0ImmersiveMonitorHelper@@QEAA@XZ @ 0x180102DD0 (--0ImmersiveMonitorHelper@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1801400A0 (-InternalRelease@-$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ImmersiveMonitorHelper,ImmersiveMonitorHelper,IServiceProvider * &,IXamlLauncherState *>(
        ImmersiveMonitorHelper **a1,
        struct IServiceProvider **a2,
        struct IXamlLauncherState **a3)
{
  ImmersiveMonitorHelper *v6; // rax
  ImmersiveMonitorHelper *v7; // rbx
  volatile int *v8; // rdx
  int v9; // edi
  ImmersiveMonitorHelper *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (ImmersiveMonitorHelper *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = ImmersiveMonitorHelper::ImmersiveMonitorHelper(v6);
    v11 = v7;
    v12 = 0LL;
    v9 = ImmersiveMonitorHelper::RuntimeClassInitialize(v7, *a2, *a3);
    if ( v9 >= 0 )
    {
      if ( v7 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((ImmersiveMonitorHelper *)((char *)v7 + 60), v8);
      *a1 = v7;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
