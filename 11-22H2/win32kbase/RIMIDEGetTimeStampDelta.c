/*
 * XREFs of RIMIDEGetTimeStampDelta @ 0x1C0195710
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0196118 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1C0131A10 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     RIMIDEGetQpcBasedTouchStackTime @ 0x1C01956C0 (RIMIDEGetQpcBasedTouchStackTime.c)
 *     RIMIDEValidateInjectionQpcCount @ 0x1C01974D4 (RIMIDEValidateInjectionQpcCount.c)
 *     RIMIDEValidateInjectionTime @ 0x1C01975DC (RIMIDEValidateInjectionTime.c)
 *     WPP_RECORDER_AND_TRACE_SF_didi @ 0x1C0197CC4 (WPP_RECORDER_AND_TRACE_SF_didi.c)
 */

__int64 __fastcall RIMIDEGetTimeStampDelta(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v3; // r11d
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int v6; // r9d
  int v7; // edx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // r13
  int v13; // r10d
  __int64 v14; // rdx
  unsigned int v15; // ebp
  char v16; // bl
  int v17; // ebx
  int v18; // r11d
  char v19; // dl
  unsigned int v20; // ebp
  int v21; // eax
  int v22; // edx
  int v23; // r8d
  int v24; // ecx
  int v25; // r13d
  unsigned int v26; // ecx
  int v27; // r8d
  char v28; // dl
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  int v31; // [rsp+60h] [rbp-68h]
  __int64 v32; // [rsp+68h] [rbp-60h]
  __int64 v33; // [rsp+70h] [rbp-58h]
  int v34; // [rsp+D0h] [rbp+8h]
  unsigned int *v35; // [rsp+E0h] [rbp+18h]
  unsigned int v36; // [rsp+E8h] [rbp+20h]

  v35 = a3;
  v3 = *(_DWORD *)(a2 + 64);
  v4 = a1 + 272;
  v5 = *(_QWORD *)(a2 + 80);
  v6 = 0;
  v34 = v3;
  v7 = 200;
  if ( !a1 )
    v4 = 200LL;
  if ( (*(_DWORD *)v4 & 0x80u) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 456);
    v10 = a1 + 544;
    if ( !a1 )
      v10 = 472LL;
    v11 = *(_QWORD *)(v9 + 48);
    v12 = (_DWORD *)(v9 + 20);
    v13 = *(_DWORD *)(v9 + 28);
    v31 = v13;
    v14 = *(_QWORD *)v10;
    v32 = *(_QWORD *)v10;
    v33 = v11;
    if ( !*(_DWORD *)(*(_QWORD *)v10 + 1008LL) )
    {
      *v12 = 0;
      *(_QWORD *)(v9 + 24) = 0LL;
      *(_DWORD *)(v9 + 36) = 0;
      *(_QWORD *)(v9 + 40) = 0LL;
      *(_QWORD *)(v9 + 48) = 0LL;
      *(_DWORD *)(v9 + 56) = 0;
    }
    if ( v3 && v5 || *v12 && v5 || *(_QWORD *)(v9 + 40) && v3 )
    {
      v15 = 0;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (v16 = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v16 = 0;
      }
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = v16;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_didi(WPP_GLOBAL_Control->AttachedDevice, v14, (_DWORD)a3, 0);
      }
      return v15;
    }
    if ( v5 || *(_QWORD *)(v9 + 40) )
    {
      v25 = 0;
      v17 = 1;
      LOBYTE(v6) = *(_DWORD *)(v14 + 1008) == 0;
      v36 = 1;
      if ( !(unsigned int)RIMIDEValidateInjectionQpcCount(v5, v11, *(_QWORD *)(v14 + 800), v6, *(_DWORD *)(v9 + 56)) )
      {
        v15 = 0;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (v28 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          v28 = 0;
        }
        if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_ii(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v28,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gRimLog,
            2u,
            1u,
            0x39u,
            (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
            v5,
            v33);
        return v15;
      }
      if ( v5 <= *(_QWORD *)(v9 + 40) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2591);
      v29 = 10000 * (v5 - *(_QWORD *)(v9 + 40)) / gliQpcFreq.QuadPart;
      v30 = 10000 * (v5 - *(_QWORD *)(v9 + 40)) % gliQpcFreq.QuadPart;
      v20 = v29;
      if ( *(_DWORD *)(v32 + 1008) )
      {
        if ( (_DWORD)v29 == *(_DWORD *)(v9 + 32) )
        {
          v36 = 0;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v30) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v30) = 0;
          }
          if ( (_BYTE)v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v30,
              v27,
              (_DWORD)gRimLog,
              2,
              1,
              59,
              (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
          }
        }
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v5;
        v20 = 0;
      }
      goto LABEL_47;
    }
    v17 = 1;
    LOBYTE(v6) = *(_DWORD *)(v14 + 1008) == 0;
    v36 = 1;
    v15 = 1;
    if ( !(unsigned int)RIMIDEValidateInjectionTime(v3, v13, *(_DWORD *)(v14 + 792), v6, *(_DWORD *)(v9 + 36)) )
    {
      v15 = 0;
      v36 = 0;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v19 = 0;
      }
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_AND_TRACE_SF_dd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v19,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gRimLog,
          2u,
          1u,
          0x38u,
          (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
          v18,
          v31);
        v18 = v34;
      }
    }
    if ( !v15 )
      return v15;
    v20 = 10 * (v18 - *v12);
    v21 = RIMIDEGetQpcBasedTouchStackTime();
    if ( !*(_DWORD *)(v32 + 1008) )
    {
      v24 = v34;
      v20 = 0;
      *v12 = v34;
      v25 = 1;
      *(_DWORD *)(v9 + 24) = v21;
LABEL_48:
      *(_DWORD *)(v9 + 32) = v20;
      if ( v25 )
      {
        if ( !v31 || v24 )
          v17 = 0;
        *(_DWORD *)(v9 + 36) = v17;
        *(_DWORD *)(v9 + 28) = v24;
      }
      else
      {
        if ( !v33 || v5 )
          v17 = 0;
        *(_DWORD *)(v9 + 56) = v17;
        *(_QWORD *)(v9 + 48) = v5;
      }
      *v35 = v20;
      return v36;
    }
    if ( !v20 )
    {
      v26 = *(_DWORD *)(v9 + 32);
      v20 = v21 - *(_DWORD *)(v9 + 24);
      if ( v20 <= v26 )
      {
        if ( v26 - v20 >= 5 )
        {
          v36 = 0;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v22) = 0;
          }
          if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v22,
              v23,
              (_DWORD)gRimLog,
              2,
              1,
              58,
              (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
            v25 = 1;
            goto LABEL_47;
          }
        }
        else
        {
          v20 = v26 + 1;
        }
      }
    }
    v25 = 1;
LABEL_47:
    v24 = v34;
    goto LABEL_48;
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
      (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
  }
  return 0LL;
}
