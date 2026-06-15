/*
 * XREFs of ?RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800600D0
 * Callers:
 *     ?GetDevicePipeFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000E690 (-GetDevicePipeFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800179D0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 * Callees:
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018580 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x18002EDFC (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x1800601F4 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800D0214 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempla.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectPack::RefreshDeviceFormat(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  int v4; // r8d
  int v5; // r9d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // esi
  int HasHardwareAudioEngine; // eax
  __int64 v8; // r8
  int DeviceFormat; // ebx
  void *v10; // rax
  int v11; // eax
  void *v12; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  LPVOID pv; // [rsp+40h] [rbp-40h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v17; // [rsp+48h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  struct tWAVEFORMATEX **v19; // [rsp+58h] [rbp-28h] BYREF
  struct tWAVEFORMATEX *v20[2]; // [rsp+60h] [rbp-20h] BYREF
  char v21; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( **((_DWORD **)this + 219) > 4u && tlgKeywordOn(*((_QWORD *)this + 219), 16LL) )
  {
    v17 = a2;
    v18 = *(_QWORD *)(*((_QWORD *)this + 161) + 48LL);
    *(_OWORD *)v20 = *(_OWORD *)*((_QWORD *)this + 159);
    v19 = v20;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v5,
      (unsigned int)&unk_180195CB4,
      v4,
      v5,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
  v6 = eKeywordDetectorConnector;
  if ( a2 != eKeywordDetectorConnector )
    v6 = eHostProcessConnector;
  HasHardwareAudioEngine = CEndpointCharacteristics::HasHardwareAudioEngine(*((CEndpointCharacteristics **)this + 161));
  pv = 0LL;
  v20[0] = (struct tWAVEFORMATEX *)&pv;
  v20[1] = 0LL;
  v21 = 1;
  LOBYTE(v8) = HasHardwareAudioEngine != 0;
  DeviceFormat = EffectPack::GetDeviceFormat((CEndpointCharacteristics **)this, 0LL, v8, v6, &v20[1]);
  if ( v21 )
  {
    v10 = *(void **)v20[0];
    *(_QWORD *)v20[0] = v20[1];
    if ( v10 )
      CoTaskMemFree(v10);
  }
  if ( DeviceFormat < 0 )
  {
    v14 = (unsigned int)DeviceFormat;
    v15 = 8808LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v14);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    return (unsigned int)DeviceFormat;
  }
  v11 = EffectPack::SetDeviceFormatAndSpatialSettings(this, v6, (const struct tWAVEFORMATEX *)pv, 0LL, 0);
  DeviceFormat = v11;
  if ( v11 < 0 )
  {
    v14 = (unsigned int)v11;
    v15 = 8810LL;
    goto LABEL_16;
  }
  v12 = pv;
  pv = 0LL;
  if ( v12 )
    CoTaskMemFree(v12);
  return 0LL;
}
