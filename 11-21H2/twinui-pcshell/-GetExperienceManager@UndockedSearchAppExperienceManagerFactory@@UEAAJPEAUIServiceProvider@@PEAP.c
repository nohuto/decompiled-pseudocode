/*
 * XREFs of ?GetExperienceManager@UndockedSearchAppExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18005D5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SHTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005D6E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SHTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ??$MakeAndInitialize@VMiniSearchExperienceManager@@VIMiniSearch@@AEAPEAUIServiceProvider@@$$T$$T@Details@WRL@Microsoft@@YAJPEAPEAVIMiniSearch@@AEAPEAUIServiceProvider@@$$QEA$$T2@Z @ 0x18005DB54 (--$MakeAndInitialize@VMiniSearchExperienceManager@@VIMiniSearch@@AEAPEAUIServiceProvider@@$$T$$T.c)
 *     ?CreateSearchAppPositioner@@YA?AV?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@PEAUIServiceProvider@@@Z @ 0x18005F2A8 (-CreateSearchAppPositioner@@YA-AV-$unique_ptr@VISearchAppPositioner@@U-$default_delete@VISearchA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VUndockedSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@AEAV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@AEAV?$ComPtr@VIMiniSearch@@@12@@Z @ 0x180199998 (--$MakeAndInitialize@VUndockedSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5460 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManagerFactory::GetExperienceManager(
        UndockedSearchAppExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  struct IServiceProvider *v4; // rbx
  int v5; // eax
  void (__fastcall ****v6)(_QWORD, __int64); // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rbx
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  int v9; // eax
  unsigned int v10; // ebx
  void (__fastcall ***v12)(_QWORD, __int64); // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IServiceProvider *v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v14 = a2;
  v4 = a2;
  v15 = 0LL;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SHTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SHTest>::GetImpl'::`2'::impl,
    a2);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl) )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
    v5 = Microsoft::WRL::Details::MakeAndInitialize<MiniSearchExperienceManager,IMiniSearch,IServiceProvider * &,std::nullptr_t,std::nullptr_t>(
           &v15,
           &v14);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD00,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        (int)v12);
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl) )
  {
    v6 = (void (__fastcall ****)(_QWORD, __int64))CreateSearchAppPositioner(&v12, v4);
    v7 = *v6;
    *v6 = 0LL;
    v8 = v12;
    v12 = 0LL;
    if ( v8 )
      (**v8)(v8, 1LL);
    if ( v7 )
      (**v7)(v7, 1LL);
  }
  v9 = Microsoft::WRL::Details::MakeAndInitialize<UndockedSearchAppExperienceManager,IInspectable,IServiceProvider * &,Microsoft::WRL::ComPtr<IMiniSearch> &>((void **)a3);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD07,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v9,
      (int)v12);
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v15);
  return v10;
}
