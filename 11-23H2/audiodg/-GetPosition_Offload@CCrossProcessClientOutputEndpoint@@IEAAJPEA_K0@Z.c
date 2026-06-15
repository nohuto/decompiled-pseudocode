/*
 * XREFs of ?GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x140097EEC
 * Callers:
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140097910 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     ?ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z @ 0x1400951F8 (-ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140096940 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x14009737C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x140097428 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetPosition_Offload(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 *v4; // r15
  signed __int32 v7; // r12d
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // r13
  __int64 v12; // rcx
  float v13; // xmm6_4
  int v14; // edx
  signed __int32 v15; // eax
  __int64 v16; // rcx
  double LowPart; // xmm0_8
  double v18; // xmm0_8
  double v19; // xmm1_8
  signed __int64 v20; // rsi
  int v21; // esi
  double v22; // xmm3_8
  double v23; // xmm2_8
  float v24; // xmm0_4
  double v25; // xmm0_8
  double v26; // xmm1_8
  unsigned __int64 v27; // rcx
  double v28; // xmm0_8
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-19h] BYREF
  __int64 v34; // [rsp+60h] [rbp-11h] BYREF
  CCrossProcessClientOutputEndpoint *v35; // [rsp+68h] [rbp-9h] BYREF
  unsigned __int64 v36; // [rsp+70h] [rbp-1h] BYREF
  _QWORD v37[4]; // [rsp+78h] [rbp+7h] BYREF
  unsigned __int64 v38; // [rsp+D8h] [rbp+67h] BYREF
  unsigned __int64 v39; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = *((_QWORD *)this + 9);
  v4 = (unsigned __int64 *)a3;
  v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 164), 0, 0);
  v8 = 0;
  if ( (v7 & 4) == 0 )
  {
    v9 = 0LL;
    goto LABEL_41;
  }
  v3 = 3LL;
  do
  {
    v10 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 9) + 160LL), 0, 0);
    a3 = 5 * v10;
    v11 = *(_QWORD *)(*((_QWORD *)this + 9) + 40 * v10 + 32);
    v12 = *((_QWORD *)this + 9);
    v39 = *(_QWORD *)(v12 + 40 * v10 + 56);
    v13 = *(float *)(v12 + 40 * v10 + 64);
    v14 = *(_DWORD *)(*((_QWORD *)this + 9) + 40 * v10 + 68);
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 9) + 160LL), 0, 0);
    if ( (_DWORD)v10 == v15 )
      break;
    v3 = (unsigned int)(v3 - 1);
  }
  while ( (_DWORD)v3 );
  if ( !v14 )
  {
    v8 = -2004287484;
LABEL_8:
    v9 = *((_QWORD *)this + 23);
    goto LABEL_41;
  }
  if ( (_DWORD)v10 != v15 )
  {
    v8 = -2005139393;
    goto LABEL_8;
  }
  *a2 = v11;
  v16 = v11;
  if ( (v7 & 1) != 0 )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
              + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      LowPart = (double)(int)PerformanceCount.LowPart;
    v18 = LowPart * 10000000.0;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v19 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
          + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v19 = (double)(int)g_u64QPCFrequency;
    v20 = (unsigned int)(int)(v18 / v19);
    if ( v4 )
      *v4 = v20;
    if ( *((_BYTE *)this + 400) && (unsigned int)ConvertHostPerfCounterToPerfCounter(&v39) )
      *((_BYTE *)this + 400) = 0;
    if ( v20 < (__int64)v39 )
      v21 = 0;
    else
      v21 = v20 - v39;
    v22 = DOUBLE_0_5;
    v23 = v13;
    *a2 += (unsigned int)(int)((double)v21 * v13 / 10000000.0 + 0.5);
    v16 = *a2;
  }
  else
  {
    v22 = DOUBLE_0_5;
    v23 = v13;
  }
  v24 = *((float *)this + 39);
  if ( v24 != v13 )
  {
    v25 = v24;
    if ( v16 < 0 )
      v26 = (double)(int)(v16 & 1 | ((unsigned __int64)v16 >> 1))
          + (double)(int)(v16 & 1 | ((unsigned __int64)v16 >> 1));
    else
      v26 = (double)(int)v16;
    v27 = 0LL;
    v28 = v25 * v26 / v23 + v22;
    if ( v28 >= 9.223372036854776e18 )
    {
      v28 = v28 - 9.223372036854776e18;
      if ( v28 < 9.223372036854776e18 )
        v27 = 0x8000000000000000uLL;
    }
    *a2 = v27 + (unsigned int)(int)v28;
  }
  v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 9) + 24LL), 0LL, 0LL)
      / (unsigned __int64)*((unsigned int *)this + 22);
  v30 = *a2;
  if ( *a2 > v29 )
  {
    if ( (unsigned int)dword_1400CE000 > 5 )
    {
      v34 = *a2;
      v38 = v29;
      v35 = (CCrossProcessClientOutputEndpoint *)v39;
      v36 = v11;
      v37[0] = this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v39,
        byte_1400B4198,
        a3,
        v3,
        (__int64)v37,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v38);
    }
    *a2 = v29;
    v30 = v29;
  }
  v9 = v30 * *((unsigned int *)this + 22);
LABEL_41:
  *a2 = v9;
  if ( (unsigned int)dword_1400CE000 > 5 )
  {
    if ( v4 )
      v31 = *v4;
    else
      v31 = 0LL;
    v37[0] = v31;
    v36 = v9;
    LODWORD(v38) = v7;
    v35 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v9,
      byte_1400B4146,
      a3,
      v3,
      (__int64)&v35,
      (__int64)&v38,
      (__int64)&v36,
      (__int64)v37);
  }
  if ( v8 < 0 )
    AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetPosition_Offload", 424, (unsigned int)v8, v3);
  return (unsigned int)v8;
}
