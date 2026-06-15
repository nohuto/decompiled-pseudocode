/*
 * XREFs of _lambda_9db93a4360823e3555de44b3b523347b_::operator() @ 0x180144968
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800469F8 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_d964387455321ab6cd7bc18fda753d22_::operator() @ 0x1800692D8 (_lambda_d964387455321ab6cd7bc18fda753d22_--operator().c)
 * Callees:
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18000EC78 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18001058C (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 */

struct _GUID *__fastcall lambda_9db93a4360823e3555de44b3b523347b_::operator()(__int64 a1, struct _GUID *a2)
{
  __int64 v2; // rsi
  __int64 *v5; // rax
  GUID *v6; // rdx
  __int64 *v7; // rax
  int v8; // r8d
  GUID v10; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(_QWORD *)a1;
  v5 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                    (unsigned __int64 *)(*(_QWORD *)a1 + 152LL),
                    *(int *)(a1 + 8));
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v5, (_QWORD *)(a1 + 12)) == -1 )
  {
    v7 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                      (unsigned __int64 *)(*(_QWORD *)a1 + 152LL),
                      *(int *)(a1 + 8));
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         v7,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
      v6 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  }
  v8 = *(_DWORD *)(a1 + 8);
  v10 = *v6;
  CEndpointCharacteristics::GetAliasedDeviceConnectorMode(v2, a2, v8, &v10, 1);
  return a2;
}
