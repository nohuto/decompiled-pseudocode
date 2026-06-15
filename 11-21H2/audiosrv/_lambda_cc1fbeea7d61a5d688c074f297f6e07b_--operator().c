/*
 * XREFs of _lambda_cc1fbeea7d61a5d688c074f297f6e07b_::operator() @ 0x180144AB8
 * Callers:
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x18013FB9C (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_cc1fbeea7d61a5d688c074f297f6e07b__.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x1801425C8 (CEndpointCharacteristics--GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     _lambda_42183860914b42c471786558e7d1eac4_::operator() @ 0x180144780 (_lambda_42183860914b42c471786558e7d1eac4_--operator().c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

bool __fastcall lambda_cc1fbeea7d61a5d688c074f297f6e07b_::operator()(__int64 a1, const struct tWAVEFORMATEX *a2)
{
  __int128 v3; // xmm0
  unsigned int v4; // edx
  __int64 v5; // rcx
  __int128 v7; // [rsp+50h] [rbp-18h] BYREF

  v3 = *(_OWORD *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v7 = v3;
  return (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(v5, v4, a2, &v7, 0, 0LL, 0LL, 0LL, 0LL) >= 0;
}
