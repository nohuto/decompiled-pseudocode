/*
 * XREFs of ??$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplicationContainerActivationComponent@@AEA_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@$$QEAPEAUIApplicationContainerActivationComponent@@AEA_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180575C4C
 * Callers:
 *     ?Launch@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG1_N2@Z @ 0x180575FE8 (-Launch@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG1_N2@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x180572FD0 (-InternalRelease@-$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationContainerActivationComponent@@AEA_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationContainerActivationPolicy@@$$QEAPEAUIApplicationContainerActivationComponent@@AEA_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180575B94 (--$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationCont_ea_180575B94.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAndInitializeOrThrow<ApplicationContainerActivationPolicy,IApplicationContainerActivationComponent *,bool &,std::wstring>(
        __int64 *a1,
        __int64 *a2,
        char *a3,
        _QWORD *a4)
{
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::InternalRelease(a1);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<ApplicationContainerActivationPolicy,ApplicationContainerActivationPolicy,IApplicationContainerActivationComponent *,bool &,std::wstring>(
         a1,
         a2,
         a3,
         a4);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x24,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\wrl.h",
      (const char *)(unsigned int)v8,
      1);
  return a1;
}
