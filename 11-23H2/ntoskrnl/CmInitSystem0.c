/*
 * XREFs of CmInitSystem0 @ 0x140B534F0
 * Callers:
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x140374740 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     wil_details_ShouldRegisterFeatureStagingChangeNotification @ 0x14067EE8C (wil_details_ShouldRegisterFeatureStagingChangeNotification.c)
 *     CmpGetSystemControlValues @ 0x140B59984 (CmpGetSystemControlValues.c)
 */

__int64 __fastcall CmInitSystem0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 ***v5; // rax
  __int64 **v6; // rbx
  __int64 result; // rax

  CmpGetSystemControlValues(*(_QWORD *)(a1 + 168), a2, 0LL);
  v5 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 312LL);
  v6 = *v5;
  while ( v6 != (__int64 **)v5 )
  {
    if ( ((_DWORD)v6[3] & 0x40) != 0 )
    {
      LOBYTE(v4) = 1;
      CmpGetSystemControlValues(v6[4], v3, v4);
    }
    v6 = (__int64 **)*v6;
    v5 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 312LL);
  }
  result = (__int64)wil_details_ShouldRegisterFeatureStagingChangeNotification();
  if ( (_DWORD)result )
  {
    result = RtlRegisterFeatureConfigurationChangeNotification(
               (__int64)wil_details_ReevaluateOnFeatureConfigurationChange,
               0LL,
               0LL,
               (__int64)&g_wil_details_featureChangeNotification);
    if ( (_DWORD)result )
      g_wil_details_featureChangeNotification = 0LL;
  }
  return result;
}
