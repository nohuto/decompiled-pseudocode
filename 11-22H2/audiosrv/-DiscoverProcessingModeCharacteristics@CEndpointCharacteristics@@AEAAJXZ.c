/*
 * XREFs of ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18001E154
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18002A104 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointReso.c)
 *     ?RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014E63C (-RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audi.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800057AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTempl.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x180005E18 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x18001E620 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x18001E80C (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ?Start@CQPCStopWatch@@QEAAHXZ @ 0x18001E8D0 (-Start@CQPCStopWatch@@QEAAHXZ.c)
 *     ?GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x18001E900 (-GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PE.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x18001F34C (-GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@PEAPEAUPacketSizeCons.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormats@@@Z @ 0x18002055C (-CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormat.c)
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x180020EAC (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18002C610 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180075970 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(CEndpointCharacteristics *this)
{
  int PacketSizeConstraints; // r15d
  struct KSMULTIPLE_ITEM *v3; // rbx
  struct KSMULTIPLE_ITEM *v4; // rdi
  __int64 OemEnginePeriodicity; // rdx
  struct PacketSizeConstraints *v6; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  int SupportedDataRangeForEndpoint; // eax
  ULONG Count; // [rsp+50h] [rbp-B0h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-ACh] BYREF
  __int64 pvData; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  struct KSMULTIPLE_ITEM *v15; // [rsp+68h] [rbp-98h] BYREF
  const WCHAR *v16; // [rsp+70h] [rbp-90h] BYREF
  __int64 TimeSec; // [rsp+78h] [rbp-88h] BYREF
  int v18; // [rsp+80h] [rbp-80h] BYREF
  struct KSMULTIPLE_ITEM *v19; // [rsp+88h] [rbp-78h] BYREF
  struct PacketSizeConstraints *v20; // [rsp+90h] [rbp-70h] BYREF
  __int64 v21; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER Frequency; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v24[57]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+194h] [rbp+94h]
  int v26; // [rsp+119Ch] [rbp+109Ch]
  GUID v27; // [rsp+11A0h] [rbp+10A0h]
  _DWORD v28[57]; // [rsp+11B0h] [rbp+10B0h] BYREF
  __int64 v29; // [rsp+1294h] [rbp+1194h]
  int v30; // [rsp+229Ch] [rbp+219Ch]
  GUID v31; // [rsp+22A0h] [rbp+21A0h]

  PacketSizeConstraints = 0;
  if ( (int)CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(this) < 0 )
  {
    v19 = 0LL;
    v3 = 0LL;
    v15 = 0LL;
    v20 = 0LL;
    Count = 0;
    v16 = 0LL;
    PerformanceCount.QuadPart = 0LL;
    v21 = 0LL;
    QueryPerformanceFrequency(&Frequency);
    CQPCStopWatch::Start((CQPCStopWatch *)&v21);
    GetSupportedDataRangeForEndpoint(eHostProcessConnector, *((struct IMMDevice **)this + 5), &v19);
    v4 = v19;
    PacketSizeConstraints = GetPacketSizeConstraints(g_DeviceEnumerator, *((struct IPropertyStore **)this + 9), &v20);
    if ( PacketSizeConstraints == -2147023728 )
      PacketSizeConstraints = 0;
    LODWORD(pvData) = 0;
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
      L"ProbeForMinimumPeriod",
      0x18u,
      0LL,
      &pvData,
      &pcbData);
    v18 = 0;
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
      L"MaxCapturePeriodicityInMs",
      0x18u,
      0LL,
      &v18,
      &pcbData);
    OemEnginePeriodicity = CEndpointCharacteristics::GetOemEnginePeriodicity(this);
    TimeSec = OemEnginePeriodicity;
    v6 = v20;
    if ( PacketSizeConstraints >= 0 && *((_DWORD *)this + 58) )
    {
      v24[0] = 3;
      v25 = 0LL;
      v26 = 0;
      v27 = GUID_00000000_0000_0000_0000_000000000000;
      SupportedDataRangeForEndpoint = GetSupportedDataRangeForEndpoint(
                                        eKeywordDetectorConnector,
                                        *((struct IMMDevice **)this + 5),
                                        &v15);
      v3 = v15;
      if ( SupportedDataRangeForEndpoint >= 0 )
      {
        Count = v15->Count;
        v16 = (const WCHAR *)&v15[1];
      }
      PacketSizeConstraints = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
                                this,
                                (__int64)v6,
                                (_DWORD)pvData != 0,
                                TimeSec,
                                (__int64)this + 264,
                                (char)v24);
      CEndpointCharacteristics::CacheUnsupportedConnectorFormats(this, (struct CUnsupportedConnectorFormats *)v24);
      OemEnginePeriodicity = TimeSec;
    }
    v28[0] = 0;
    v29 = 0LL;
    v30 = 0;
    v31 = GUID_00000000_0000_0000_0000_000000000000;
    if ( PacketSizeConstraints >= 0 )
    {
      PacketSizeConstraints = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
                                this,
                                (__int64)v6,
                                (_DWORD)pvData != 0,
                                OemEnginePeriodicity,
                                (__int64)this + 240,
                                (char)v28);
      if ( PacketSizeConstraints >= 0 && !*((_DWORD *)this + 59) )
        CEndpointCharacteristics::CacheProcessingModeCharacteristics(this);
    }
    CEndpointCharacteristics::CacheUnsupportedConnectorFormats(this, (struct CUnsupportedConnectorFormats *)v28);
    QueryPerformanceCounter(&PerformanceCount);
    pv = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5), &pv) >= 0
      && **((_DWORD **)this + 1036) > 4u
      && (unsigned __int8)tlgKeywordOn(*((_QWORD *)this + 1036), 0x200000000010LL) )
    {
      TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&v21);
      Count = PacketSizeConstraints;
      v16 = (const WCHAR *)pv;
      v15 = (struct KSMULTIPLE_ITEM *)2048;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v9,
        (int)&unk_1801961F1,
        v8,
        v9,
        (__int64)&v15,
        &v16,
        (__int64)&Count,
        (__int64)&TimeSec);
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    CoTaskMemFree(v6);
    CoTaskMemFree(v3);
    CoTaskMemFree(v4);
  }
  return (unsigned int)PacketSizeConstraints;
}
