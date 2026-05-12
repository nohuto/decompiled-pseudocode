/*
 * XREFs of StorpTelemetrySendUnitPerfData @ 0x1C001BA38
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C001B5D8 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1C001AB60 (McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWri.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C001C3C0 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C006F8D8 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetrySendUnitIoSizeDistributionData @ 0x1C0071A98 (StorpTelemetrySendUnitIoSizeDistributionData.c)
 */

__int64 __fastcall StorpTelemetrySendUnitPerfData(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  _QWORD *Pool; // r15
  _QWORD *v5; // r13
  __int64 v6; // rsi
  __int64 v7; // r12
  LARGE_INTEGER v8; // rax
  LARGE_INTEGER v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r10
  const void *v13; // rdx
  unsigned int i; // edx
  __int64 v15; // r8
  _QWORD *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r12
  _QWORD *v20; // r9
  char *v21; // r10
  __int64 v22; // rsi
  char *v23; // r11
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned int v27; // r9d
  _QWORD *v28; // r10
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 *v33; // rdx
  unsigned __int64 v34; // rax
  bool v35; // cc
  __int64 v36; // rsi
  __int64 v37; // r12
  __int64 v38; // xmm1_8
  __int64 v39; // rax
  __int64 v40; // rdx
  const char *v41; // rbx
  __int64 v42; // rsi
  const char *v43; // rdi
  const wchar_t *v44; // rbx
  unsigned int v45; // ebx
  __int64 v47; // [rsp+288h] [rbp-80h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+290h] [rbp-78h] BYREF
  unsigned __int64 v49; // [rsp+2A0h] [rbp-68h]
  __int64 v50; // [rsp+2A8h] [rbp-60h]
  __int64 v51; // [rsp+2B0h] [rbp-58h]
  __int128 v52; // [rsp+2B8h] [rbp-50h]
  __int64 v53; // [rsp+2C8h] [rbp-40h]
  unsigned __int64 v54; // [rsp+2D8h] [rbp-30h] BYREF
  char v55[8]; // [rsp+2E0h] [rbp-28h] BYREF
  const wchar_t *v56; // [rsp+2E8h] [rbp-20h]
  __int64 v57; // [rsp+2F0h] [rbp-18h]
  _QWORD v58[2]; // [rsp+2F8h] [rbp-10h]
  __int64 v59; // [rsp+308h] [rbp+0h]
  __int64 v60; // [rsp+310h] [rbp+8h]
  __int64 v61; // [rsp+320h] [rbp+18h]
  __int64 v62; // [rsp+328h] [rbp+20h]
  __int64 v63; // [rsp+338h] [rbp+30h]
  __int64 v64; // [rsp+340h] [rbp+38h]
  __int64 v65; // [rsp+350h] [rbp+48h]
  __int64 v66; // [rsp+358h] [rbp+50h]
  __int64 v67; // [rsp+368h] [rbp+60h]
  __int64 v68; // [rsp+370h] [rbp+68h]
  __int64 v69; // [rsp+380h] [rbp+78h]
  __int64 v70; // [rsp+388h] [rbp+80h]
  __int64 v71; // [rsp+398h] [rbp+90h]
  __int64 v72; // [rsp+3A0h] [rbp+98h]
  __int64 v73; // [rsp+3B0h] [rbp+A8h]
  __int64 v74; // [rsp+3B8h] [rbp+B0h]
  __int64 v75; // [rsp+3C8h] [rbp+C0h]
  __int64 v76; // [rsp+3D0h] [rbp+C8h]
  __int64 v77; // [rsp+3E0h] [rbp+D8h]
  __int64 v78; // [rsp+3E8h] [rbp+E0h]
  __int64 v79; // [rsp+3F8h] [rbp+F0h]
  __int64 v80; // [rsp+400h] [rbp+F8h]
  __int64 v81; // [rsp+410h] [rbp+108h]
  __int64 v82; // [rsp+418h] [rbp+110h]
  __int64 v83; // [rsp+428h] [rbp+120h]
  __int64 v84; // [rsp+430h] [rbp+128h]
  __int64 v85; // [rsp+440h] [rbp+138h]
  _QWORD *v86; // [rsp+448h] [rbp+140h]
  unsigned __int64 v87; // [rsp+450h] [rbp+148h]
  __int64 v88; // [rsp+458h] [rbp+150h]
  __int64 v89; // [rsp+460h] [rbp+158h]

  PerformanceFrequency.QuadPart = 0LL;
  memset_0(v55, 0, 0x188uLL);
  v2 = (unsigned int)qword_1C0092570;
  v3 = 0LL;
  Pool = 0LL;
  v5 = 0LL;
  v49 = 0LL;
  v6 = 0LL;
  v50 = 0LL;
  v7 = 0LL;
  v51 = 0LL;
  if ( *(_QWORD *)(a1 + 2296) )
  {
    Pool = (_QWORD *)RaidAllocatePool(72LL, (unsigned int)Size, 1700028754LL, *(_QWORD *)(a1 + 8));
    if ( Pool
      && (v5 = (_QWORD *)RaidAllocatePool(72LL, (unsigned int)(24 * v2), 1700028754LL, *(_QWORD *)(a1 + 8))) != 0LL )
    {
      if ( UseQPCTime )
        v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v8.QuadPart = KeQueryUnbiasedInterruptTime();
      v9 = v8;
      if ( v8.QuadPart > 0 && (v10 = *(_QWORD *)(a1 + 2312), v9.QuadPart < v10) )
        v11 = v9.QuadPart - v10 - 1;
      else
        v11 = v9.QuadPart - *(_QWORD *)(a1 + 2312);
      if ( UseQPCTime )
      {
        v12 = 0LL;
        if ( PerformanceFrequency.QuadPart && v11 )
          v12 = 10000
              * (1000 * (v11 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
              / PerformanceFrequency.QuadPart
              + 10000
              * (1000 * (v11 / PerformanceFrequency.QuadPart)
               + 1000 * (v11 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart);
      }
      else
      {
        v12 = v11;
      }
      qword_1C0092588 = v9.QuadPart;
      v13 = *(const void **)(a1 + 2296);
      *(LARGE_INTEGER *)(a1 + 2312) = v9;
      v54 = v12;
      memmove(Pool, v13, (unsigned int)Size);
      for ( i = 1; i < g_RaidNumberProcessors; ++i )
      {
        v15 = (unsigned int)dword_1C0092578 * i;
        if ( (_DWORD)v2 )
        {
          v16 = Pool + 1;
          v17 = v2;
          do
          {
            *(v16 - 1) += *(_QWORD *)((char *)v16 + v15 - 8);
            *v16 += *(_QWORD *)((char *)v16 + v15);
            v16[1] += *(_QWORD *)((char *)v16 + v15 + 8);
            v16 += 3;
            --v17;
          }
          while ( v17 );
        }
      }
      v18 = *(_QWORD *)(a1 + 2320);
      v47 = 0LL;
      if ( (_DWORD)v2 )
      {
        v19 = 0LL;
        v20 = (_QWORD *)(v18 + 8);
        v21 = (char *)Pool - v18;
        v22 = v2;
        v23 = (char *)v5 - v18;
        do
        {
          v24 = *(_QWORD *)((char *)v20 + (_QWORD)v21 - 8) - *(v20 - 1);
          *(_QWORD *)((char *)v20 + (_QWORD)v23 - 8) = v24;
          v25 = *(_QWORD *)&v21[(_QWORD)v20] - *v20;
          *(_QWORD *)&v23[(_QWORD)v20] = v25;
          *(_QWORD *)((char *)v20 + (_QWORD)v23 + 8) = *(_QWORD *)((char *)v20 + (_QWORD)v21 + 8) - v20[1];
          v20 += 3;
          v19 += v25 + v24;
          --v22;
        }
        while ( v22 );
        v3 = v49;
        v6 = v50;
        v47 = v19;
        v7 = v51;
      }
      memmove(*(void **)(a1 + 2320), Pool, (unsigned int)dword_1C0092578);
      if ( v47 )
      {
        v85 = 0LL;
        if ( (_WORD)TelemetryPerfContext )
        {
          if ( WORD1(TelemetryPerfContext) )
          {
            v27 = 0;
            if ( (_DWORD)v2 )
            {
              v28 = v5 + 2;
              do
              {
                if ( v27 < *((_DWORD *)&xmmword_1C0092530 + 3) && v27 >= dword_1C009250C )
                {
                  v29 = v27 / (unsigned __int16)TelemetryPerfContext;
                  v30 = *(v28 - 2);
                  if ( (unsigned int)v29 >= 0xE )
                    v29 = 13LL;
                  v31 = *(v28 - 1);
                  v26 = 3 * v29;
                  v58[v26 + 1] += *v28;
                  v58[v26 - 1] += v30;
                  v58[v26] += v31;
                  v85 += v30 + v31;
                }
                ++v27;
                v28 += 3;
              }
              while ( v27 < (unsigned int)v2 );
            }
          }
        }
        if ( *(_QWORD *)(a1 + 2336) )
        {
          v26 = 0LL;
          do
          {
            v32 = v3;
            v33 = (unsigned __int64 *)(*(_QWORD *)(a1 + 2336) + dword_1C0092590 * (unsigned int)(unsigned __int16)v26);
            v34 = *v33;
            v35 = *v33 <= v3;
            *v33 = 0LL;
            v3 = v34;
            if ( v35 )
              v3 = v32;
            v6 += v33[1];
            v7 += v33[2];
            LOWORD(v26) = v26 + 1;
            *(_QWORD *)&v52 = v3;
          }
          while ( (unsigned __int16)v26 <= (unsigned __int16)g_RaidNumaHighestNodeNumber );
          *((_QWORD *)&v52 + 1) = v6;
          v36 = v6 - *(_QWORD *)(a1 + 2352);
          v53 = v7;
          v37 = v7 - *(_QWORD *)(a1 + 2360);
          v38 = v53;
          *(_OWORD *)(a1 + 2344) = v52;
          v87 = v3;
          *(_QWORD *)(a1 + 2360) = v38;
          v88 = v36;
          v89 = v37;
        }
        v39 = *(_QWORD *)(a1 + 152);
        if ( v39 )
        {
          v41 = (const char *)(v39 + 90);
        }
        else
        {
          v40 = *(_QWORD *)(a1 + 144);
          if ( !v40
            || (v41 = (const char *)(v40 + 41),
                (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 0x40) == 0) )
          {
            v41 = 0LL;
          }
        }
        v56 = L"128us, 256us, 512us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 512ms, 1000ms, 2000ms, 10000ms, 10000+ms";
        v86 = v5;
        v55[0] = 12;
        if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
          || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
        {
          goto LABEL_52;
        }
        if ( (*(_DWORD *)(a1 + 2040) & 0x20) != 0 )
          g_StorpTraceLoggingCriticalEventEnabled = -1;
        if ( *(_BYTE *)(a1 + 2044) )
          g_StorpTraceLoggingCriticalEventEnabled = -1;
        if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
          g_StorpTraceLoggingCriticalEventEnabled = -1;
        if ( g_StorpTraceLoggingCriticalEventEnabled )
          StorpTelemetryLogUnitPerfDataCriticalData(a1, &v54, v26, 1LL);
        else
LABEL_52:
          StorpTelemetryLogUnitPerfDataMeasures(a1, &v54, v26, 1LL);
        if ( (byte_1C0092A04 & 0x10) != 0 )
        {
          v42 = *(_QWORD *)(a1 + 24);
          v43 = (const char *)&dword_1C0081784;
          if ( v41 )
            v43 = v41;
          v44 = (const wchar_t *)&unk_1C0081788;
          if ( *(_QWORD *)(v42 + 5016) )
            v44 = *(const wchar_t **)(v42 + 5016);
          McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer(
            (__int64)&StorPortEventProvider_Context,
            (__int64)&EventUnitPerformance,
            0LL,
            *(_DWORD *)(v42 + 56),
            *(_BYTE *)(a1 + 96),
            *(_BYTE *)(a1 + 97),
            *(_BYTE *)(a1 + 98),
            a1 + 2024,
            v42 + 5000,
            *(_DWORD *)(a1 + 3344),
            *(const wchar_t **)(v42 + 4656),
            *(_DWORD *)(v42 + 4060),
            (const char *)(a1 + 160),
            (const char *)(a1 + 169),
            (const char *)(a1 + 186),
            v44,
            v43,
            *(_BYTE *)(a1 + 450) & 1,
            *(__int64 *)&g_SystemUptime_s,
            v55[0],
            v85,
            *(_QWORD *)(a1 + 2216),
            *(_DWORD *)(a1 + 836),
            *(_DWORD *)(a1 + 840),
            *(_QWORD *)(a1 + 2224),
            *(_QWORD *)(a1 + 2232),
            *(_QWORD *)(a1 + 2240),
            *(_QWORD *)(a1 + 2248),
            *(_QWORD *)(a1 + 2256),
            *(_QWORD *)(a1 + 2264),
            *(_QWORD *)(a1 + 2272),
            v87,
            *(_DWORD *)(a1 + 2368),
            *(_DWORD *)(a1 + 2376),
            v56,
            v57,
            v59,
            v61,
            v63,
            v65,
            v67,
            v69,
            v71,
            v73,
            v75,
            v77,
            v79,
            v81,
            v83,
            v58[0],
            v60,
            v62,
            v64,
            v66,
            v68,
            v70,
            v72,
            v74,
            v76,
            v78,
            v80,
            v82,
            v84);
        }
      }
      if ( g_StorpTraceLoggingIoSizeDistributionEnabled && (*(_BYTE *)(a1 + 451) & 0x10) != 0 )
        StorpTelemetrySendUnitIoSizeDistributionData(a1);
      v45 = 0;
    }
    else
    {
      v45 = -1073741801;
    }
  }
  else
  {
    v45 = -1073741823;
  }
  *(_QWORD *)(a1 + 836) = 0LL;
  *(_QWORD *)(a1 + 2368) = 0LL;
  *(_QWORD *)(a1 + 2376) = 0LL;
  *(_QWORD *)(a1 + 2216) = 0LL;
  *(_QWORD *)(a1 + 2224) = 0LL;
  *(_QWORD *)(a1 + 2232) = 0LL;
  *(_QWORD *)(a1 + 2240) = 0LL;
  *(_QWORD *)(a1 + 2248) = 0LL;
  *(_QWORD *)(a1 + 2256) = 0LL;
  *(_QWORD *)(a1 + 2264) = 0LL;
  *(_QWORD *)(a1 + 2272) = 0LL;
  *(_DWORD *)(a1 + 2288) = 0;
  if ( Pool )
    ExFreePoolWithTag(Pool, 0x65546152u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x65546152u);
  return v45;
}
