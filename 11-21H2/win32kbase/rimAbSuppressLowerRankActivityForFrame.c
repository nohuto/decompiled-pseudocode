/*
 * XREFs of rimAbSuppressLowerRankActivityForFrame @ 0x1C0187718
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0188460 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E756C (RIMCmActiveContactsEnd.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0187010 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C0187540 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1C0189090 (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMGetPointerInputType @ 0x1C019369C (RIMGetPointerInputType.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C01A614C (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C01A62A0 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C01A6AF4 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01AD8CC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01ADA80 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01B609C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C01B6120 (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01B61C4 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C01B6870 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01B68C8 (RIMCmIsContactDeliveringAnyData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityForFrame(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r14d
  int v6; // r15d
  LARGE_INTEGER v7; // rdx
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER v9; // r8
  unsigned __int64 v10; // r13
  int v11; // edi
  __int64 active; // rax
  __int64 v13; // r8
  __int64 v14; // xmm1_8
  _DWORD *v15; // rdi
  int v16; // ecx
  int v17; // edx
  int v18; // r8d
  __int64 ButtonContact; // rdi
  __int64 v20; // rcx
  int v21; // edx
  int v22; // r8d
  int v23; // edx
  int v24; // r8d
  int v26; // edx
  int v27; // r8d
  int v28; // [rsp+28h] [rbp-41h]
  __int128 v29; // [rsp+60h] [rbp-9h] BYREF
  __int64 v30; // [rsp+70h] [rbp+7h]
  __int64 v31; // [rsp+78h] [rbp+Fh] BYREF
  int v32; // [rsp+80h] [rbp+17h]
  __int64 v33; // [rsp+88h] [rbp+1Fh]
  unsigned int v34; // [rsp+D8h] [rbp+6Fh]
  __int64 v36; // [rsp+E8h] [rbp+7Fh]

  v5 = 1;
  v6 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v36 = *(_QWORD *)(a2 + 864) + 1LL;
  v34 = *(_DWORD *)(a2 + 836) + 1;
  if ( !gDeviceArbitrationType )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))MicrosoftTelemetryAssertTriggeredNoArgsKM)(
      0xFFFFF78000000004uLL,
      (LARGE_INTEGER)v7.QuadPart,
      (LARGE_INTEGER)v9.QuadPart);
  v11 = RIMGetPointerInputType(a2);
  if ( v11 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(&v31, a2);
    v14 = *(_QWORD *)(active + 16);
    v29 = *(_OWORD *)active;
    v30 = v14;
    while ( 1 )
    {
      RIMCmActiveContactsEnd((__int64)&v31, a2, v13);
      if ( (_QWORD)v29 == v31 && DWORD2(v29) == v32 && v30 == v33 )
        break;
      v15 = (_DWORD *)(v30 - 16);
      if ( (*(_DWORD *)(v30 + 16) & 2) == 0 )
        __int2c();
      if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v15) )
      {
        if ( gDeviceArbitrationType != 3
          || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
          || (v16 = v15[13], (unsigned int)v10 <= v16 + 500)
          || !v16 )
        {
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts(v15 + 662, a2, a3, 0) )
          {
            if ( !v6 )
            {
              RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
              if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                                    a1,
                                    *(_QWORD *)(a2 + 16),
                                    (LARGE_INTEGER)PerformanceCounter.QuadPart) )
                return 0;
              v6 = 1;
            }
            RIMCmAddContactSuppressionReasons(a2, v15);
            LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_dDD(
                WPP_GLOBAL_Control->AttachedDevice,
                v17,
                v18,
                16,
                4,
                v28,
                16,
                (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids,
                *v15,
                v15[2],
                v15[665]);
            }
            RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), (_DWORD)v15, v36, v34, 1);
          }
        }
      }
      RIMCmActiveContactsNext(a2, &v29);
    }
    if ( (unsigned int)rimAbShouldButtonContactBeSuppressed((__int64)a1, a2, v6) )
    {
      ButtonContact = RIMCmGetButtonContact(a2);
      RIMCmAddContactSuppressionReasons(v20, ButtonContact);
      if ( v6 )
      {
        LOBYTE(v21) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v21,
            v22,
            (_DWORD)gRimLog,
            4,
            1,
            19,
            (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids);
        }
      }
      else
      {
        RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                              a1,
                              *(_QWORD *)(a2 + 16),
                              (LARGE_INTEGER)PerformanceCounter.QuadPart) )
        {
          LOBYTE(v23) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v23,
              v24,
              (_DWORD)gRimLog,
              4,
              1,
              17,
              (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids);
          }
          return 0;
        }
        LOBYTE(v23) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v23,
            v24,
            (_DWORD)gRimLog,
            4,
            1,
            18,
            (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids);
        }
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), ButtonContact, v36, v34, 1);
      }
    }
    else if ( !v6 )
    {
      return v5;
    }
    RIMInsertSimulatedKeepAliveStateForActiveContacts(a1, *(_QWORD *)(a2 + 16), v36, v34);
    v5 = RIMCompletePointerDeviceFrame(a1, *(struct RIMDEV **)(a2 + 16));
    LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v26,
        v27,
        (_DWORD)gRimLog,
        4,
        1,
        20,
        (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids,
        v5);
    }
  }
  return v5;
}
