/*
 * XREFs of ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x180069AB0
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x180051B74 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlob.c)
 *     ?SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x1800EA610 (-SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z.c)
 *     ?SetDesiredFormat@CSpatialProperties@@AEAA_NAEBUWAVEFORMATEXTENSIBLE@@_N@Z @ 0x18013F2F8 (-SetDesiredFormat@CSpatialProperties@@AEAA_NAEBUWAVEFORMATEXTENSIBLE@@_N@Z.c)
 *     ?RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ @ 0x18014BAA4 (-RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014BDD4 (-RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18014C020 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUtWAVEFORMATEX@@@Z @ 0x18000E630 (-reset@-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18003EB14 (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _lambda_4434e4183b7615ee6f5c6d72834eba6f_::operator() @ 0x1800685CC (_lambda_4434e4183b7615ee6f5c6d72834eba6f_--operator().c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@_N@Z @ 0x18006A144 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800C16D0 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C2254 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??$invoke@P6AJPEAUtagPROPVARIANT@@@ZPEAV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@wistd@@YAJ$$QEAP6AJPEAUtagPROPVARIANT@@@Z$$QEAPEAV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@Z @ 0x1800C67A0 (--$invoke@P6AJPEAUtagPROPVARIANT@@@ZPEAV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-PropVari.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800CB95C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?reset@?$unique_ptr@USpatialAudioSettings@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUSpatialAudioSettings@@@Z @ 0x1800EB228 (-reset@-$unique_ptr@USpatialAudioSettings@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180143078 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlgWrapper.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x18014333C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVa.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@U1@U4@U?$_tlgWrapperByVal@$03@@U5@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@36AEBU?$_tlgWrapperByVal@$03@@75@Z @ 0x180143408 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByRef@$0BA@@@U-$_t_ea_180143408.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x1801458AC (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@1PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x1801479E0 (-GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWA.c)
 *     ?GetSpatialFormatForAudioFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x180149A6C (-GetSpatialFormatForAudioFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@PEAUSpatialAud.c)
 *     ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014C2C8 (-SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014C490 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct WAVEFORMATEXTENSIBLE *a3,
        const struct SpatialAudioSettings *a4,
        bool a5)
{
  const struct SpatialAudioSettings *v5; // r14
  struct WAVEFORMATEXTENSIBLE *v6; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12; // r15
  int DeviceFormatAndSpatialSettings; // edi
  int v14; // eax
  int AudioFormatForSpatialFormat; // eax
  __int64 v16; // rdx
  int v18; // [rsp+20h] [rbp-E0h]
  bool v19; // [rsp+70h] [rbp-90h] BYREF
  char v20; // [rsp+71h] [rbp-8Fh] BYREF
  _WORD v21[3]; // [rsp+72h] [rbp-8Eh] BYREF
  struct tWAVEFORMATEX **v22; // [rsp+78h] [rbp-88h] BYREF
  WORD v23[2]; // [rsp+80h] [rbp-80h] BYREF
  DWORD nAvgBytesPerSec; // [rsp+84h] [rbp-7Ch] BYREF
  DWORD nSamplesPerSec; // [rsp+88h] [rbp-78h] BYREF
  HRESULT (__stdcall *v26)(PROPVARIANT *); // [rsp+90h] [rbp-70h] BYREF
  int v27; // [rsp+98h] [rbp-68h] BYREF
  struct tWAVEFORMATEX *v28; // [rsp+A0h] [rbp-60h] BYREF
  const wchar_t *v29; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-50h] BYREF
  struct SpatialAudioSettings *v31[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v32; // [rsp+C8h] [rbp-38h]
  struct tWAVEFORMATEX **v33; // [rsp+D8h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v35[2]; // [rsp+E8h] [rbp-18h] BYREF
  char v36; // [rsp+108h] [rbp+8h]
  struct tWAVEFORMATEX *v37[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v38; // [rsp+120h] [rbp+20h]
  struct WAVEFORMATEXTENSIBLE v39; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v40[80]; // [rsp+150h] [rbp+50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v5 = a4;
  v6 = a3;
  if ( a3 )
  {
    if ( a4 )
    {
      if ( a3->Format.wFormatTag == 0xFFFE )
      {
        *(GUID *)v37 = a3->SubFormat;
      }
      else
      {
        *(GUID *)v37 = GUID_00000000_0000_0010_8000_00aa00389b71;
        LODWORD(v37[0]) = a3->Format.wFormatTag;
      }
      v9 = *((_QWORD *)this + 1223);
      if ( *(_DWORD *)v9 > 4u
        && (*(_BYTE *)(v9 + 16) & 0x10) != 0
        && (*(_QWORD *)(v9 + 24) & 0x10LL) == *(_QWORD *)(v9 + 24) )
      {
        v33 = v37;
        nAvgBytesPerSec = a3->Format.nAvgBytesPerSec;
        nSamplesPerSec = a3->Format.nSamplesPerSec;
        v23[0] = a3->Format.nChannels;
        v29 = L"WFEX";
        v21[0] = *((_WORD *)a4 + 34);
        v26 = (HRESULT (__stdcall *)(PROPVARIANT *))((char *)a4 + 12);
        v20 = *(_BYTE *)a4;
        v22 = (struct tWAVEFORMATEX **)*((_QWORD *)this + 3);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v9,
          (unsigned int)&unk_18018ED37,
          (_DWORD)a3,
          (_DWORD)a4,
          (__int64)&v22,
          (__int64)&v20,
          (__int64)&v26,
          (__int64)v21,
          (__int64)&v29,
          (__int64)v23,
          (__int64)&nSamplesPerSec,
          (__int64)&nAvgBytesPerSec,
          (__int64)&v33);
      }
    }
    else
    {
      if ( a3->Format.wFormatTag == 0xFFFE )
      {
        *(GUID *)v37 = a3->SubFormat;
      }
      else
      {
        *(GUID *)v37 = GUID_00000000_0000_0010_8000_00aa00389b71;
        LODWORD(v37[0]) = a3->Format.wFormatTag;
      }
      v10 = *((_QWORD *)this + 1223);
      if ( *(_DWORD *)v10 > 4u
        && (*(_BYTE *)(v10 + 16) & 0x10) != 0
        && (*(_QWORD *)(v10 + 24) & 0x10LL) == *(_QWORD *)(v10 + 24) )
      {
        v22 = v37;
        nSamplesPerSec = a3->Format.nAvgBytesPerSec;
        nAvgBytesPerSec = a3->Format.nSamplesPerSec;
        v21[0] = a3->Format.nChannels;
        v26 = (HRESULT (__stdcall *)(PROPVARIANT *))L"WFEX";
        v29 = (const wchar_t *)*((_QWORD *)this + 3);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v10,
          (unsigned int)&unk_18018EC7A,
          (_DWORD)a3,
          0,
          (__int64)&v29,
          (__int64)&v26,
          (__int64)v21,
          (__int64)&nAvgBytesPerSec,
          (__int64)&nSamplesPerSec,
          (__int64)&v22);
      }
    }
  }
  else
  {
    v11 = *((_QWORD *)this + 1223);
    if ( a4 )
    {
      if ( *(_DWORD *)v11 > 4u
        && (*(_BYTE *)(v11 + 16) & 0x10) != 0
        && (*(_QWORD *)(v11 + 24) & 0x10LL) == *(_QWORD *)(v11 + 24) )
      {
        v21[0] = *((_WORD *)a4 + 34);
        v22 = (struct tWAVEFORMATEX **)((char *)a4 + 12);
        v20 = *(_BYTE *)a4;
        v26 = (HRESULT (__stdcall *)(PROPVARIANT *))*((_QWORD *)this + 3);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>>(
          v11,
          (unsigned int)&unk_18018EDDC,
          0,
          (_DWORD)a4,
          (__int64)&v26,
          (__int64)&v20,
          (__int64)&v22,
          (__int64)v21);
      }
    }
    else if ( *(_DWORD *)v11 > 4u
           && (*(_BYTE *)(v11 + 16) & 0x10) != 0
           && (*(_QWORD *)(v11 + 24) & 0x10LL) == *(_QWORD *)(v11 + 24) )
    {
      v22 = (struct tWAVEFORMATEX **)*((_QWORD *)this + 3);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v11,
        (unsigned int)&unk_18018ECF6,
        0,
        0,
        (__int64)&v22);
    }
  }
  wil::critical_section::lock((char *)this + 9680, &v29);
  v28 = 0LL;
  v30 = 0LL;
  v31[0] = (struct SpatialAudioSettings *)&v30;
  v31[1] = 0LL;
  v12 = 1;
  LOBYTE(v32) = 1;
  v37[0] = (struct tWAVEFORMATEX *)&v28;
  v37[1] = 0LL;
  LOBYTE(v38) = 1;
  DeviceFormatAndSpatialSettings = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                                     this,
                                     0,
                                     0,
                                     (LPVOID *)&v37[1],
                                     &v31[1],
                                     0LL,
                                     0LL);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(v37);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(v31);
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x200C,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DeviceFormatAndSpatialSettings,
      v18);
    goto LABEL_57;
  }
  *(_OWORD *)v37 = 0LL;
  v38 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, void *, struct tWAVEFORMATEX **))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         &PKEY_Endpoint_HWAudioEngine_Present,
         v37) < 0
    || LOWORD(v37[0]) != 11
    || (v14 = 1, !LOWORD(v37[1])) )
  {
    v14 = 0;
  }
  v27 = v14;
  v22 = v37;
  v26 = PropVariantClear;
  wistd::invoke<long (*)(tagPROPVARIANT *),wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)> *>(
    &v26,
    &v22);
  v31[0] = this;
  v31[1] = (struct SpatialAudioSettings *)&v30;
  *(_QWORD *)&v32 = &v28;
  *((_QWORD *)&v32 + 1) = &v27;
  v35[0] = *(_OWORD *)v31;
  v35[1] = v32;
  v36 = 1;
  (*(void (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION **, _QWORD))(*(_QWORD *)g_policyConfigInternal + 24LL))(
    g_policyConfigInternal,
    &v34,
    *((_QWORD *)this + 3));
  v37[0] = (struct tWAVEFORMATEX *)this;
  LOBYTE(v37[1]) = 1;
  CEndpointCharacteristics::ClearMixFormatCache(this, 0LL);
  memset(&v39, 0, sizeof(v39));
  memset_0(v40, 0, 0x48uLL);
  v19 = 0;
  if ( !v5 )
  {
    if ( !v6 )
      goto LABEL_45;
    if ( CEndpointCharacteristics::GetSpatialFormatForAudioFormat(this, &v6->Format, (struct SpatialAudioSettings *)v40) >= 0 )
      v5 = (const struct SpatialAudioSettings *)v40;
    goto LABEL_38;
  }
  AudioFormatForSpatialFormat = CEndpointCharacteristics::GetAudioFormatForSpatialFormat(
                                  this,
                                  v5,
                                  v28,
                                  &v6->Format,
                                  &v39,
                                  &v19);
  DeviceFormatAndSpatialSettings = AudioFormatForSpatialFormat;
  if ( AudioFormatForSpatialFormat < 0 )
  {
    v16 = 8254LL;
LABEL_53:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)AudioFormatForSpatialFormat,
      v18);
    goto LABEL_55;
  }
  if ( v19 )
    v6 = &v39;
  if ( v6 )
  {
LABEL_38:
    if ( v27 )
    {
      AudioFormatForSpatialFormat = CEndpointCharacteristics::SetDeviceFormatHwAudioEngine(this, &v6->Format);
      DeviceFormatAndSpatialSettings = AudioFormatForSpatialFormat;
      if ( AudioFormatForSpatialFormat < 0 )
      {
        v16 = 8272LL;
        goto LABEL_53;
      }
    }
    (*(void (__fastcall **)(__int64, _QWORD, struct WAVEFORMATEXTENSIBLE *))(*(_QWORD *)g_policyConfigInternal + 40LL))(
      g_policyConfigInternal,
      *((_QWORD *)this + 3),
      v6);
  }
LABEL_45:
  AudioFormatForSpatialFormat = CEndpointCharacteristics::SetDeviceFormatSwAudioEngine(this, a2, &v6->Format);
  DeviceFormatAndSpatialSettings = AudioFormatForSpatialFormat;
  if ( AudioFormatForSpatialFormat < 0 )
  {
    v16 = 8280LL;
    goto LABEL_53;
  }
  if ( v5 )
  {
    if ( !v6 )
    {
      if ( v19 )
        goto LABEL_54;
      v6 = (struct WAVEFORMATEXTENSIBLE *)v28;
    }
    AudioFormatForSpatialFormat = CEndpointCharacteristics::SetSpatialAudioSettings(this, v5, &v6->Format, a5);
    DeviceFormatAndSpatialSettings = AudioFormatForSpatialFormat;
    if ( AudioFormatForSpatialFormat < 0 )
    {
      v16 = 8295LL;
      goto LABEL_53;
    }
  }
LABEL_54:
  v12 = 0;
  v36 = 0;
  DeviceFormatAndSpatialSettings = 0;
LABEL_55:
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 32LL))(
    g_policyConfigInternal,
    *((_QWORD *)this + 3));
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v34);
  if ( v12 )
  {
    v36 = 0;
    lambda_4434e4183b7615ee6f5c6d72834eba6f_::operator()(v35);
  }
LABEL_57:
  wistd::unique_ptr<SpatialAudioSettings,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v30,
    0LL);
  wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v28,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&v29);
  return (unsigned int)DeviceFormatAndSpatialSettings;
}
