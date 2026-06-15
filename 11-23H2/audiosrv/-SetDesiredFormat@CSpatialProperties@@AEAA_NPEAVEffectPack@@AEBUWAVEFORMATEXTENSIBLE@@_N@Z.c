/*
 * XREFs of ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAVEffectPack@@AEBUWAVEFORMATEXTENSIBLE@@_N@Z @ 0x180153DAC
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x18002C994 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x1800601F4 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U4@U3@U3@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@65564@Z @ 0x1801519B0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVa.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@6@Z @ 0x180153040 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_t_ea_180153040.c)
 */

bool __fastcall CSpatialProperties::SetDesiredFormat(
        CSpatialProperties *this,
        struct EffectPack *a2,
        struct WAVEFORMATEXTENSIBLE *a3,
        bool a4)
{
  int v8; // r13d
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // xmm0
  __int64 v12; // rax
  int v13; // r14d
  int v14; // ebx
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  _DWORD *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int128 *v21; // rax
  __int128 v22; // xmm0
  __int64 v23; // rax
  WORD wValidBitsPerSample; // [rsp+70h] [rbp-49h] BYREF
  WORD wBitsPerSample; // [rsp+72h] [rbp-47h] BYREF
  WORD nChannels; // [rsp+74h] [rbp-45h] BYREF
  DWORD nSamplesPerSec; // [rsp+78h] [rbp-41h] BYREF
  DWORD dwChannelMask; // [rsp+7Ch] [rbp-3Dh] BYREF
  DWORD nAvgBytesPerSec; // [rsp+80h] [rbp-39h] BYREF
  __int64 p_SubFormat; // [rsp+88h] [rbp-31h] BYREF
  const WCHAR *v32; // [rsp+90h] [rbp-29h] BYREF
  const WCHAR *v33; // [rsp+98h] [rbp-21h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-19h] BYREF
  struct WAVEFORMATEXTENSIBLE v35; // [rsp+B0h] [rbp-9h] BYREF

  v8 = 1;
  if ( **((_DWORD **)this + 6) > 4u && tlgKeywordOn(*((_QWORD *)this + 6), 16LL) )
  {
    p_SubFormat = (__int64)&a3->SubFormat;
    nAvgBytesPerSec = a3->Format.nAvgBytesPerSec;
    wValidBitsPerSample = a3->Samples.wValidBitsPerSample;
    wBitsPerSample = a3->Format.wBitsPerSample;
    nSamplesPerSec = a3->Format.nSamplesPerSec;
    dwChannelMask = a3->dwChannelMask;
    nChannels = a3->Format.nChannels;
    v11 = *(_OWORD *)*((_QWORD *)a2 + 159);
    v32 = (const WCHAR *)&v34;
    v12 = *((_QWORD *)this + 5);
    v34 = v11;
    v33 = *(const WCHAR **)(v12 + 48);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v10,
      byte_1801968D8,
      v9,
      v10,
      &v33,
      (__int64 *)&v32,
      (__int64)&nChannels,
      (__int64)&dwChannelMask,
      (__int64)&nSamplesPerSec,
      (__int64)&wBitsPerSample,
      (__int64)&wValidBitsPerSample,
      (__int64)&nAvgBytesPerSec,
      &p_SubFormat);
  }
  v13 = EffectPack::SetDeviceFormatAndSpatialSettings(
          a2,
          eHostProcessConnector,
          a3,
          (const struct SpatialAudioSettings *)(((unsigned __int64)this + 124) & -(__int64)a4),
          0);
  v14 = v13;
  if ( v13 < 0 && a3->dwChannelMask == 1599 )
  {
    v15 = *(_OWORD *)&a3->Format.cbSize;
    *(_OWORD *)&v35.Format.wFormatTag = *(_OWORD *)&a3->Format.wFormatTag;
    v16 = *(_QWORD *)a3->SubFormat.Data4;
    *(_OWORD *)&v35.Format.cbSize = v15;
    *(_QWORD *)v35.SubFormat.Data4 = v16;
    v35.dwChannelMask = 255;
    v8 = EffectPack::SetDeviceFormatAndSpatialSettings(
           a2,
           eHostProcessConnector,
           &v35,
           (const struct SpatialAudioSettings *)(((unsigned __int64)this + 124) & -(__int64)a4),
           a4);
    v14 = v8;
  }
  v17 = (_DWORD *)*((_QWORD *)this + 6);
  if ( *v17 > 4u && tlgKeywordOn((__int64)v17, 0x400000000010LL) )
  {
    v21 = (__int128 *)*((_QWORD *)a2 + 159);
    dwChannelMask = v8;
    nSamplesPerSec = v13;
    v22 = *v21;
    v33 = (const WCHAR *)&v34;
    v23 = *((_QWORD *)this + 5);
    v34 = v22;
    v32 = *(const WCHAR **)(v23 + 48);
    p_SubFormat = 2048LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v18,
      byte_180196856,
      v19,
      v20,
      (__int64)&p_SubFormat,
      &v32,
      (__int64 *)&v33,
      (__int64)&nSamplesPerSec,
      (__int64)&dwChannelMask);
  }
  return v14 >= 0;
}
