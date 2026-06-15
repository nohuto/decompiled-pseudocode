/*
 * XREFs of ?GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x140097BC8
 * Callers:
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140097960 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     ?ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z @ 0x140095248 (-ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140096538 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140096990 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetPosition_NonOffload(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  char v8; // al
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  int v12; // r10d
  __int64 v13; // r13
  __int64 v14; // r9
  unsigned __int64 v15; // r11
  __int64 v16; // rcx
  float v17; // xmm6_4
  int v18; // edx
  unsigned __int64 v19; // r15
  double LowPart; // xmm0_8
  double v21; // xmm0_8
  double v22; // xmm1_8
  signed __int64 v23; // rbp
  int v24; // ebp
  double v25; // xmm2_8
  float v26; // xmm0_4
  __int64 v27; // rdx
  double v28; // xmm0_8
  double v29; // xmm1_8
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  double v32; // xmm0_8
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  float v35; // xmm1_4
  __int64 v36; // rax
  float v37; // xmm2_4
  unsigned __int64 v39; // [rsp+60h] [rbp-58h]
  unsigned __int64 v40; // [rsp+68h] [rbp-50h]
  unsigned __int64 v41; // [rsp+C0h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+D8h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 9);
  v4 = 0;
  PerformanceCount.QuadPart = 0LL;
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 164), 0, 0);
  v9 = *((_QWORD *)this + 9);
  if ( (v8 & 4) == 0 )
  {
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 152), 0LL, 0LL);
LABEL_3:
    *a2 = v10;
    return v4;
  }
  if ( (v8 & 2) == 0 )
  {
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), 0LL, 0LL);
    goto LABEL_3;
  }
  v11 = *(_QWORD *)(v9 + 112);
  v12 = 3;
  v13 = *(_QWORD *)(*((_QWORD *)this + 9) + 128LL);
  while ( 1 )
  {
    v14 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 9) + 160LL), 0, 0);
    v15 = *(_QWORD *)(*((_QWORD *)this + 9) + 40 * v14 + 32);
    v39 = v15;
    v16 = *((_QWORD *)this + 9);
    v41 = *(_QWORD *)(v16 + 40 * v14 + 56);
    v17 = *(float *)(v16 + 40 * v14 + 64);
    v18 = *(_DWORD *)(*((_QWORD *)this + 9) + 40 * v14 + 68);
    if ( (_DWORD)v14 == _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 9) + 160LL), 0, 0) )
      break;
    if ( !--v12 )
    {
      v4 = -2005139393;
LABEL_12:
      *a2 = *((_QWORD *)this + 23);
      AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetPosition_NonOffload", 296, v4, v14);
      return v4;
    }
  }
  if ( !v18 )
  {
    v4 = -2005139375;
    goto LABEL_12;
  }
  v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 9) + 152LL), 0LL, 0LL)
      / (unsigned __int64)*((unsigned int *)this + 22);
  v40 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 9) + 24LL), 0LL, 0LL)
      / (unsigned __int64)*((unsigned int *)this + 22);
  if ( v15 >= v11 + v13 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
              + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      LowPart = (double)(int)PerformanceCount.LowPart;
    v21 = LowPart * 10000000.0;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v22 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
          + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v22 = (double)(int)g_u64QPCFrequency;
    v23 = (unsigned int)(int)(v21 / v22);
    if ( a3 )
      *a3 = v23;
    if ( *((_BYTE *)this + 400) && (unsigned int)ConvertHostPerfCounterToPerfCounter(&v41) )
      *((_BYTE *)this + 400) = 0;
    if ( v23 < (__int64)v41 )
      v24 = 0;
    else
      v24 = v23 - v41;
    v25 = v17;
    v26 = *((float *)this + 39);
    v27 = v39 + (unsigned int)(int)((double)v24 * v17 / 10000000.0 + 0.5) - v13 - v11;
    if ( v26 != v17 )
    {
      v28 = v26;
      if ( v27 < 0 )
      {
        v30 = v27 & 1 | ((v39 + (unsigned int)(int)((double)v24 * v25 / 10000000.0 + 0.5) - v13 - v11) >> 1);
        v29 = (double)(int)v30 + (double)(int)v30;
      }
      else
      {
        v29 = (double)(int)v27;
      }
      v31 = 0LL;
      v32 = v28 * v29 / v25 + 0.5;
      if ( v32 >= 9.223372036854776e18 )
      {
        v32 = v32 - 9.223372036854776e18;
        if ( v32 < 9.223372036854776e18 )
          v31 = 0x8000000000000000uLL;
      }
      v27 = v31 + (unsigned int)(int)v32;
    }
    v33 = v19 + v27;
    v34 = v33;
    if ( v33 >= v40 )
      v34 = v40;
    *a2 = *((unsigned int *)this + 22) * v34;
    if ( (byte_1400CF981 & 4) != 0 )
    {
      LOBYTE(v36) = 0;
      if ( a3 )
        v36 = *a3;
      v35 = (float)(int)*(_QWORD *)(*((_QWORD *)this + 9) + 16LL);
      v37 = (float)(int)*(_QWORD *)(*((_QWORD *)this + 9) + 24LL);
      McTemplateU0pqxxxxffff_EventWriteTransfer(
        *a2,
        v33,
        (__int64)this,
        6,
        *a2,
        v36,
        v33,
        v19,
        SLOBYTE(v37),
        SLOBYTE(v35),
        SLOBYTE(v17),
        *((_DWORD *)this + 39));
    }
  }
  else
  {
    *a2 = v19 * *((unsigned int *)this + 22);
  }
  return v4;
}
