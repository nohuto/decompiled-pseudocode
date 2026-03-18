/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::RenderThreadWatchdogTimeoutMilliseconds__ @ 0x180003A90
 * Callers:
 *     <none>
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x180025D7C (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180027FE4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@details@wil@@QEAAX.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::RenderThreadWatchdogTimeoutMilliseconds__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RenderThreadWatchdog>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_RenderThreadWatchdog>::GetImpl'::`2'::impl,
    0LL);
  result = RegGetDwmDwordHelper(L"RenderThreadWatchdogTimeoutMilliseconds", &v2, 0LL);
  v1 = 60000;
  if ( (_BYTE)result )
    v1 = v2;
  CCommonRegistryData::RenderThreadWatchdogTimeoutMilliseconds = v1;
  return result;
}
