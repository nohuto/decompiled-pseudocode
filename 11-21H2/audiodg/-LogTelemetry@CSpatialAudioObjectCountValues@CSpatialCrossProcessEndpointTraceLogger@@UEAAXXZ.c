/*
 * XREFs of ?LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x140090040
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U3@U2@U3@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44545445@Z @ 0x14008EA78 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U3@U.c)
 *     ?StdDev@?$CSimplePerfCounterAggregateValues@W4SpatialObjectCountTypes@@I$01@@QEAANW4SpatialObjectCountTypes@@@Z @ 0x140090818 (-StdDev@-$CSimplePerfCounterAggregateValues@W4SpatialObjectCountTypes@@I$01@@QEAANW4SpatialObjec.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues::LogTelemetry(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues *this)
{
  _DWORD **v1; // rax
  _DWORD *v3; // rsi
  double v4; // xmm0_8
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  double v12; // xmm0_8
  int v13; // ecx
  int v14; // eax
  int v15; // [rsp+80h] [rbp+7h] BYREF
  int v16; // [rsp+84h] [rbp+Bh] BYREF
  double v17; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+90h] [rbp+17h] BYREF
  double v19; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v20; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v21[5]; // [rsp+A8h] [rbp+2Fh] BYREF
  int v22; // [rsp+E0h] [rbp+67h] BYREF
  int v23; // [rsp+E8h] [rbp+6Fh] BYREF
  int v24; // [rsp+F0h] [rbp+77h] BYREF
  int v25; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = (_DWORD **)*((_QWORD *)this + 10);
  v3 = *v1;
  if ( **v1 > 4u
    && (*((_QWORD *)v3 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x400000000000LL) == *((_QWORD *)v3 + 3) )
  {
    v4 = CSimplePerfCounterAggregateValues<enum SpatialObjectCountTypes,unsigned int,2>::StdDev(this, 1LL);
    v5 = *((_DWORD *)this + 12);
    v6 = 0;
    v7 = *((_DWORD *)this + 17);
    v17 = v4;
    v22 = v7;
    if ( v5 )
      v8 = *((_DWORD *)this + 16);
    else
      v8 = 0;
    v23 = v8;
    v9 = *((_QWORD *)this + 7);
    v24 = v5;
    v18 = v9;
    v12 = CSimplePerfCounterAggregateValues<enum SpatialObjectCountTypes,unsigned int,2>::StdDev(this, 0LL);
    v13 = *((_DWORD *)this + 4);
    v14 = *((_DWORD *)this + 9);
    v19 = v12;
    v25 = v14;
    if ( v13 )
      v6 = *((_DWORD *)this + 8);
    v20 = *((_QWORD *)this + 3);
    v21[0] = *((_QWORD *)this + 11);
    v16 = v13;
    v15 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)v3,
      byte_1400A77B9,
      v10,
      v11,
      v21,
      (__int64)&v16,
      (__int64)&v20,
      (__int64)&v15,
      (__int64)&v25,
      (__int64)&v19,
      (__int64)&v24,
      (__int64)&v18,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v17);
  }
}
