/*
 * XREFs of ??$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationContainerActivationComponent@@AEA_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationContainerActivationPolicy@@$$QEAPEAUIApplicationContainerActivationComponent@@AEA_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180633940
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplicationContainerActivationComponent@@AEA_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@$$QEAPEAUIApplicationContainerActivationComponent@@AEA_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806339F8 (--$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplication_ea_1806339F8.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ApplicationContainerActivationPolicy@@QEAA@XZ @ 0x18062F0BC (--0ApplicationContainerActivationPolicy@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@QEAAXPEAVApplicationContainerActivationPolicy@@@Z @ 0x1806305B8 (-Attach@-$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@QEAAXPEAVApplicationCont.c)
 *     ?InternalRelease@?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x180630DA0 (-InternalRelease@-$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ApplicationContainerActivationPolicy@@QEAAJPEAUIApplicationContainerActivationComponent@@_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18063218C (-RuntimeClassInitialize@ApplicationContainerActivationPolicy@@QEAAJPEAUIApplicationContainerActi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationContainerActivationPolicy,ApplicationContainerActivationPolicy,IApplicationContainerActivationComponent *,bool &,std::wstring>(
        __int64 *a1,
        __int64 *a2,
        char *a3,
        _QWORD *a4)
{
  ApplicationContainerActivationPolicy *v8; // rax
  int v9; // edi
  ApplicationContainerActivationPolicy *v10; // rax
  _QWORD *v11; // r9
  __int64 v12; // rbx
  volatile int *v13; // rdx
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (ApplicationContainerActivationPolicy *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = ApplicationContainerActivationPolicy::ApplicationContainerActivationPolicy(v8);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::Attach(&v15, (__int64)v10);
    v11 = a4;
    v12 = v15;
    v9 = ApplicationContainerActivationPolicy::RuntimeClassInitialize(v15, *a2, *a3, v11);
    if ( v9 >= 0 )
    {
      if ( v12 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v12 + 100), v13);
      *a1 = v12;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
