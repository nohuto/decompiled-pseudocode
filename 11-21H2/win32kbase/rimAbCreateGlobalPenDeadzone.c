/*
 * XREFs of rimAbCreateGlobalPenDeadzone @ 0x1C0186AD4
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0187FE0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall rimAbCreateGlobalPenDeadzone(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  _OWORD *v4; // rbp
  _OWORD *v5; // rsi
  unsigned __int64 v6; // rdi
  _UNKNOWN **result; // rax

  v4 = a3;
  v5 = a2;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFF78000000004uLL, a2, a3);
  *(_DWORD *)(a1 + 516) = 1;
  *(_DWORD *)(a1 + 728) = v6 + 250;
  *(_OWORD *)(a1 + 520) = *v5;
  *(_OWORD *)(a1 + 536) = v5[1];
  *(_OWORD *)(a1 + 552) = v5[2];
  *(_OWORD *)(a1 + 568) = v5[3];
  *(_OWORD *)(a1 + 584) = v5[4];
  *(_OWORD *)(a1 + 600) = v5[5];
  *(_OWORD *)(a1 + 616) = v5[6];
  *(_OWORD *)(a1 + 632) = *v4;
  *(_OWORD *)(a1 + 648) = v4[1];
  *(_OWORD *)(a1 + 664) = v4[2];
  *(_OWORD *)(a1 + 680) = v4[3];
  *(_OWORD *)(a1 + 696) = v4[4];
  *(_OWORD *)(a1 + 712) = v4[5];
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_dd(
                          WPP_GLOBAL_Control->AttachedDevice,
                          (_DWORD)a2,
                          (_DWORD)a3,
                          (_DWORD)gRimLog,
                          4,
                          1,
                          10,
                          (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids,
                          *(_DWORD *)(a1 + 672),
                          *(_DWORD *)(a1 + 676));
  }
  return result;
}
