/*
 * XREFs of ?CreateSearchAppPositioner@@YA?AV?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@PEAUIServiceProvider@@@Z @ 0x18005F2A8
 * Callers:
 *     ?GetExperienceManager@UndockedSearchAppExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18005D5B0 (-GetExperienceManager@UndockedSearchAppExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAP.c)
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@4@Z @ 0x1801A0C20 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV-$Com.c)
 * Callees:
 *     ??0TaskbarSearchAppPositioner@@QEAA@V?$unique_ptr@VISearchAppPositionerConfig@@U?$default_delete@VISearchAppPositionerConfig@@@wistd@@@wistd@@@Z @ 0x18005F3CC (--0TaskbarSearchAppPositioner@@QEAA@V-$unique_ptr@VISearchAppPositionerConfig@@U-$default_delete.c)
 *     ??0TaskbarSearchAppPositionerConfig@@QEAA@PEAUIServiceProvider@@@Z @ 0x18005F428 (--0TaskbarSearchAppPositionerConfig@@QEAA@PEAUIServiceProvider@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SRTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F78A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SRTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F793C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?4VSearchBoxOnTaskbarSearchAppPositioner@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositioner@@@wistd@@XX@?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositioner@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositioner@@@wistd@@@1@@Z @ 0x180198CCC (--$-4VSearchBoxOnTaskbarSearchAppPositioner@@U-$default_delete@VSearchBoxOnTaskbarSearchAppPosit.c)
 *     ??$make_unique_nothrow@VSearchBoxOnTaskbarSearchAppPositioner@@V?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositionerConfig@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositionerConfig@@@wistd@@@wistd@@@wil@@YA?AV?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositioner@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositioner@@@wistd@@@wistd@@$$QEAV?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositionerConfig@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositionerConfig@@@wistd@@@2@@Z @ 0x18019A534 (--$make_unique_nothrow@VSearchBoxOnTaskbarSearchAppPositioner@@V-$unique_ptr@VSearchBoxOnTaskbar.c)
 *     ??$make_unique_nothrow@VSearchBoxOnTaskbarSearchAppPositionerConfig@@AEAPEAUIServiceProvider@@@wil@@YA?AV?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositionerConfig@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositionerConfig@@@wistd@@@wistd@@AEAPEAUIServiceProvider@@@Z @ 0x18019A5B8 (--$make_unique_nothrow@VSearchBoxOnTaskbarSearchAppPositionerConfig@@AEAPEAUIServiceProvider@@@w.c)
 *     ??1?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositioner@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositioner@@@wistd@@@wistd@@QEAA@XZ @ 0x18019BD98 (--1-$unique_ptr@VSearchBoxOnTaskbarSearchAppPositioner@@U-$default_delete@VSearchBoxOnTaskbarSea.c)
 *     ??1?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositionerConfig@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositionerConfig@@@wistd@@@wistd@@QEAA@XZ @ 0x18019BDD4 (--1-$unique_ptr@VSearchBoxOnTaskbarSearchAppPositionerConfig@@U-$default_delete@VSearchBoxOnTask.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall CreateSearchAppPositioner(__int64 *a1, struct IServiceProvider *a2, __int64 a3)
{
  struct IServiceProvider *v3; // rdi
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  TaskbarSearchAppPositionerConfig *v9; // rax
  TaskbarSearchAppPositionerConfig *v10; // rdi
  void *v11; // rax
  TaskbarSearchAppPositionerConfig *v13; // [rsp+50h] [rbp+28h] BYREF
  struct IServiceProvider *v14; // [rsp+58h] [rbp+30h] BYREF
  __int64 v15; // [rsp+60h] [rbp+38h] BYREF
  char v16; // [rsp+68h] [rbp+40h] BYREF

  v14 = a2;
  v13 = (TaskbarSearchAppPositionerConfig *)a1;
  v3 = a2;
  v5 = 0LL;
  v15 = 0LL;
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SRTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SRTest>::GetImpl'::`2'::impl,
    a2,
    a3);
  LOBYTE(v6) = 3;
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    v7,
    v6);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl) )
  {
    wil::make_unique_nothrow<SearchBoxOnTaskbarSearchAppPositionerConfig,IServiceProvider * &>(&v13, &v14);
    v8 = wil::make_unique_nothrow<SearchBoxOnTaskbarSearchAppPositioner,wistd::unique_ptr<SearchBoxOnTaskbarSearchAppPositionerConfig,wistd::default_delete<SearchBoxOnTaskbarSearchAppPositionerConfig>>>(
           &v16,
           &v13);
    wistd::unique_ptr<ISearchAppPositioner,wistd::default_delete<ISearchAppPositioner>>::operator=<SearchBoxOnTaskbarSearchAppPositioner,wistd::default_delete<SearchBoxOnTaskbarSearchAppPositioner>,void,void>(
      &v15,
      v8);
    wistd::unique_ptr<SearchBoxOnTaskbarSearchAppPositioner,wistd::default_delete<SearchBoxOnTaskbarSearchAppPositioner>>::~unique_ptr<SearchBoxOnTaskbarSearchAppPositioner,wistd::default_delete<SearchBoxOnTaskbarSearchAppPositioner>>(&v16);
    wistd::unique_ptr<SearchBoxOnTaskbarSearchAppPositionerConfig,wistd::default_delete<SearchBoxOnTaskbarSearchAppPositionerConfig>>::~unique_ptr<SearchBoxOnTaskbarSearchAppPositionerConfig,wistd::default_delete<SearchBoxOnTaskbarSearchAppPositionerConfig>>(&v13);
    v5 = v15;
  }
  else
  {
    v9 = (TaskbarSearchAppPositionerConfig *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v9;
    if ( v9 )
      v10 = TaskbarSearchAppPositionerConfig::TaskbarSearchAppPositionerConfig(v9, v3);
    else
      v10 = 0LL;
    v11 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v11 )
    {
      v13 = v10;
      v5 = TaskbarSearchAppPositioner::TaskbarSearchAppPositioner(v11, &v13);
    }
    else if ( v10 )
    {
      (**(void (__fastcall ***)(TaskbarSearchAppPositionerConfig *, __int64))v10)(v10, 1LL);
    }
  }
  *a1 = v5;
  return a1;
}
