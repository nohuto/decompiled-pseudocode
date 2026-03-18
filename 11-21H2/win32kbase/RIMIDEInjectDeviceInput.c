/*
 * XREFs of RIMIDEInjectDeviceInput @ 0x1C019D008
 * Callers:
 *     NtUserInjectDeviceInput @ 0x1C015C9F0 (NtUserInjectDeviceInput.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C019D494 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C00043A4 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1C0189090 (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1C019AA00 (-RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1C019E460 (RIMIDESetLinkCollectionUsageValues.c)
 */

__int64 __fastcall RIMIDEInjectDeviceInput(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  __int64 v4; // rsi
  unsigned int v5; // r15d
  __int64 v8; // rax
  int v9; // ebp
  char v10; // di
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  _WORD *v14; // rbx
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  int v18; // eax
  int v19; // edx
  int v20; // r8d
  int v21; // ecx
  char v22; // r9
  char v23; // r11
  unsigned int v24; // ecx
  __int64 v25; // rax
  int v26; // edx
  int v27; // edx
  int v29; // [rsp+60h] [rbp-58h]
  int v30; // [rsp+64h] [rbp-54h] BYREF
  int v31; // [rsp+68h] [rbp-50h]
  int *v32; // [rsp+70h] [rbp-48h]
  unsigned __int16 v33; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+D0h] [rbp+18h]

  v34 = a3;
  v3 = *(_QWORD *)(a1 + 424);
  v4 = a1 + 88;
  v5 = 0;
  v33 = 0;
  v30 = 0;
  v8 = *(_QWORD *)(a1 + 472);
  v9 = 0;
  v10 = 1;
  v32 = 0LL;
  v29 = 1;
  v31 = 1;
  if ( !*(_DWORD *)(v8 + 16) )
    *(_DWORD *)(v8 + 16) = 1;
  RIMLockExclusive(v3 + 104);
  InputTraceLogging::RIM::InjectInput(v4);
  if ( *(_BYTE *)(v3 + 81) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        (_DWORD)gRimLog,
        2,
        1,
        51,
        (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids);
    }
    v9 = -1073741637;
  }
  else
  {
    v13 = *(_DWORD *)(v4 + 200);
    if ( (v13 & 0x10) != 0 || (v13 & 8) != 0 )
      v32 = &v30;
    memset(*(void **)(*(_QWORD *)(v4 + 456) + 24LL), 0, *(unsigned __int16 *)(*(_QWORD *)(v4 + 456) + 44LL));
    if ( a3 )
    {
      v14 = (_WORD *)(a2 + 8);
      v15 = 1;
      while ( (unsigned int)RIMIDEInjectionIndexToLinkIndex((struct RIMDEV *)v4, (unsigned __int16)*v14, &v33, v15) )
      {
        v18 = *(_DWORD *)(v4 + 200);
        if ( ((v18 & 0x10) != 0 || (v18 & 8) != 0) && *(v14 - 4) == 13 && *(v14 - 3) == 84 )
          v31 = *((_DWORD *)v14 - 1);
        if ( !(unsigned int)RIMIDESetLinkCollectionUsageValues(v4, v16, (unsigned int)a2 + 12 * v5, v33, (__int64)v32) )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v10 = 0;
          }
          if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v26 = *(unsigned __int16 *)(a2 + 12LL * v5);
            LOBYTE(v26) = v10;
            LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_dDD(
              WPP_GLOBAL_Control->AttachedDevice,
              v26,
              v20,
              *(unsigned __int16 *)(a2 + 12LL * v5 + 2),
              2);
          }
          goto LABEL_48;
        }
        if ( *v14 )
        {
          v15 = 0;
          v29 = 0;
        }
        else
        {
          v15 = v29;
        }
        ++v5;
        v14 += 6;
        if ( v5 >= v34 )
        {
          v21 = *(_DWORD *)(v4 + 200);
          if ( (v21 & 8) == 0 && (v21 & 0x10) == 0 )
            goto LABEL_33;
          v22 = v30;
          v23 = v31;
          if ( v31 == v30 )
          {
            v24 = v21 & 0xFFFFFFF7;
          }
          else
          {
            v24 = v21 | 8;
            v9 = -1073741436;
            *(_DWORD *)(v4 + 200) = v24;
            LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
            if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_dd(
                WPP_GLOBAL_Control->AttachedDevice,
                v19,
                v20,
                (_DWORD)gRimLog,
                2,
                1,
                50,
                (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
                v23,
                v22);
              v24 = *(_DWORD *)(v4 + 200);
            }
          }
          *(_DWORD *)(v4 + 200) = v24 & 0xFFFFFFEF;
          if ( v9 >= 0 )
          {
LABEL_33:
            RIMLockExclusive(v3 + 792);
            v25 = *(_QWORD *)(v4 + 456);
            *(_DWORD *)(v4 + 256) = 0;
            *(_QWORD *)(v4 + 264) = *(unsigned __int16 *)(v25 + 44);
            rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v3, (struct RIMDEV *)v4, 1);
            *(_QWORD *)(v3 + 800) = 0LL;
            ExReleasePushLockExclusiveEx(v3 + 792, 0LL);
            KeLeaveCriticalRegion();
          }
          goto LABEL_57;
        }
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = 49;
        LOBYTE(v27) = v10;
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dDD(
          WPP_GLOBAL_Control->AttachedDevice,
          v27,
          v17,
          *(unsigned __int16 *)(a2 + 12LL * v5 + 2),
          2);
      }
    }
LABEL_48:
    v9 = -1073741668;
  }
LABEL_57:
  *(_QWORD *)(v3 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
