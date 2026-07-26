/*
 * XREFs of wil_RtlStagingConfig_QueryFeatureState @ 0x1C010C300
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C0036914 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 */

__int64 __fastcall wil_RtlStagingConfig_QueryFeatureState(__int64 a1, RTL_FEATURE_ID a2, int a3)
{
  unsigned int v4; // ebx
  NTSTATUS v5; // eax
  unsigned int v6; // ecx
  ULONGLONG v8; // [rsp+20h] [rbp-28h] BYREF
  _RTL_FEATURE_CONFIGURATION v9; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0;
  v8 = 0LL;
  *(_QWORD *)&v9.FeatureId = 0LL;
  v9.VariantPayload = 0;
  v5 = RtlQueryFeatureConfiguration(a2, (RTL_FEATURE_CONFIGURATION_TYPE)(a3 == 0), &v8, &v9);
  if ( !v5 )
  {
    v6 = *((_DWORD *)&v9 + 1);
    *(_DWORD *)a1 = (*((_DWORD *)&v9 + 1) >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v6) & 0x3F;
    *(_DWORD *)(a1 + 12) = v9.VariantPayload;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v6 >> 14;
    *(_DWORD *)(a1 + 20) = (v6 >> 6) & 1;
    *(_DWORD *)(a1 + 16) = (v6 >> 7) & 1;
    return 1;
  }
  if ( v5 == 279 )
  {
    *(_DWORD *)(a1 + 16) = (*((_DWORD *)&v9 + 1) >> 7) & 1;
    return 1;
  }
  return v4;
}
