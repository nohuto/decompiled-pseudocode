/*
 * XREFs of _lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator() @ 0x180055350
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18003FE74 (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _lambda_cafd355bc8518bdbec11f1f0c823a855_::operator() @ 0x180075148 (_lambda_cafd355bc8518bdbec11f1f0c823a855_--operator().c)
 * Callees:
 *     ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x18000E580 (-TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18002C970 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002EC18 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 */

struct _GUID *__fastcall lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator()(__int64 a1, struct _GUID *a2)
{
  EffectPack *v2; // rsi
  __int64 *v5; // rax
  GUID *v6; // rdx
  __int64 *v7; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v8; // r8d
  struct _GUID v10; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(EffectPack **)a1;
  v5 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                    (unsigned __int64 *)(*(_QWORD *)a1 + 1392LL),
                    *(int *)(a1 + 8));
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v5, (_QWORD *)(a1 + 12)) == -1 )
  {
    v7 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                      (unsigned __int64 *)(*(_QWORD *)a1 + 1392LL),
                      *(int *)(a1 + 8));
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         v7,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
      v6 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  }
  v8 = *(_DWORD *)(a1 + 8);
  v10 = *v6;
  EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(v2, a2, v8, &v10);
  return a2;
}
