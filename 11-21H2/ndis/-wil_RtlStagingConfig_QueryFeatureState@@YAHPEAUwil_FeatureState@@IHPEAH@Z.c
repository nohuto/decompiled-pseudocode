/*
 * XREFs of ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x1C0101008
 * Callers:
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C00348A0 (-wil_details_GetCurrentFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@@PEBUwil_details_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 */

__int64 __fastcall wil_RtlStagingConfig_QueryFeatureState(
        struct wil_FeatureState *a1,
        RTL_FEATURE_ID a2,
        int a3,
        int *a4)
{
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  unsigned int v7; // ecx
  ULONGLONG v9; // [rsp+20h] [rbp-28h] BYREF
  _RTL_FEATURE_CONFIGURATION v10; // [rsp+28h] [rbp-20h] BYREF

  v5 = 0;
  v9 = 0LL;
  *(_QWORD *)&v10.FeatureId = 0LL;
  v10.VariantPayload = 0;
  v6 = RtlQueryFeatureConfiguration(a2, (RTL_FEATURE_CONFIGURATION_TYPE)(a3 == 0), &v9, &v10);
  if ( !v6 )
  {
    v7 = *((_DWORD *)&v10 + 1);
    a1->enabledState = (*((_DWORD *)&v10 + 1) >> 4) & 3;
    a1->variant = BYTE1(v7) & 0x3F;
    a1->payload = v10.VariantPayload;
    a1->payloadKind = (unsigned __int16)v7 >> 14;
    a1->isVariantConfiguration = (v7 >> 6) & 1;
    a1->hasNotification = (v7 >> 7) & 1;
    return 1;
  }
  if ( v6 == 279 )
  {
    a1->hasNotification = (*((_DWORD *)&v10 + 1) >> 7) & 1;
    return 1;
  }
  return v5;
}
