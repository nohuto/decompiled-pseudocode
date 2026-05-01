/*
 * XREFs of ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1801487F8
 * Callers:
 *     ??$MakeAndInitialize@VKioskPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18014874C (--$MakeAndInitialize@VKioskPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_KioskPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801488D8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_KioskPositioner@@@details@wil@@QEAAX_NW4R.c)
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x180148AF0 (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x180148D70 (-LoadShellLauncherConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguration.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$?4U?$default_delete@VPrimaryAppProxyBase@@@std@@$0A@@?$unique_ptr@VPrimaryAppProxyBase@@U?$default_delete@VPrimaryAppProxyBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804EE71C (--$-4U-$default_delete@VPrimaryAppProxyBase@@@std@@$0A@@-$unique_ptr@VPrimaryAppProxyBase@@U-$de.c)
 *     ??R?$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z @ 0x1804EF710 (--R-$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::RuntimeClassInitialize(KioskPositioner *this)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  char v12; // [rsp+28h] [rbp-50h]
  char v13; // [rsp+30h] [rbp-48h]
  GUID v14; // [rsp+40h] [rbp-38h] BYREF
  __int128 v15; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v14 = GUID_4318ccd5_092f_4ad4_9bc2_6962f0b2d986;
  v15 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (KioskPositioner *)((char *)this + 40),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&v14,
         1uLL);
  v4 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F9,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v2);
    return v4;
  }
  else
  {
    LOBYTE(v3) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_KioskPositioner>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_KioskPositioner>::GetImpl'::`2'::impl,
      v3);
    KioskPositioner::LoadShellLauncherConfiguration(v5, &v11);
    if ( v13 )
      goto LABEL_18;
    v7 = KioskPositioner::LoadAssignedAccessConfiguration(v6, &v14);
    v8 = v7;
    if ( *(_BYTE *)(v7 + 16) )
    {
      if ( v13 )
      {
        std::unique_ptr<PrimaryAppProxyBase>::operator=<std::default_delete<PrimaryAppProxyBase>,0>(&v11, v7);
        v12 = *(_BYTE *)(v8 + 8);
      }
      else
      {
        v10 = *(_QWORD *)v7;
        *(_QWORD *)v8 = 0LL;
        v11 = v10;
        v12 = *(_BYTE *)(v8 + 8);
        v13 = 1;
      }
    }
    else if ( v13 )
    {
      if ( v11 )
        std::default_delete<PrimaryAppProxyBase>::operator()();
      v13 = 0;
    }
    if ( (_BYTE)v15 && *(_QWORD *)&v14.Data1 )
      std::default_delete<PrimaryAppProxyBase>::operator()();
    if ( v13 )
    {
LABEL_18:
      *((_BYTE *)this + 632) = 1;
      std::unique_ptr<PrimaryAppProxyBase>::operator=<std::default_delete<PrimaryAppProxyBase>,0>(
        (char *)this + 640,
        &v11);
      *((_BYTE *)this + 633) = v12;
    }
    if ( v13 )
    {
      if ( v11 )
        std::default_delete<PrimaryAppProxyBase>::operator()();
    }
    return 0LL;
  }
}
