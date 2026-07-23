/*
 * XREFs of sub_140907F90 @ 0x140907F90
 * Callers:
 *     sub_140502D50 @ 0x140502D50 (sub_140502D50.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x1403C7820 (RtlQueryFeatureConfiguration.c)
 */

__int64 __fastcall sub_140907F90(__int64 a1, RTL_FEATURE_ID a2, int a3, _DWORD *a4)
{
  int v5; // edi
  unsigned int v7; // ebx
  NTSTATUS v8; // edx
  ULONG Flags; // ecx
  _RTL_FEATURE_CONFIGURATION v11; // [rsp+20h] [rbp-18h] BYREF
  ULONGLONG v12; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  *(_QWORD *)&v11.FeatureId = 0LL;
  v11.VariantPayload = 0;
  v7 = 0;
  v8 = RtlQueryFeatureConfiguration(a2, (RTL_FEATURE_CONFIGURATION_TYPE)(a3 == 0), &v12, &v11);
  if ( v8 )
  {
    if ( v8 != 279 )
      goto LABEL_6;
    Flags = v11.Flags;
    v7 = 1;
  }
  else
  {
    Flags = v11.Flags;
    v7 = 1;
    *(_DWORD *)a1 = (v11.Flags >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(Flags) & 0x3F;
    *(_DWORD *)(a1 + 12) = v11.VariantPayload;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)Flags >> 14;
    *(_DWORD *)(a1 + 20) = (Flags >> 6) & 1;
  }
  *(_DWORD *)(a1 + 16) = (Flags >> 7) & 1;
LABEL_6:
  if ( a4 )
  {
    LOBYTE(v5) = v8 != -2147483614;
    *a4 = v5;
  }
  return v7;
}
