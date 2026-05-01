/*
 * XREFs of ?CreateSearchAppPositioner@@YA?AV?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@PEAUIServiceProvider@@@Z @ 0x180171F08
 * Callers:
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@4V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@wistd@@@Z @ 0x1801716F8 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV-$Com.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SRTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180116318 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SRTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ??0SearchBoxOnTaskbarSearchAppPositioner@@QEAA@V?$unique_ptr@VISearchAppPositionerConfig@@U?$default_delete@VISearchAppPositionerConfig@@@wistd@@@wistd@@@Z @ 0x180171FC8 (--0SearchBoxOnTaskbarSearchAppPositioner@@QEAA@V-$unique_ptr@VISearchAppPositionerConfig@@U-$def.c)
 *     ??$make_unique_nothrow@VSearchBoxOnTaskbarSearchAppPositionerConfig@@AEAPEAUIServiceProvider@@@wil@@YA?AV?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositionerConfig@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositionerConfig@@@wistd@@@wistd@@AEAPEAUIServiceProvider@@@Z @ 0x180172024 (--$make_unique_nothrow@VSearchBoxOnTaskbarSearchAppPositionerConfig@@AEAPEAUIServiceProvider@@@w.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180172AE4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall CreateSearchAppPositioner(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rdx
  void *v8; // rax
  void (__fastcall ***v9)(_QWORD, __int64); // rbx
  __int64 v10; // rdi
  void (__fastcall ***v12)(_QWORD, __int64); // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v12 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SRTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SRTest>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  LOBYTE(v5) = 3;
  LOBYTE(v6) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    v6,
    v5);
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    v7);
  wil::make_unique_nothrow<SearchBoxOnTaskbarSearchAppPositionerConfig,IServiceProvider * &>(&v12, &v13);
  v8 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = 0LL;
    v10 = SearchBoxOnTaskbarSearchAppPositioner::SearchBoxOnTaskbarSearchAppPositioner(v8, &v12);
  }
  else
  {
    v10 = 0LL;
    v9 = v12;
  }
  if ( v9 )
    (**v9)(v9, 1LL);
  *a1 = v10;
  return a1;
}
