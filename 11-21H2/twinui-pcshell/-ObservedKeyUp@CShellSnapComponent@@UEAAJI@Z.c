/*
 * XREFs of ?ObservedKeyUp@CShellSnapComponent@@UEAAJI@Z @ 0x1805943B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ObservedKeyUp@AEAI@CSnapComponentTelemetry@@SAXAEAI@Z @ 0x18059066C (--$ObservedKeyUp@AEAI@CSnapComponentTelemetry@@SAXAEAI@Z.c)
 *     ?UnregisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x180597838 (-UnregisterRawInput@CShellSnapComponent@@AEAAXXZ.c)
 */

__int64 __fastcall CShellSnapComponent::ObservedKeyUp(CShellSnapComponent *this, int a2, __int64 a3, __int64 a4)
{
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  CSnapComponentTelemetry::ObservedKeyUp<unsigned int &>(&v7);
  if ( (unsigned int)(a2 - 91) <= 1 )
  {
    CShellSnapComponent::UnregisterRawInput((CShellSnapComponent *)((char *)this - 192));
    (*(void (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this - 6) + 32LL))((char *)this - 48, 2LL, 8LL);
  }
  return 0LL;
}
