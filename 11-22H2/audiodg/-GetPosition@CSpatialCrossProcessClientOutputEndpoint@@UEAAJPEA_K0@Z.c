/*
 * XREFs of ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14009FD90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140096538 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C964 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x1400A030C (-IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x1400A033C (-IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetPosition(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        CSpatialCrossProcessBaseEndpoint *a4)
{
  signed __int64 v4; // r10
  signed __int64 v8; // r15
  unsigned int v9; // r12d
  char *v10; // rsi
  char *v11; // r14
  int v12; // eax
  unsigned __int64 v13; // rax
  double LowPart; // xmm0_8
  double v15; // xmm0_8
  double v16; // xmm1_8
  __int64 v17; // rax
  int v18; // eax
  double v19; // xmm0_8
  int v20; // eax
  unsigned __int64 v21; // r15
  double v22; // xmm1_8
  unsigned __int64 v23; // rax
  double v24; // xmm1_8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  double v27; // xmm0_8
  double v28; // xmm0_8
  double v29; // xmm1_8
  char v30; // al
  float v31; // xmm0_4
  __int64 v32; // rdx
  float v33; // xmm1_4
  float v34; // xmm2_4
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  char *v37; // rsi
  unsigned __int64 v38; // rdx
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp-69h] BYREF
  unsigned __int64 v41; // [rsp+70h] [rbp-61h] BYREF
  signed __int64 v42; // [rsp+78h] [rbp-59h] BYREF
  __int128 v43; // [rsp+88h] [rbp-49h] BYREF
  __int128 v44; // [rsp+98h] [rbp-39h]
  __int64 v45; // [rsp+A8h] [rbp-29h]
  __int128 v46; // [rsp+B0h] [rbp-21h] BYREF
  __int128 v47; // [rsp+C0h] [rbp-11h]
  __int64 v48; // [rsp+D0h] [rbp-1h]

  v4 = 0LL;
  PerformanceCount.QuadPart = 0LL;
  LOBYTE(v8) = 0;
  v48 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  v41 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  if ( !*((_BYTE *)this - 1232) )
  {
    v9 = -2005139437;
LABEL_64:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetPosition", 488, v9, (__int64)a4);
    return v9;
  }
  if ( !a2 )
  {
    v9 = -2147467261;
    v10 = (char *)this - 32;
    goto LABEL_41;
  }
  if ( a3 )
    *a3 = 0LL;
  v11 = (char *)this - 32;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 4) + 64LL), 0, 0) & 0xFFFFFF81) != 1 )
  {
    v9 = -2005139387;
    v10 = (char *)this - 32;
    goto LABEL_41;
  }
  v12 = (*(__int64 (__fastcall **)(char *, __int128 *, __int128 *, unsigned __int64 *, signed __int64 *))(*((_QWORD *)this - 166) + 96LL))(
          (char *)this - 1328,
          &v46,
          &v43,
          &v41,
          &v42);
  v4 = 0LL;
  v10 = v11;
  v9 = v12;
  if ( v12 < 0 )
    goto LABEL_41;
  if ( !CSpatialCrossProcessBaseEndpoint::IsTimestampInitialized((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 1328)) )
  {
    *a2 = v41;
    goto LABEL_41;
  }
  if ( !CSpatialCrossProcessBaseEndpoint::IsValidTimestamp(a4) )
  {
    v13 = v42;
LABEL_40:
    *a2 = v13;
    goto LABEL_41;
  }
  if ( HIDWORD(v45) == (_DWORD)v4 )
  {
    v9 = -2005139375;
LABEL_39:
    v13 = *((_QWORD *)this - 149);
    goto LABEL_40;
  }
  if ( (unsigned __int64)v43 < (_QWORD)v47 + (_QWORD)v46 )
  {
    v13 = v41;
    goto LABEL_40;
  }
  QueryPerformanceCounter(&PerformanceCount);
  if ( PerformanceCount.QuadPart < 0 )
    LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
            + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
  else
    LowPart = (double)(int)PerformanceCount.LowPart;
  v15 = LowPart * 10000000.0;
  if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
    v16 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
        + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
  else
    v16 = (double)(int)g_u64QPCFrequency;
  v4 = 0LL;
  v17 = (unsigned int)(int)(v15 / v16);
  if ( a3 )
    *a3 = v17;
  if ( v17 < *((__int64 *)&v44 + 1) )
    v18 = 0;
  else
    v18 = v17 - DWORD2(v44);
  v19 = (double)v18;
  v20 = *((_DWORD *)this - 256);
  v21 = v43 + (unsigned int)(int)(v19 * *(float *)&v45 / 10000000.0 + 0.5) - (_QWORD)v47 - v46;
  if ( (float)v20 != *(float *)&v45 )
  {
    v22 = (double)v20;
    v23 = 0LL;
    v24 = v22 * (double)(int)v21 / *(float *)&v45 + 0.5;
    if ( v24 >= 9.223372036854776e18 )
    {
      v24 = v24 - 9.223372036854776e18;
      if ( v24 < 9.223372036854776e18 )
        v23 = 0x8000000000000000uLL;
    }
    v21 = v23 + (unsigned int)(int)v24;
  }
  v8 = v41 + v21;
  v25 = v42;
  if ( v8 < v42 )
    v25 = v8;
  *a2 = v25;
  v26 = *((_QWORD *)this - 149);
  if ( v25 < v26 )
  {
    if ( (byte_1400CF981 & 4) != 0 )
    {
      McTemplateU0pqxxxxffff_EventWriteTransfer(v25, v26, (__int64)this - 1328, 8, v25, v26, v26 - v25, 0, 0, 0, 0, 0);
      v4 = 0LL;
    }
    goto LABEL_39;
  }
LABEL_41:
  if ( a3 && *a3 == v4 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      v27 = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
          + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      v27 = (double)(int)PerformanceCount.LowPart;
    v28 = v27 * 10000000.0;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v29 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
          + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v29 = (double)(int)g_u64QPCFrequency;
    v4 = 0LL;
    *a3 = (unsigned int)(int)(v28 / v29);
  }
  v30 = byte_1400CF981;
  if ( (byte_1400CF981 & 4) != 0 )
  {
    v31 = (float)*((int *)this - 256);
    LODWORD(v35) = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v10 + 32LL), v4, 0LL);
    v32 = *((unsigned __int16 *)this - 508);
    v33 = (float)(v35 * v32);
    LOBYTE(v35) = v4;
    if ( a3 )
      v35 = *a3;
    if ( a2 )
      v36 = *a2 * v32;
    else
      v36 = v4;
    v37 = (char *)this - 1328;
    v34 = (float)(int)(v42 * *((unsigned __int16 *)this - 508));
    McTemplateU0pqxxxxffff_EventWriteTransfer(
      v41 * *((unsigned __int16 *)this - 508),
      v36,
      (__int64)this - 1328,
      6,
      v36,
      v35,
      v8 * *((_BYTE *)this - 1016),
      v41 * *((_WORD *)this - 508),
      SLOBYTE(v34),
      SLOBYTE(v33),
      v45,
      SLOBYTE(v31));
    v30 = byte_1400CF981;
  }
  else
  {
    v37 = (char *)this - 1328;
  }
  if ( a2 )
  {
    v38 = *((_QWORD *)this - 149);
    if ( *a2 < v38 && (v30 & 4) != 0 )
      McTemplateU0pqxxxxffff_EventWriteTransfer(
        *a2,
        v38,
        (__int64)v37,
        8,
        *a2,
        v38,
        *((_WORD *)this - 508),
        0,
        0,
        0,
        0,
        0);
    *((_QWORD *)this - 149) = *a2;
    *a2 *= *((unsigned __int16 *)this - 508);
  }
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_64;
  return v9;
}
