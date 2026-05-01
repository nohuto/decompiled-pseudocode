/*
 * XREFs of ?GetData@CShellSnapComponent@@UEAAXPEAPEAXPEA_J0@Z @ 0x180593470
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180061644 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ??$make_self@VSnapLayoutProvider@@PEAUIImmersiveMonitorManager@@@winrt@@YA?AU?$com_ptr@VSnapLayoutProvider@@@0@$$QEAPEAUIImmersiveMonitorManager@@@Z @ 0x18016950C (--$make_self@VSnapLayoutProvider@@PEAUIImmersiveMonitorManager@@@winrt@@YA-AU-$com_ptr@VSnapLayo.c)
 */

void __fastcall CShellSnapComponent::GetData(CShellSnapComponent *this, void **a2, __int64 *a3, void **a4)
{
  const char *v8; // r9
  struct IImmersiveMonitorManager *v9; // [rsp+20h] [rbp-18h] BYREF
  SnapLayoutProvider *v10; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SNTest>::GetImpl'::`2'::impl,
      1u,
      3u,
      (__int64)a4);
    *a2 = (char *)this - 176;
    v9 = (struct IImmersiveMonitorManager *)*((_QWORD *)this + 6);
    winrt::make_self<SnapLayoutProvider,IImmersiveMonitorManager *>(&v10, &v9);
    a3[3] = -5982087LL;
    a4[3] = v10;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x6E5,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      v8);
  }
}
