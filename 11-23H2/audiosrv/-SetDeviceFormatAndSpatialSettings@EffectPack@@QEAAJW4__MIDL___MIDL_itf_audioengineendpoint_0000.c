/*
 * XREFs of ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x1800601F4
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x18002C994 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 *     ?RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800600D0 (-RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     ?SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180116BA0 (-SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z.c)
 *     ?RefreshConnectorFormats@EffectPack@@QEAAJXZ @ 0x18014E6C8 (-RefreshConnectorFormats@EffectPack@@QEAAJXZ.c)
 *     ?ResetDeviceFormat@EffectPack@@QEAAJXZ @ 0x18014EF1C (-ResetDeviceFormat@EffectPack@@QEAAJXZ.c)
 *     ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAVEffectPack@@AEBUWAVEFORMATEXTENSIBLE@@_N@Z @ 0x180153DAC (-SetDesiredFormat@CSpatialProperties@@AEAA_NPEAVEffectPack@@AEBUWAVEFORMATEXTENSIBLE@@_N@Z.c)
 * Callees:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180017F10 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18002EC58 (-GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18004B3A4 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@_N@Z @ 0x1800605C8 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings.c)
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180060688 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x180060AD4 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PE.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     wil::details::lambda_call__lambda_cc8545399a300f832261433c2fbaac5d___::_lambda_call__lambda_cc8545399a300f832261433c2fbaac5d___ @ 0x180074198 (wil--details--lambda_call__lambda_cc8545399a300f832261433c2fbaac5d___--_lambda_call__lambda_cc85.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180149330 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlgWrapper.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x1801496DC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVa.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@U1@U4@U?$_tlgWrapperByVal@$03@@U5@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@36AEBU?$_tlgWrapperByVal@$03@@75@Z @ 0x1801497A8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByRef@$0BA@@@U-$_t_ea_1801497A8.c)
 *     wil::details::lambda_call__lambda_842938c96e8d505d80aca0d1b991fd0a___::_lambda_call__lambda_842938c96e8d505d80aca0d1b991fd0a___ @ 0x18014A604 (wil--details--lambda_call__lambda_842938c96e8d505d80aca0d1b991fd0a___--_lambda_call__lambda_8429.c)
 *     ?GetAudioFormatForSpatialFormat@EffectPack@@AEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@1PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18014C068 (-GetAudioFormatForSpatialFormat@EffectPack@@AEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@1P.c)
 *     ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014F5CC (-SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall EffectPack::SetDeviceFormatAndSpatialSettings(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct WAVEFORMATEXTENSIBLE *a3,
        const struct SpatialAudioSettings *a4,
        bool a5)
{
  int *v5; // r14
  struct WAVEFORMATEXTENSIBLE *v6; // rbx
  _DWORD *v9; // rcx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  struct _RTL_CRITICAL_SECTION *v13; // rsi
  int DeviceFormatAndSpatialSettings; // r15d
  void *v15; // rcx
  void *v16; // rcx
  int v17; // eax
  int SpatialFormatForAudioFormat; // eax
  int v19; // eax
  unsigned int v20; // ebx
  void *v21; // rcx
  struct tWAVEFORMATEX *v22; // rcx
  int v24; // r8d
  int v25; // r9d
  _DWORD *v26; // r9
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  bool v33; // [rsp+70h] [rbp-90h] BYREF
  char v34; // [rsp+71h] [rbp-8Fh] BYREF
  _WORD v35[3]; // [rsp+72h] [rbp-8Eh] BYREF
  struct tWAVEFORMATEX *v36; // [rsp+78h] [rbp-88h] BYREF
  LPVOID pv; // [rsp+80h] [rbp-80h] BYREF
  PROPVARIANT *p_DebugInfo; // [rsp+88h] [rbp-78h] BYREF
  WORD v39[2]; // [rsp+90h] [rbp-70h] BYREF
  DWORD nAvgBytesPerSec; // [rsp+94h] [rbp-6Ch] BYREF
  DWORD nSamplesPerSec; // [rsp+98h] [rbp-68h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+A0h] [rbp-60h] BYREF
  LPVOID *p_pv; // [rsp+A8h] [rbp-58h] BYREF
  struct SpatialAudioSettings *v44; // [rsp+B0h] [rbp-50h] BYREF
  char v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+C0h] [rbp-40h] BYREF
  const wchar_t *v47; // [rsp+C8h] [rbp-38h] BYREF
  PROPVARIANT *v48; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v49[2]; // [rsp+D8h] [rbp-28h] BYREF
  char v50; // [rsp+F8h] [rbp-8h]
  PROPVARIANT pvar[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v52; // [rsp+110h] [rbp+10h]
  struct WAVEFORMATEXTENSIBLE v53; // [rsp+120h] [rbp+20h] BYREF
  int v54[20]; // [rsp+150h] [rbp+50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v5 = (int *)a4;
  v6 = a3;
  if ( a3 )
  {
    if ( a4 )
    {
      if ( a3->Format.wFormatTag == 0xFFFE )
      {
        *(GUID *)pvar = a3->SubFormat;
      }
      else
      {
        *(GUID *)pvar = GUID_00000000_0000_0010_8000_00aa00389b71;
        LODWORD(pvar[0]) = a3->Format.wFormatTag;
      }
      if ( **((_DWORD **)this + 219) > 4u && tlgKeywordOn(*((_QWORD *)this + 219), 16LL) )
      {
        v48 = pvar;
        nAvgBytesPerSec = v6->Format.nAvgBytesPerSec;
        nSamplesPerSec = v6->Format.nSamplesPerSec;
        v39[0] = v6->Format.nChannels;
        v47 = L"WFEX";
        v35[0] = *((_WORD *)v5 + 34);
        p_pv = (LPVOID *)(v5 + 3);
        v34 = *(_BYTE *)v5;
        p_DebugInfo = *(PROPVARIANT **)(*((_QWORD *)this + 161) + 48LL);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v25,
          (unsigned int)&unk_180195DE2,
          v24,
          v25,
          (__int64)&p_DebugInfo,
          (__int64)&v34,
          (__int64)&p_pv,
          (__int64)v35,
          (__int64)&v47,
          (__int64)v39,
          (__int64)&nSamplesPerSec,
          (__int64)&nAvgBytesPerSec,
          (__int64)&v48);
      }
    }
    else
    {
      if ( a3->Format.wFormatTag == 0xFFFE )
      {
        *(GUID *)pvar = a3->SubFormat;
      }
      else
      {
        *(GUID *)pvar = GUID_00000000_0000_0010_8000_00aa00389b71;
        LODWORD(pvar[0]) = a3->Format.wFormatTag;
      }
      v9 = (_DWORD *)*((_QWORD *)this + 219);
      if ( *v9 > 4u && tlgKeywordOn((__int64)v9, 16LL) )
      {
        p_DebugInfo = pvar;
        nSamplesPerSec = v6->Format.nAvgBytesPerSec;
        nAvgBytesPerSec = v6->Format.nSamplesPerSec;
        v35[0] = v6->Format.nChannels;
        p_pv = (LPVOID *)L"WFEX";
        v47 = *(const wchar_t **)(*((_QWORD *)this + 161) + 48LL);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v10,
          (unsigned int)&unk_180195C38,
          v11,
          v12,
          (__int64)&v47,
          (__int64)&p_pv,
          (__int64)v35,
          (__int64)&nAvgBytesPerSec,
          (__int64)&nSamplesPerSec,
          (__int64)&p_DebugInfo);
      }
    }
  }
  else
  {
    v26 = (_DWORD *)*((_QWORD *)this + 219);
    if ( v5 )
    {
      if ( *v26 > 4u && tlgKeywordOn(*((_QWORD *)this + 219), 16LL) )
      {
        v35[0] = *((_WORD *)v5 + 34);
        p_DebugInfo = (PROPVARIANT *)(v5 + 3);
        v34 = *(_BYTE *)v5;
        p_pv = *(LPVOID **)(*((_QWORD *)this + 161) + 48LL);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>>(
          v28,
          (unsigned int)&unk_180195D7F,
          v27,
          v28,
          (__int64)&p_pv,
          (__int64)&v34,
          (__int64)&p_DebugInfo,
          (__int64)v35);
      }
    }
    else if ( *v26 > 4u && tlgKeywordOn(*((_QWORD *)this + 219), 16LL) )
    {
      p_DebugInfo = *(PROPVARIANT **)(*((_QWORD *)this + 161) + 48LL);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v29,
        byte_180195BF7,
        v30,
        v31,
        (const WCHAR **)&p_DebugInfo);
    }
  }
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *, _QWORD))(*(_QWORD *)g_policyConfigInternal + 24LL))(
    g_policyConfigInternal,
    &lpCriticalSection,
    *(_QWORD *)(*((_QWORD *)this + 161) + 48LL));
  v13 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 161) + 0x2000LL);
  EnterCriticalSection(v13);
  p_DebugInfo = (PROPVARIANT *)&v13->DebugInfo;
  v36 = 0LL;
  pv = 0LL;
  p_pv = &pv;
  v44 = 0LL;
  v45 = 1;
  pvar[0] = &v36;
  pvar[1] = 0LL;
  LOBYTE(v52) = 1;
  DeviceFormatAndSpatialSettings = EffectPack::GetDeviceFormatAndSpatialSettings(
                                     (CEndpointCharacteristics **)this,
                                     0,
                                     0LL,
                                     (struct tWAVEFORMATEX **)&pvar[1],
                                     &v44,
                                     0LL,
                                     0LL);
  if ( (_BYTE)v52 )
  {
    v15 = *(void **)pvar[0];
    *(_QWORD *)pvar[0] = pvar[1];
    if ( v15 )
      CoTaskMemFree(v15);
  }
  if ( v45 )
  {
    v16 = *p_pv;
    *p_pv = v44;
    if ( v16 )
      CoTaskMemFree(v16);
  }
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21EA,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DeviceFormatAndSpatialSettings);
LABEL_56:
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v36);
    if ( v13 )
      LeaveCriticalSection(v13);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return (unsigned int)DeviceFormatAndSpatialSettings;
  }
  *(_OWORD *)pvar = 0LL;
  *(_QWORD *)&v52 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 161) + 72LL) + 40LL))(
         *(_QWORD *)(*((_QWORD *)this + 161) + 72LL),
         &PKEY_Endpoint_HWAudioEngine_Present,
         pvar) < 0
    || LOWORD(pvar[0]) != 11
    || (v17 = 1, !LOWORD(pvar[1])) )
  {
    v17 = 0;
  }
  v46 = v17;
  PropVariantClear(pvar);
  pvar[0] = this;
  pvar[1] = &pv;
  *(_QWORD *)&v52 = &v36;
  *((_QWORD *)&v52 + 1) = &v46;
  v49[0] = *(_OWORD *)pvar;
  v49[1] = v52;
  v50 = 1;
  p_pv = (LPVOID *)this;
  LOBYTE(v44) = 1;
  CEndpointCharacteristics::ClearMixFormatCache(*((_QWORD *)this + 161), 0);
  memset(&v53, 0, sizeof(v53));
  memset_0(v54, 0, 0x48uLL);
  v33 = 0;
  if ( !v5 )
  {
    if ( !v6 )
      goto LABEL_24;
    SpatialFormatForAudioFormat = CSpatialProperties::GetSpatialFormatForAudioFormat(
                                    (CSpatialProperties *)(*((_QWORD *)this + 161) + 416LL),
                                    this,
                                    *(_DWORD *)(*((_QWORD *)this + 161) + 212LL) != 0,
                                    &v6->Format,
                                    (struct SpatialAudioSettings *)v54);
    if ( SpatialFormatForAudioFormat < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BD6,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)SpatialFormatForAudioFormat);
    else
      v5 = v54;
    goto LABEL_22;
  }
  DeviceFormatAndSpatialSettings = EffectPack::GetAudioFormatForSpatialFormat(
                                     this,
                                     (const struct SpatialAudioSettings *)v5,
                                     v36,
                                     &v6->Format,
                                     &v53,
                                     &v33);
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v32 = 8730LL;
LABEL_55:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DeviceFormatAndSpatialSettings);
    wil::details::lambda_call__lambda_842938c96e8d505d80aca0d1b991fd0a___::_lambda_call__lambda_842938c96e8d505d80aca0d1b991fd0a___(&p_pv);
    wil::details::lambda_call__lambda_cc8545399a300f832261433c2fbaac5d___::_lambda_call__lambda_cc8545399a300f832261433c2fbaac5d___(v49);
    goto LABEL_56;
  }
  if ( v33 )
    v6 = &v53;
  if ( v6 )
  {
LABEL_22:
    if ( v46 )
    {
      DeviceFormatAndSpatialSettings = CEndpointCharacteristics::SetDeviceFormatHwAudioEngine(
                                         *((CEndpointCharacteristics **)this + 161),
                                         &v6->Format);
      if ( DeviceFormatAndSpatialSettings < 0 )
      {
        v32 = 8748LL;
        goto LABEL_55;
      }
    }
    (*(void (__fastcall **)(__int64, _QWORD, struct WAVEFORMATEXTENSIBLE *))(*(_QWORD *)g_policyConfigInternal + 40LL))(
      g_policyConfigInternal,
      *(_QWORD *)(*((_QWORD *)this + 161) + 48LL),
      v6);
  }
LABEL_24:
  DeviceFormatAndSpatialSettings = EffectPack::SetDeviceFormatSwAudioEngine(this, a2, &v6->Format);
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v32 = 8756LL;
    goto LABEL_55;
  }
  if ( !v5 )
    goto LABEL_28;
  if ( !v6 )
  {
    if ( v33 )
      goto LABEL_28;
    v6 = (struct WAVEFORMATEXTENSIBLE *)v36;
  }
  v19 = CEndpointCharacteristics::SetSpatialAudioSettings(
          *((CEndpointCharacteristics **)this + 161),
          this,
          (const struct SpatialAudioSettings *)v5,
          &v6->Format,
          a5);
  v20 = v19;
  if ( v19 >= 0 )
  {
LABEL_28:
    v50 = 0;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 32LL))(
      g_policyConfigInternal,
      *(_QWORD *)(*((_QWORD *)this + 161) + 48LL));
    wil::details::lambda_call__lambda_cc8545399a300f832261433c2fbaac5d___::_lambda_call__lambda_cc8545399a300f832261433c2fbaac5d___(v49);
    v21 = pv;
    pv = 0LL;
    if ( v21 )
      CoTaskMemFree(v21);
    v22 = v36;
    v36 = 0LL;
    if ( v22 )
      CoTaskMemFree(v22);
    if ( v13 )
      LeaveCriticalSection(v13);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2243,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v19);
  wil::details::lambda_call__lambda_842938c96e8d505d80aca0d1b991fd0a___::_lambda_call__lambda_842938c96e8d505d80aca0d1b991fd0a___(&p_pv);
  wil::details::lambda_call__lambda_cc8545399a300f832261433c2fbaac5d___::_lambda_call__lambda_cc8545399a300f832261433c2fbaac5d___(v49);
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v36);
  if ( v13 )
    LeaveCriticalSection(v13);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v20;
}
