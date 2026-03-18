/*
 * XREFs of CmInitSystem0 @ 0x140B131D4
 * Callers:
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1403C77F8 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1403C7A30 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     CmpGetSystemControlValues @ 0x140B14B1C (CmpGetSystemControlValues.c)
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
  for ( result = (__int64)wil_details_FeatureDescriptors_SkipPadding((__int64 *)&wil_details_featureDescriptors_a);
        result;
        result = (__int64)wil_details_FeatureDescriptors_SkipPadding((__int64 *)(result + 48)) )
  {
    if ( !*(_BYTE *)(result + 21) && !*(_BYTE *)(result + 22) && !*(_BYTE *)(result + 20) )
    {
      result = RtlRegisterFeatureConfigurationChangeNotification(
                 (__int64)wil_details_OnFeatureConfigurationChange,
                 0LL,
                 0LL,
                 (__int64)&wil_details_featureChangeNotification);
      if ( (_DWORD)result )
        wil_details_featureChangeNotification = 0LL;
      return result;
    }
  }
  return result;
}
