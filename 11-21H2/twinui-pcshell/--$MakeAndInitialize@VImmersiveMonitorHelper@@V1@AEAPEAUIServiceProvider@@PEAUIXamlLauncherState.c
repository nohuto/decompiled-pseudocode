/*
 * XREFs of ??$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVImmersiveMonitorHelper@@AEAPEAUIServiceProvider@@$$QEAPEAUIXamlLauncherState@@@Z @ 0x1800D4CC0
 * Callers:
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800C9370 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??0ImmersiveMonitorHelper@@QEAA@XZ @ 0x1800D470C (--0ImmersiveMonitorHelper@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Z @ 0x1800D4DD4 (-RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherStat.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x180158A08 (-InternalRelease@-$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
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
