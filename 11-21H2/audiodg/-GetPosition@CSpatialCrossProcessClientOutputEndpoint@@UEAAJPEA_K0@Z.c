/*
 * XREFs of ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x1400944A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140089758 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140090784 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140094A1C (-IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140094A4C (-IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetPosition(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  __int64 v3; // r9
  __int64 *v5; // rbx
  signed __int64 v7; // rsi
  int v8; // r12d
  unsigned int v9; // r14d
  int v10; // eax
  __int64 v11; // rax
  double LowPart; // xmm0_8
  double v13; // xmm0_8
  double v14; // xmm1_8
  __int64 v15; // rax
  int v16; // eax
  unsigned __int64 v17; // rsi
  double v18; // xmm2_8
  unsigned __int64 v19; // rax
  double v20; // xmm2_8
  unsigned __int64 v21; // rcx
  double v22; // xmm0_8
  double v23; // xmm0_8
  double v24; // xmm1_8
  float v25; // xmm0_4
  __int64 v26; // rdx
  __int16 v27; // r8
  float v28; // xmm1_4
  float v29; // xmm2_4
  __int64 v30; // rax
  __int64 v31; // rdx
  char *v32; // rsi
  unsigned __int64 v33; // r8
  __int64 v34; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp-59h] BYREF
  __int64 v37; // [rsp+70h] [rbp-51h] BYREF
  signed __int64 v38; // [rsp+78h] [rbp-49h] BYREF
  __int128 v39; // [rsp+80h] [rbp-41h] BYREF
  __int128 v40; // [rsp+90h] [rbp-31h]
  __int64 v41; // [rsp+A0h] [rbp-21h]
  __int128 v42; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v43; // [rsp+B8h] [rbp-9h]
  __int64 v44; // [rsp+C8h] [rbp+7h]

  v3 = 0LL;
  v5 = (__int64 *)a2;
  PerformanceCount.QuadPart = 0LL;
  LOWORD(v7) = 0;
  v44 = 0LL;
  v8 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v37 = 0LL;
  v43 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( !*((_BYTE *)this - 1232) )
  {
    v9 = -2005139437;
LABEL_63:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetPosition", 488, v9, v3);
    return v9;
  }
  if ( !a2 )
  {
    v9 = -2147467261;
    goto LABEL_40;
  }
  if ( a3 )
    *a3 = 0LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 4) + 64LL), 0, 0) & 0xFFFFFF81) != 1 )
  {
    v9 = -2005139387;
    goto LABEL_40;
  }
  v10 = (*(__int64 (__fastcall **)(char *, __int128 *, __int128 *, __int64 *, signed __int64 *))(*((_QWORD *)this - 166)
                                                                                               + 96LL))(
          (char *)this - 1328,
          &v42,
          &v39,
          &v37,
          &v38);
  v3 = 0LL;
  v9 = v10;
  if ( v10 < 0 )
    goto LABEL_40;
  if ( !CSpatialCrossProcessBaseEndpoint::IsTimestampInitialized((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 1328)) )
  {
    *v5 = v37;
    goto LABEL_40;
  }
  if ( !CSpatialCrossProcessBaseEndpoint::IsValidTimestamp((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 1328)) )
  {
    v11 = v38;
LABEL_14:
    *v5 = v11;
    goto LABEL_40;
  }
  if ( HIDWORD(v41) == (_DWORD)v3 )
  {
    v9 = -2005139375;
    *v5 = *((_QWORD *)this - 149);
    goto LABEL_40;
  }
  if ( (unsigned __int64)v39 < (_QWORD)v43 + (_QWORD)v42 )
  {
    v11 = v37;
    goto LABEL_14;
  }
  QueryPerformanceCounter(&PerformanceCount);
  if ( PerformanceCount.QuadPart < 0 )
    LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
            + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
  else
    LowPart = (double)(int)PerformanceCount.LowPart;
  v13 = LowPart * 10000000.0;
  if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
    v14 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
        + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
  else
    v14 = (double)(int)g_u64QPCFrequency;
  v3 = 0LL;
  v15 = (unsigned int)(int)(v13 / v14);
  if ( a3 )
    *a3 = v15;
  if ( v15 >= *((__int64 *)&v40 + 1) )
    v8 = v15 - DWORD2(v40);
  v16 = *((_DWORD *)this - 256);
  v17 = v39 + (unsigned int)(int)(*(float *)&v41 * (double)v8 / 10000000.0 + 0.5) - (_QWORD)v43 - v42;
  if ( (float)v16 != *(float *)&v41 )
  {
    v18 = (double)v16;
    v19 = 0LL;
    v20 = v18 * (double)(int)v17 / *(float *)&v41 + 0.5;
    if ( v20 >= 9.223372036854776e18 )
    {
      v20 = v20 - 9.223372036854776e18;
      if ( v20 < 9.223372036854776e18 )
        v19 = 0x8000000000000000uLL;
    }
    v17 = v19 + (unsigned int)(int)v20;
  }
  v7 = v37 + v17;
  v21 = v38;
  if ( v7 < v38 )
    v21 = v7;
  *v5 = v21;
  a2 = (unsigned __int64 *)*((_QWORD *)this - 149);
  if ( v21 < (unsigned __int64)a2 )
  {
    if ( (byte_1400C1841 & 4) != 0 )
    {
      McTemplateU0pqxxxxffff_EventWriteTransfer(
        v21,
        (__int64)a2,
        (__int64)this - 1328,
        8,
        v21,
        (char)a2,
        (_BYTE)a2 - v21,
        0,
        0,
        0,
        0,
        0);
      a2 = (unsigned __int64 *)*((_QWORD *)this - 149);
      v3 = 0LL;
    }
    *v5 = (__int64)a2;
  }
LABEL_40:
  if ( a3 && *a3 == v3 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      v22 = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
          + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      v22 = (double)(int)PerformanceCount.LowPart;
    v23 = v22 * 10000000.0;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v24 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
          + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v24 = (double)(int)g_u64QPCFrequency;
    v3 = 0LL;
    *a3 = (unsigned int)(int)(v23 / v24);
  }
  LOBYTE(a2) = byte_1400C1841;
  if ( (byte_1400C1841 & 4) != 0 )
  {
    v25 = (float)*((int *)this - 256);
    LODWORD(v30) = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 4) + 32LL), v3, 0LL);
    v26 = *((unsigned __int16 *)this - 508);
    v27 = v7 * *((_WORD *)this - 508);
    v28 = (float)(v30 * v26);
    LOBYTE(v30) = v3;
    if ( a3 )
      v30 = *a3;
    if ( v5 )
      v31 = *v5 * v26;
    else
      v31 = v3;
    v32 = (char *)this - 1328;
    v29 = (float)(int)(v38 * *((unsigned __int16 *)this - 508));
    McTemplateU0pqxxxxffff_EventWriteTransfer(
      v37 * *((unsigned __int16 *)this - 508),
      v31,
      (__int64)this - 1328,
      6,
      v31,
      v30,
      v27,
      v37 * *((_WORD *)this - 508),
      SLOBYTE(v29),
      SLOBYTE(v28),
      v41,
      SLOBYTE(v25));
    LOBYTE(a2) = byte_1400C1841;
  }
  else
  {
    v32 = (char *)this - 1328;
  }
  if ( v5 )
  {
    v33 = *((_QWORD *)this - 149);
    v34 = *v5;
    if ( *v5 < v33 && ((unsigned __int8)a2 & 4) != 0 )
    {
      McTemplateU0pqxxxxffff_EventWriteTransfer(
        *v5,
        (__int64)a2,
        (__int64)v32,
        8,
        *v5,
        v33,
        *((_WORD *)this - 508),
        0,
        0,
        0,
        0,
        0);
      v34 = *v5;
    }
    *((_QWORD *)this - 149) = v34;
    *v5 *= *((unsigned __int16 *)this - 508);
  }
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_63;
  return v9;
}
