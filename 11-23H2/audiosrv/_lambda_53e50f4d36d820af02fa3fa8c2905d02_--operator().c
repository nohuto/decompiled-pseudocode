/*
 * XREFs of _lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator() @ 0x18014ABF8
 * Callers:
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180054094 (CEndpointCharacteristics--GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x1801489C4 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_53e50f4d36d820af02fa3fa8c2905d02__.c)
 *     _lambda_2d57628cd8490ef0d12835f9ba011710_::operator() @ 0x18014AA3C (_lambda_2d57628cd8490ef0d12835f9ba011710_--operator().c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000E360 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 */

bool __fastcall lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator()(__int64 a1, __int64 a2)
{
  __int128 v3; // xmm0
  unsigned int v4; // edx
  __int64 v5; // rcx
  __int128 v7; // [rsp+50h] [rbp-18h] BYREF

  v3 = *(_OWORD *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v7 = v3;
  return (int)EffectPack::GetSharedModeEnginePeriodicity(v5, v4, a2, &v7, 0, 0LL, 0LL, 0LL, 0LL) >= 0;
}
