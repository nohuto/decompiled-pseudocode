/*
 * XREFs of RIMIDEGetTimeStampDelta @ 0x1C019CB10
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C019D494 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1C0145ED8 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     RIMIDEGetQpcBasedTouchStackTime @ 0x1C019CA88 (RIMIDEGetQpcBasedTouchStackTime.c)
 *     RIMIDEValidateInjectionQpcCount @ 0x1C019E5C8 (RIMIDEValidateInjectionQpcCount.c)
 *     RIMIDEValidateInjectionTime @ 0x1C019E674 (RIMIDEValidateInjectionTime.c)
 *     WPP_RECORDER_AND_TRACE_SF_didi @ 0x1C019ED30 (WPP_RECORDER_AND_TRACE_SF_didi.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEGetTimeStampDelta(__int64 a1, __int64 a2, unsigned int *a3, int a4)
{
  int v4; // r14d
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  int v7; // edx
  int v8; // ebx
  unsigned int v9; // r12d
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rsi
  int v15; // ecx
  __int64 v16; // r15
  __int64 v17; // rax
  int v18; // r13d
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r11
  unsigned int v22; // esi
  int v23; // eax
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  unsigned int v26; // ecx
  PDEVICE_OBJECT v27; // rcx
  __int16 v28; // r9
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  int v32; // [rsp+A0h] [rbp+8h]
  __int64 v33; // [rsp+A8h] [rbp+10h]
  unsigned int *v34; // [rsp+B0h] [rbp+18h]

  v34 = a3;
  v4 = *(_DWORD *)(a2 + 64);
  v5 = a1 + 288;
  v6 = *(_QWORD *)(a2 + 80);
  v7 = 200;
  v8 = 1;
  if ( !a1 )
    v5 = 200LL;
  v9 = 1;
  if ( (*(_DWORD *)v5 & 0x80u) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 472);
    v12 = a1 + 560;
    v13 = 472;
    if ( !a1 )
      v12 = 472LL;
    v14 = *(_QWORD *)(v11 + 48);
    v15 = *(_DWORD *)(v11 + 28);
    v32 = v15;
    v16 = *(_QWORD *)v12;
    v33 = v14;
    if ( !*(_DWORD *)(*(_QWORD *)v12 + 1008LL) )
    {
      *(_QWORD *)(v11 + 20) = 0LL;
      *(_DWORD *)(v11 + 28) = 0;
      *(_DWORD *)(v11 + 36) = 0;
      *(_QWORD *)(v11 + 40) = 0LL;
      *(_QWORD *)(v11 + 48) = 0LL;
      *(_DWORD *)(v11 + 56) = 0;
    }
    if ( v4 && v6 || *(_DWORD *)(v11 + 20) && v6 || (v17 = *(_QWORD *)(v11 + 40)) != 0 && v4 )
    {
      v9 = 0;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        LOBYTE(v8) = 0;
      }
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = v8;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_didi(WPP_GLOBAL_Control->AttachedDevice, v13, (_DWORD)a3, a4);
      }
      return v9;
    }
    if ( v6 || v17 )
    {
      v18 = 0;
      if ( !(unsigned int)RIMIDEValidateInjectionQpcCount(
                            v6,
                            v14,
                            *(_QWORD *)(v16 + 800),
                            *(_DWORD *)(v16 + 1008) == 0,
                            *(_DWORD *)(v11 + 56)) )
      {
        v9 = 0;
        LOBYTE(v29) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_ii(
            WPP_GLOBAL_Control->AttachedDevice,
            v29,
            v25,
            (_DWORD)gRimLog,
            2,
            1,
            57,
            (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
            v6,
            v14);
        }
        return v9;
      }
      v30 = *(_QWORD *)(v11 + 40);
      if ( v6 <= v30 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v25);
        v30 = *(_QWORD *)(v11 + 40);
      }
      v31 = 10000 * (v6 - v30) / gliQpcFreq.QuadPart;
      v24 = 10000 * (v6 - v30) % gliQpcFreq.QuadPart;
      v22 = v31;
      if ( !*(_DWORD *)(v16 + 1008) )
      {
        *(_QWORD *)(v11 + 40) = v6;
        goto LABEL_67;
      }
      if ( (_DWORD)v31 != *(_DWORD *)(v11 + 32) )
        goto LABEL_78;
      v9 = 0;
      v27 = WPP_GLOBAL_Control;
      LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_78;
      v28 = 59;
    }
    else
    {
      v18 = 1;
      if ( !(unsigned int)RIMIDEValidateInjectionTime(
                            v4,
                            v15,
                            *(_DWORD *)(v16 + 792),
                            *(_DWORD *)(v16 + 1008) == 0,
                            *(_DWORD *)(v11 + 36)) )
      {
        v9 = 0;
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
            56,
            (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
            v4,
            v32);
        }
        return v9;
      }
      v22 = 10 * (v4 - *(_DWORD *)(v11 + 20));
      v23 = RIMIDEGetQpcBasedTouchStackTime(v21);
      if ( !*(_DWORD *)(v16 + 1008) )
      {
        *(_DWORD *)(v11 + 20) = v4;
        *(_DWORD *)(v11 + 24) = v23;
LABEL_67:
        v22 = 0;
        goto LABEL_78;
      }
      if ( v22 )
        goto LABEL_78;
      v26 = *(_DWORD *)(v11 + 32);
      v22 = v23 - *(_DWORD *)(v11 + 24);
      if ( v22 > v26 )
        goto LABEL_78;
      if ( v26 - v22 < 5 )
      {
        v22 = v26 + 1;
LABEL_78:
        *(_DWORD *)(v11 + 32) = v22;
        if ( v18 )
        {
          if ( !v32 || v4 )
            v8 = 0;
          *(_DWORD *)(v11 + 36) = v8;
          *(_DWORD *)(v11 + 28) = v4;
        }
        else
        {
          if ( !v33 || v6 )
            v8 = 0;
          *(_DWORD *)(v11 + 56) = v8;
          *(_QWORD *)(v11 + 48) = v6;
        }
        *v34 = v22;
        return v9;
      }
      v9 = 0;
      v27 = WPP_GLOBAL_Control;
      LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_78;
      v28 = 58;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v27->AttachedDevice,
      v24,
      v25,
      (_DWORD)gRimLog,
      2,
      1,
      v28,
      (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids);
    goto LABEL_78;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      2,
      1,
      54,
      (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids);
  }
  return 0LL;
}
