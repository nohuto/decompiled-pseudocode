/*
 * XREFs of NotifyInputSinkRemoved @ 0x180080F20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180003F34 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputSiteTree@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004C7D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputSiteTree@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z @ 0x18008099C (-InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z.c)
 */

__int64 __fastcall NotifyInputSinkRemoved(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  RTL_SRWLOCK *Instance; // rax
  RTL_SRWLOCK *v6; // rdi
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputSiteTree>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputSiteTree>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  Instance = InputSinkDataCache::GetInstance();
  v8 = 0LL;
  v6 = Instance;
  NtQueryCompositionInputSinkLuid(a1, &v8);
  v9 = v8;
  InputSinkDataCache::InputSinkRemoved(v6, v8);
  return 1LL;
}
