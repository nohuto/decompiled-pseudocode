/*
 * XREFs of ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140097910
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x1400964E8 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140096940 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x140097B78 (-GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 *     ?GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x140097EEC (-GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetPosition(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4)
{
  int v7; // ebp
  bool v8; // zf
  char *v9; // r14
  CCrossProcessClientOutputEndpoint *v10; // rcx
  int Position_NonOffload; // eax
  __int64 v12; // rdx
  double v13; // xmm0_8
  double v14; // xmm0_8
  double v15; // xmm1_8
  double v16; // xmm0_8
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  LARGE_INTEGER PerformanceCount; // [rsp+98h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( a3 )
      *a3 = 0LL;
    v8 = (*((_BYTE *)this - 240) & 1) == 0;
    v9 = (char *)this - 416;
    v10 = (CCrossProcessClientOutputEndpoint *)((char *)this - 416);
    if ( v8 )
      Position_NonOffload = CCrossProcessClientOutputEndpoint::GetPosition_NonOffload(v10, a2, a3);
    else
      Position_NonOffload = CCrossProcessClientOutputEndpoint::GetPosition_Offload(v10, a2, a3);
    v7 = Position_NonOffload;
    if ( Position_NonOffload >= 0 )
    {
      a4 = *((_QWORD *)this - 29);
      if ( *a2 < a4 )
      {
        if ( (byte_1400CF981 & 4) != 0 )
          McTemplateU0pqxxxxffff_EventWriteTransfer(
            *((unsigned int *)this - 82),
            (a4 - *a2) % *((unsigned int *)this - 82),
            (__int64)v9,
            8,
            *a2,
            a4,
            (a4 - *a2) / *((unsigned int *)this - 82),
            0,
            0,
            0,
            0,
            0);
        *a2 = *((_QWORD *)this - 29);
      }
    }
  }
  else
  {
    v7 = -2147467261;
  }
  if ( a3 && !*a3 )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v13 = PerformanceCount.QuadPart < 0
        ? (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
        + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
        : (double)(int)PerformanceCount.LowPart;
    v14 = v13 * 10000000.0;
    v15 = (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL
        ? (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
        + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
        : (double)(int)g_u64QPCFrequency;
    v16 = v14 / v15;
    v17 = (unsigned int)(int)v16;
    *a3 = v17;
    if ( (byte_1400CF981 & 4) != 0 )
    {
      if ( a2 )
        v18 = *a2;
      else
        LOBYTE(v18) = 0;
      McTemplateU0pqxxxxffff_EventWriteTransfer(v17, v12, (__int64)this - 416, 6, v18, (int)v16, 0, 0, 0, 0, 0, 0);
    }
  }
  if ( a2 )
  {
    v19 = *((_QWORD *)this - 29);
    if ( *a2 < v19 && (byte_1400CF981 & 4) != 0 )
      McTemplateU0pqxxxxffff_EventWriteTransfer(
        *a2,
        v19,
        (__int64)this - 416,
        8,
        *a2,
        v19,
        *((_DWORD *)this - 82),
        0,
        0,
        0,
        0,
        0);
    *((_QWORD *)this - 29) = *a2;
  }
  if ( v7 < 0 )
    AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetPosition", 133, (unsigned int)v7, a4);
  return (unsigned int)v7;
}
