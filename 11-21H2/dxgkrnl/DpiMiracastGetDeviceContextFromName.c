/*
 * XREFs of DpiMiracastGetDeviceContextFromName @ 0x1C038D29C
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C0063340 (DxgkMiracastStartMiracastSession.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C006423C (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C038E8A8 (DxgkMiracastQueryMiracastStatus.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C001C320 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x1C0060FBC (DpiMiracastAddRefMiracastDeviceContext.c)
 */

__int64 __fastcall DpiMiracastGetDeviceContextFromName(PCWSTR SourceString)
{
  __int64 i; // rbx
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  String1 = 0LL;
  RtlInitUnicodeString(&String1, SourceString);
  AcquireMiniportListMutex();
  for ( i = qword_1C01308A0; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &qword_1C01308A0 )
    {
      i = 0LL;
      goto LABEL_6;
    }
    if ( !RtlCompareUnicodeString(&String1, (PCUNICODE_STRING)(i + 160), 1u) )
      break;
  }
  DpiMiracastAddRefMiracastDeviceContext(i, i);
LABEL_6:
  _InterlockedExchange64(&qword_1C01304D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  return i;
}
