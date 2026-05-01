/*
 * XREFs of ?SetDockThreshold@CShellSnapComponent@@AEAAXXZ @ 0x180060F24
 * Callers:
 *     ?OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18005FA70 (-OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800610EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ??$SetDockThreshold@AEAJAEAJAEAJAEAJAEAJAEAJ@CSnapComponentTelemetry@@SAXAEAJ00000@Z @ 0x18006185C (--$SetDockThreshold@AEAJAEAJAEAJAEAJAEAJAEAJ@CSnapComponentTelemetry@@SAXAEAJ00000@Z.c)
 *     ??$SetDockThreshold@AEBHAEBHAEBHAEBHAEBHAEBH@CSnapComponentTelemetry@@SAXAEBH00000@Z @ 0x180590854 (--$SetDockThreshold@AEBHAEBHAEBHAEBHAEBHAEBH@CSnapComponentTelemetry@@SAXAEBH00000@Z.c)
 */

void __fastcall CShellSnapComponent::SetDockThreshold(CShellSnapComponent *this, __int64 a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  UINT v7; // edx
  UINT v8; // ecx

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
    a2);
  if ( *((_BYTE *)this + 1228) )
  {
    CSnapComponentTelemetry::SetDockThreshold<long &,long &,long &,long &,long &,long &>(
      (_DWORD)this + 1232,
      (_DWORD)this + 1236,
      (_DWORD)this + 1240,
      (_DWORD)this + 1244,
      (__int64)this + 1248,
      (__int64)this + 1252);
    SystemParametersInfoW(0x8Bu, *((_DWORD *)this + 313), 0LL, 0);
    SystemParametersInfoW(0x89u, *((_DWORD *)this + 310), 0LL, 0);
    SystemParametersInfoW(0x87u, *((_DWORD *)this + 312), 0LL, 0);
    SystemParametersInfoW(0x85u, *((_DWORD *)this + 309), 0LL, 0);
    SystemParametersInfoW(0x81u, *((_DWORD *)this + 311), 0LL, 0);
    v7 = *((_DWORD *)this + 308);
    v8 = 127;
  }
  else
  {
    CSnapComponentTelemetry::SetDockThreshold<int const &,int const &,int const &,int const &,int const &,int const &>(
      v4,
      v3,
      v5,
      v6);
    SystemParametersInfoW(0x7Fu, 1u, 0LL, 0);
    SystemParametersInfoW(0x81u, 0x1Eu, 0LL, 0);
    SystemParametersInfoW(0x85u, 0x14u, 0LL, 0);
    SystemParametersInfoW(0x87u, 0x1Eu, 0LL, 0);
    SystemParametersInfoW(0x89u, 0x32u, 0LL, 0);
    v7 = 50;
    v8 = 139;
  }
  SystemParametersInfoW(v8, v7, 0LL, 0);
}
