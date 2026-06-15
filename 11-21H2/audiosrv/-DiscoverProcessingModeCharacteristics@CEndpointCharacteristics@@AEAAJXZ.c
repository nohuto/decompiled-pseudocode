/*
 * XREFs of ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1800470E0
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@@Z @ 0x180045CF8 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@@Z.c)
 *     ?RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014B9B8 (-RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audi.c)
 * Callees:
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x180047814 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18006A600 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180143A60 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTempl.c)
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1801453FC (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormats@@@Z @ 0x180145564 (-CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormat.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x180147248 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x180149214 (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x1801494AC (-GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z.c)
 *     ?GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x180149C68 (-GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PE.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x180149F78 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(CEndpointCharacteristics *this)
{
  int PacketSizeConstraints; // r15d
  struct KSMULTIPLE_ITEM *v4; // rbx
  BOOL v5; // eax
  LARGE_INTEGER v6; // rcx
  struct KSMULTIPLE_ITEM *v7; // rdi
  __int64 OemEnginePeriodicity; // rdx
  struct PacketSizeConstraints *v9; // rsi
  int SupportedDataRangeForEndpoint; // eax
  __int64 v11; // r8
  int v12; // r8d
  int v13; // r9d
  ULONG Count; // [rsp+50h] [rbp-B0h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-ACh] BYREF
  __int64 pvData; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  struct KSMULTIPLE_ITEM *v18; // [rsp+68h] [rbp-98h] BYREF
  struct KSMULTIPLE_ITEM *v19; // [rsp+70h] [rbp-90h] BYREF
  __int64 TimeSec; // [rsp+78h] [rbp-88h] BYREF
  int v21; // [rsp+80h] [rbp-80h] BYREF
  struct KSMULTIPLE_ITEM *v22; // [rsp+88h] [rbp-78h] BYREF
  struct PacketSizeConstraints *v23; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER v25; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER Frequency; // [rsp+A8h] [rbp-58h] BYREF
  char v27[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+194h] [rbp+94h]
  int v29; // [rsp+119Ch] [rbp+109Ch]
  GUID v30; // [rsp+11A0h] [rbp+10A0h]
  char v31[4]; // [rsp+11B0h] [rbp+10B0h] BYREF
  __int64 v32; // [rsp+1294h] [rbp+1194h]
  int v33; // [rsp+229Ch] [rbp+219Ch]
  GUID v34; // [rsp+22A0h] [rbp+21A0h]

  PacketSizeConstraints = 0;
  if ( (int)CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(this) < 0 )
  {
    v22 = 0LL;
    v4 = 0LL;
    v18 = 0LL;
    v23 = 0LL;
    Count = 0;
    v19 = 0LL;
    v25.QuadPart = 0LL;
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceFrequency(&Frequency);
    v5 = QueryPerformanceCounter(&PerformanceCount);
    v6 = v25;
    if ( v5 )
      v6 = PerformanceCount;
    v25 = v6;
    GetSupportedDataRangeForEndpoint(eHostProcessConnector, *((struct IMMDevice **)this + 2), &v22);
    v7 = v22;
    PacketSizeConstraints = GetPacketSizeConstraints(*((struct IPropertyStore **)this + 5), &v23);
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
    v21 = 0;
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
      L"MaxCapturePeriodicityInMs",
      0x18u,
      0LL,
      &v21,
      &pcbData);
    OemEnginePeriodicity = CEndpointCharacteristics::GetOemEnginePeriodicity(this);
    TimeSec = OemEnginePeriodicity;
    v9 = v23;
    if ( PacketSizeConstraints >= 0 && *((_DWORD *)this + 54) )
    {
      *(_DWORD *)v27 = 3;
      v28 = 0LL;
      v29 = 0;
      v30 = GUID_00000000_0000_0000_0000_000000000000;
      SupportedDataRangeForEndpoint = GetSupportedDataRangeForEndpoint(
                                        eKeywordDetectorConnector,
                                        *((struct IMMDevice **)this + 2),
                                        &v18);
      v4 = v18;
      if ( SupportedDataRangeForEndpoint >= 0 )
      {
        Count = v18->Count;
        v19 = v18 + 1;
      }
      PacketSizeConstraints = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
                                this,
                                (__int64)v9,
                                (_DWORD)pvData != 0,
                                TimeSec,
                                (__int64)this + 248,
                                (char)v27);
      CEndpointCharacteristics::CacheUnsupportedConnectorFormats(this, (struct CUnsupportedConnectorFormats *)v27);
      OemEnginePeriodicity = TimeSec;
    }
    *(_DWORD *)v31 = 0;
    v32 = 0LL;
    v33 = 0;
    v34 = GUID_00000000_0000_0000_0000_000000000000;
    if ( PacketSizeConstraints >= 0 )
    {
      PacketSizeConstraints = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
                                this,
                                (__int64)v9,
                                (_DWORD)pvData != 0,
                                OemEnginePeriodicity,
                                (__int64)this + 224,
                                (char)v31);
      if ( PacketSizeConstraints >= 0 && !*((_DWORD *)this + 55) )
        CEndpointCharacteristics::CacheProcessingModeCharacteristics(this);
    }
    CEndpointCharacteristics::CacheUnsupportedConnectorFormats(this, (struct CUnsupportedConnectorFormats *)v31);
    QueryPerformanceCounter(&v25);
    pv = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2), &pv) >= 0 )
    {
      v11 = *((_QWORD *)this + 1223);
      if ( *(_DWORD *)v11 > 4u
        && (*(_QWORD *)(v11 + 16) & 0x200000000010LL) != 0
        && (*(_QWORD *)(v11 + 24) & 0x200000000010LL) == *(_QWORD *)(v11 + 24) )
      {
        TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&PerformanceCount);
        Count = PacketSizeConstraints;
        v19 = (struct KSMULTIPLE_ITEM *)pv;
        v18 = (struct KSMULTIPLE_ITEM *)2048;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v12,
          (unsigned int)&unk_18018F1CE,
          v12,
          v13,
          (__int64)&v18,
          (__int64)&v19,
          (__int64)&Count,
          (__int64)&TimeSec);
      }
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    CoTaskMemFree(v9);
    CoTaskMemFree(v4);
    CoTaskMemFree(v7);
  }
  return (unsigned int)PacketSizeConstraints;
}
