/*
 * XREFs of ?VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C000BD80
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C000A430 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0004E2C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0019900 (__security_check_cookie.c)
 *     memset @ 0x1C001AC00 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U3@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@553333333333333AEBU?$_tlgWrapSz@D@@5@Z @ 0x1C0034118 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@U3@U1@.c)
 *     ?GetVSyncStatsNumMonitorPowerTransitions@DXGADAPTER@@QEAAII@Z @ 0x1C00349A0 (-GetVSyncStatsNumMonitorPowerTransitions@DXGADAPTER@@QEAAII@Z.c)
 *     ?GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z @ 0x1C0034A54 (-GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z.c)
 */

void __fastcall VidSchiLogAggregatedTelemetry(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // rbx
  unsigned int v3; // r15d
  _DWORD *i; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // esi
  __int64 *v9; // rax
  DXGADAPTER *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int16 v24[2]; // [rsp+D0h] [rbp-80h] BYREF
  unsigned int VSyncStatsNumMonitorPowerTransitions; // [rsp+D4h] [rbp-7Ch] BYREF
  unsigned int v26; // [rsp+D8h] [rbp-78h]
  __int64 v27; // [rsp+E0h] [rbp-70h]
  unsigned int v28; // [rsp+E8h] [rbp-68h] BYREF
  unsigned int v29; // [rsp+ECh] [rbp-64h] BYREF
  int v30; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v32; // [rsp+100h] [rbp-50h]
  __int64 v33; // [rsp+108h] [rbp-48h]
  __int64 v34; // [rsp+110h] [rbp-40h] BYREF
  __int64 v35; // [rsp+118h] [rbp-38h]
  __int64 v36; // [rsp+120h] [rbp-30h]
  __int64 v37; // [rsp+128h] [rbp-28h]
  __int64 v38; // [rsp+130h] [rbp-20h]
  char *v39; // [rsp+138h] [rbp-18h]
  char *v40; // [rsp+140h] [rbp-10h] BYREF
  __int64 v41; // [rsp+148h] [rbp-8h] BYREF
  __int64 v42; // [rsp+150h] [rbp+0h] BYREF
  __int64 v43; // [rsp+158h] [rbp+8h] BYREF
  __int64 v44; // [rsp+160h] [rbp+10h] BYREF
  __int64 v45; // [rsp+168h] [rbp+18h] BYREF
  __int64 v46; // [rsp+170h] [rbp+20h] BYREF
  __int64 v47; // [rsp+178h] [rbp+28h] BYREF
  __int64 v48; // [rsp+180h] [rbp+30h] BYREF
  __int64 v49; // [rsp+188h] [rbp+38h] BYREF
  __int64 v50; // [rsp+190h] [rbp+40h] BYREF
  __int64 v51; // [rsp+198h] [rbp+48h] BYREF
  __int64 v52; // [rsp+1A0h] [rbp+50h] BYREF
  __int64 v53; // [rsp+1A8h] [rbp+58h] BYREF
  __int64 v54; // [rsp+1B0h] [rbp+60h] BYREF
  __int64 v55; // [rsp+1B8h] [rbp+68h] BYREF
  char v56[272]; // [rsp+1C0h] [rbp+70h] BYREF

  v2 = MEMORY[0xFFFFF78000000320];
  if ( (unsigned __int64)KeQueryTimeIncrement() * (v2 - *((_QWORD *)a1 + 301)) >= 0x19254D3800LL )
  {
    v3 = 0;
    *((_QWORD *)a1 + 301) = v2;
    memset(v56, 0, 0x104uLL);
    for ( i = (_DWORD *)*((_QWORD *)a1 + 37); i != (_DWORD *)((char *)a1 + 296); i = *(_DWORD **)i )
    {
      if ( !i[398] )
      {
        v5 = *((_QWORD *)i - 8);
        v6 = *(_QWORD *)(v5 + 2816);
        v7 = *(_QWORD *)(v5 + 2824);
        if ( v6 - v7 > (unsigned __int64)v3 )
        {
          v3 = v6 - v7;
          strcpy_s(v56, 0x104uLL, *(const char **)(v5 + 2648));
        }
        *(_QWORD *)(v5 + 2824) = *(_QWORD *)(v5 + 2816);
      }
    }
    v8 = 0;
    if ( *((_BYTE *)a1 + 2212) )
    {
      v26 = *((_DWORD *)a1 + 10);
      if ( !v26 )
        return;
    }
    else
    {
      v26 = 1;
    }
    v9 = (__int64 *)((char *)a1 + 3200);
    v39 = (char *)a1 + 3200;
    do
    {
      v10 = (DXGADAPTER *)*((_QWORD *)a1 + 2);
      v11 = *v9;
      v31 = 0LL;
      v32 = 0LL;
      v33 = 0LL;
      v34 = 0LL;
      v35 = 0LL;
      v36 = 0LL;
      VSyncStatsNumMonitorPowerTransitions = DXGADAPTER::GetVSyncStatsNumMonitorPowerTransitions(v10, v8);
      if ( VSyncStatsNumMonitorPowerTransitions || *(_QWORD *)(v11 + 44192) )
      {
        DXGADAPTER::GetVSyncTimeCounters(*((_QWORD *)a1 + 2), v8, 1LL, &v31);
        DXGADAPTER::GetVSyncTimeCounters(*((_QWORD *)a1 + 2), v8, 2LL, &v34);
        v12 = v31;
        if ( !v31 )
        {
          DXGADAPTER::GetVSyncTimeCounters(*((_QWORD *)a1 + 2), v8, 0LL, &v31);
          v12 = v31;
        }
        v13 = v32;
        v14 = v33;
        v15 = v34;
        v16 = v35;
        v17 = v36;
        if ( *((_BYTE *)a1 + 59) )
        {
          v12 += *(_QWORD *)(v11 + 78536);
          v13 = *(_QWORD *)(v11 + 78544) + v32;
          v14 = *(_QWORD *)(v11 + 78552) + v33;
          v15 = *(_QWORD *)(v11 + 78560) + v34;
          v16 = *(_QWORD *)(v11 + 78568) + v35;
          v17 = *(_QWORD *)(v11 + 78576) + v36;
        }
        v37 = v15;
        v38 = v16;
        v27 = v17;
        if ( (unsigned int)dword_1C0076048 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL) )
          {
            v20 = *(_QWORD *)(v11 + 78776) - *(_QWORD *)(v11 + 78712);
            v40 = v56;
            v48 = v27 - *(_QWORD *)(v11 + 78648);
            v49 = v16 - *(_QWORD *)(v11 + 78640);
            v50 = v15 - *(_QWORD *)(v11 + 78632);
            v51 = v14 - *(_QWORD *)(v11 + 78624);
            v52 = v13 - *(_QWORD *)(v11 + 78616);
            v41 = v20;
            v42 = *(_QWORD *)(v11 + 78760) - *(_QWORD *)(v11 + 78696);
            v44 = *(_QWORD *)(v11 + 78744) - *(_QWORD *)(v11 + 78680);
            v45 = *(_QWORD *)(v11 + 78728) - *(_QWORD *)(v11 + 78664);
            v46 = *(_QWORD *)(v11 + 78720) - *(_QWORD *)(v11 + 78656);
            v21 = *(_QWORD *)(v11 + 78736) - *(_QWORD *)(v11 + 78672);
            v53 = v12 - *(_QWORD *)(v11 + 78608);
            v30 = *((unsigned __int8 *)a1 + 2212);
            v22 = *((_QWORD *)a1 + 2);
            v28 = v3;
            v43 = v19;
            v47 = v21;
            v29 = v8;
            v23 = *(_QWORD *)(v22 + 404);
            v24[0] = 4;
            v54 = v23;
            v55 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
              v23,
              (unsigned int)&unk_1C0056C01,
              v18,
              v19,
              (__int64)&v55,
              (__int64)v24,
              (__int64)&v54,
              (__int64)&v30,
              (__int64)&v29,
              (__int64)&VSyncStatsNumMonitorPowerTransitions,
              (__int64)&v53,
              (__int64)&v52,
              (__int64)&v51,
              (__int64)&v50,
              (__int64)&v49,
              (__int64)&v48,
              (__int64)&v47,
              (__int64)&v46,
              (__int64)&v45,
              (__int64)&v44,
              (__int64)&v43,
              (__int64)&v42,
              (__int64)&v41,
              (__int64)&v40,
              (__int64)&v28);
            v15 = v37;
            v16 = v38;
          }
          v17 = v27;
        }
        *(_QWORD *)(v11 + 78616) = v13;
        *(_QWORD *)(v11 + 78608) = v12;
        *(_QWORD *)(v11 + 78624) = v14;
        *(_QWORD *)(v11 + 78632) = v15;
        *(_QWORD *)(v11 + 78640) = v16;
        *(_QWORD *)(v11 + 78648) = v17;
        *(_OWORD *)(v11 + 78656) = *(_OWORD *)(v11 + 78720);
        *(_OWORD *)(v11 + 78672) = *(_OWORD *)(v11 + 78736);
        *(_OWORD *)(v11 + 78688) = *(_OWORD *)(v11 + 78752);
        *(_OWORD *)(v11 + 78704) = *(_OWORD *)(v11 + 78768);
      }
      ++v8;
      v9 = (__int64 *)(v39 + 8);
      v39 += 8;
    }
    while ( v8 < v26 );
  }
}
