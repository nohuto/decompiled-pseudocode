/*
 * XREFs of CmInitSystem0 @ 0x140B5DFB8
 * Callers:
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x140374D90 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     wil_details_ShouldRegisterFeatureStagingChangeNotification @ 0x14067EE8C (wil_details_ShouldRegisterFeatureStagingChangeNotification.c)
 *     CmpGetSystemControlValues @ 0x140B5C934 (CmpGetSystemControlValues.c)
 */

NTSTATUS __fastcall CmInitSystem0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 ***v4; // rax
  __int64 **v5; // rbx
  NTSTATUS result; // eax

  CmpGetSystemControlValues(*(_DWORD **)(a1 + 168), a2, 0);
  v4 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 312LL);
  v5 = *v4;
  while ( v5 != (__int64 **)v4 )
  {
    if ( ((_DWORD)v5[3] & 0x40) != 0 )
      CmpGetSystemControlValues(v5[4], v3, 1);
    v5 = (__int64 **)*v5;
    v4 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 312LL);
  }
  result = (unsigned int)wil_details_ShouldRegisterFeatureStagingChangeNotification();
  if ( result )
  {
    result = RtlRegisterFeatureConfigurationChangeNotification(
               (PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK)wil_details_ReevaluateOnFeatureConfigurationChange,
               0LL,
               0LL,
               &g_wil_details_featureChangeNotification);
    if ( result )
      g_wil_details_featureChangeNotification = 0LL;
  }
  return result;
}
