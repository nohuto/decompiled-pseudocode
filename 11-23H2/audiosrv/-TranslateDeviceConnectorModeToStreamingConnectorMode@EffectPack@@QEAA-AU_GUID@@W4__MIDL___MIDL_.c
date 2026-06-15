/*
 * XREFs of ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x18000E580
 * Callers:
 *     ?CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ @ 0x18000E1AC (-CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800154C4 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     _lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator() @ 0x180055360 (_lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_--operator().c)
 *     ?RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014E924 (-RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18000E62C (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ?FindKey@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000E654 (-FindKey@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x180054774 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

struct _GUID *__fastcall EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(
        EffectPack *this,
        struct _GUID *__return_ptr retstr,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4)
{
  struct _GUID v4; // xmm6
  char *v5; // rsi
  __int64 v6; // rdi
  __int64 v8; // rax
  struct _GUID *v9; // rax
  struct _GUID v10; // xmm0
  struct _GUID *result; // rax
  CAudioSignalProcessingModeMap *v12; // rax
  struct _GUID v13; // [rsp+20h] [rbp-58h] BYREF
  struct _GUID v14; // [rsp+30h] [rbp-48h] BYREF

  v4 = *a4;
  v5 = (char *)this + 1536;
  v6 = a3;
  v13 = *a4;
  v8 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[]((char *)this + 1536, a3);
  if ( (unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::FindKey(v8, &v13) == -1 )
  {
    v13 = v4;
    v9 = &v13;
  }
  else
  {
    v12 = (CAudioSignalProcessingModeMap *)gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](v5, v6);
    v13 = v4;
    v9 = CAudioSignalProcessingModeMap::Lookup(v12, &v14, &v13);
  }
  v10 = *v9;
  result = retstr;
  *retstr = v10;
  return result;
}
