/*
 * XREFs of ?SetDesiredFormat@CSpatialProperties@@AEAA_NAEBUWAVEFORMATEXTENSIBLE@@_N@Z @ 0x18013F2F8
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x180051B74 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlob.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x180069AB0 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U2@U2@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5445AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x18013C828 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U2@U2@U3@U-$_tlgW.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x18013D3E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 */

bool __fastcall CSpatialProperties::SetDesiredFormat(
        CSpatialProperties *this,
        struct WAVEFORMATEXTENSIBLE *a2,
        char a3,
        __int64 a4)
{
  __int64 v6; // r8
  int v8; // r15d
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r14d
  int v12; // ebx
  CEndpointCharacteristics *v13; // rcx
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  __int64 v16; // rcx
  __int64 v17; // rax
  WORD wValidBitsPerSample; // [rsp+60h] [rbp-39h] BYREF
  WORD wBitsPerSample; // [rsp+62h] [rbp-37h] BYREF
  WORD nChannels; // [rsp+64h] [rbp-35h] BYREF
  DWORD nSamplesPerSec; // [rsp+68h] [rbp-31h] BYREF
  DWORD dwChannelMask; // [rsp+6Ch] [rbp-2Dh] BYREF
  DWORD nAvgBytesPerSec; // [rsp+70h] [rbp-29h] BYREF
  __int64 p_SubFormat; // [rsp+78h] [rbp-21h] BYREF
  void *v26; // [rsp+80h] [rbp-19h] BYREF
  struct WAVEFORMATEXTENSIBLE v27; // [rsp+88h] [rbp-11h] BYREF

  v6 = *((_QWORD *)this + 6);
  v8 = 1;
  if ( *(_DWORD *)v6 > 4u
    && (*(_BYTE *)(v6 + 16) & 0x10) != 0
    && (*(_QWORD *)(v6 + 24) & 0x10LL) == *(_QWORD *)(v6 + 24) )
  {
    p_SubFormat = (__int64)&a2->SubFormat;
    nAvgBytesPerSec = a2->Format.nAvgBytesPerSec;
    wValidBitsPerSample = a2->Samples.wValidBitsPerSample;
    wBitsPerSample = a2->Format.wBitsPerSample;
    nSamplesPerSec = a2->Format.nSamplesPerSec;
    dwChannelMask = a2->dwChannelMask;
    nChannels = a2->Format.nChannels;
    v26 = *(void **)(*((_QWORD *)this + 5) + 24LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v6,
      byte_18018C504,
      v6,
      a4,
      &v26,
      (__int64)&nChannels,
      (__int64)&dwChannelMask,
      (__int64)&nSamplesPerSec,
      (__int64)&wBitsPerSample,
      (__int64)&wValidBitsPerSample,
      (__int64)&nAvgBytesPerSec,
      &p_SubFormat);
  }
  v11 = CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(
          *((CEndpointCharacteristics **)this + 5),
          eHostProcessConnector,
          a2,
          (const struct SpatialAudioSettings *)(((unsigned __int64)this + 124) & -(__int64)(a3 != 0)),
          0);
  v12 = v11;
  if ( v11 < 0 && a2->dwChannelMask == 1599 )
  {
    v13 = (CEndpointCharacteristics *)*((_QWORD *)this + 5);
    v14 = *(_OWORD *)&a2->Format.cbSize;
    *(_OWORD *)&v27.Format.wFormatTag = *(_OWORD *)&a2->Format.wFormatTag;
    v15 = *(_QWORD *)a2->SubFormat.Data4;
    *(_OWORD *)&v27.Format.cbSize = v14;
    v27.dwChannelMask = 255;
    *(_QWORD *)v27.SubFormat.Data4 = v15;
    v8 = CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(
           v13,
           eHostProcessConnector,
           &v27,
           (const struct SpatialAudioSettings *)(((unsigned __int64)this + 124) & -(__int64)(a3 != 0)),
           0);
    v12 = v8;
  }
  v16 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)v16 > 4u
    && (*(_QWORD *)(v16 + 16) & 0x400000000010LL) != 0
    && (*(_QWORD *)(v16 + 24) & 0x400000000010LL) == *(_QWORD *)(v16 + 24) )
  {
    v17 = *((_QWORD *)this + 5);
    dwChannelMask = v8;
    nSamplesPerSec = v11;
    v26 = *(void **)(v17 + 24);
    p_SubFormat = 2048LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v16,
      byte_18018C5A8,
      v9,
      v10,
      (__int64)&p_SubFormat,
      &v26,
      (__int64)&nSamplesPerSec,
      (__int64)&dwChannelMask);
  }
  return v12 >= 0;
}
