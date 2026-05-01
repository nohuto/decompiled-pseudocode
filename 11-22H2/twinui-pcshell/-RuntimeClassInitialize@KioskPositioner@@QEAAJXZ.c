/*
 * XREFs of ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1800EFA3C
 * Callers:
 *     ??$MakeAndInitialize@VKioskPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18019A29C (--$MakeAndInitialize@VKioskPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@.c)
 * Callees:
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800EF940 (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800F030C (-LoadShellLauncherConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguration.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_KioskPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019A004 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_KioskPositioner@@@details@wil@@QEAAX_NW4R.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?4U?$default_delete@VPrimaryAppProxyBase@@@std@@$0A@@?$unique_ptr@VPrimaryAppProxyBase@@U?$default_delete@VPrimaryAppProxyBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805A67CC (--$-4U-$default_delete@VPrimaryAppProxyBase@@@std@@$0A@@-$unique_ptr@VPrimaryAppProxyBase@@U-$de.c)
 *     ??R?$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z @ 0x1805A75E0 (--R-$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::RuntimeClassInitialize(KioskPositioner *this)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  __int64 v5; // rcx
  void *v6; // rcx
  Win32PrimaryAppProxy *AssignedAccessConfiguration; // rax
  Win32PrimaryAppProxy *v8; // rbx
  __int64 v10; // rax
  int v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+28h] [rbp-50h] BYREF
  char v13; // [rsp+30h] [rbp-48h]
  char v14; // [rsp+38h] [rbp-40h]
  GUID v15; // [rsp+40h] [rbp-38h] BYREF
  __int128 v16; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v15 = GUID_4318ccd5_092f_4ad4_9bc2_6962f0b2d986;
  v16 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (KioskPositioner *)((char *)this + 40),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&v15,
         1u);
  v4 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F9,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v2,
      v11);
    return v4;
  }
  else
  {
    LOBYTE(v3) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_KioskPositioner>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_KioskPositioner>::GetImpl'::`2'::impl,
      v3);
    KioskPositioner::LoadShellLauncherConfiguration(v5, &v12);
    if ( v14 )
      goto LABEL_18;
    AssignedAccessConfiguration = KioskPositioner::LoadAssignedAccessConfiguration(v6, (Win32PrimaryAppProxy *)&v15);
    v8 = AssignedAccessConfiguration;
    if ( *((_BYTE *)AssignedAccessConfiguration + 16) )
    {
      if ( v14 )
      {
        std::unique_ptr<PrimaryAppProxyBase>::operator=<std::default_delete<PrimaryAppProxyBase>,0>(
          &v12,
          AssignedAccessConfiguration);
        v13 = *((_BYTE *)v8 + 8);
      }
      else
      {
        v10 = *(_QWORD *)AssignedAccessConfiguration;
        *(_QWORD *)v8 = 0LL;
        v12 = v10;
        v13 = *((_BYTE *)v8 + 8);
        v14 = 1;
      }
    }
    else if ( v14 )
    {
      if ( v12 )
        std::default_delete<PrimaryAppProxyBase>::operator()();
      v14 = 0;
    }
    if ( (_BYTE)v16 && *(_QWORD *)&v15.Data1 )
      std::default_delete<PrimaryAppProxyBase>::operator()();
    if ( v14 )
    {
LABEL_18:
      *((_BYTE *)this + 632) = 1;
      std::unique_ptr<PrimaryAppProxyBase>::operator=<std::default_delete<PrimaryAppProxyBase>,0>(
        (char *)this + 640,
        &v12);
      *((_BYTE *)this + 633) = v13;
    }
    if ( v14 )
    {
      if ( v12 )
        std::default_delete<PrimaryAppProxyBase>::operator()();
    }
    return 0LL;
  }
}
