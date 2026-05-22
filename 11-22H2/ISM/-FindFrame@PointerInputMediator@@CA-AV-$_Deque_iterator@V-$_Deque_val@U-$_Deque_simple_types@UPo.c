/*
 * XREFs of ?FindFrame@PointerInputMediator@@CA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@I@Z @ 0x18010B97C
 * Callers:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x180067818 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18006DB30 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 *__fastcall PointerInputMediator::FindFrame(__int64 *a1, int a2)
{
  __int64 v2; // r8
  __int64 *v3; // rbx
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // r9

  v2 = qword_1802780C8;
  v3 = a1;
  v4 = PointerInputMediator::s_frameQueue;
  v5 = qword_1802780C8 + qword_1802780D0;
  if ( PointerInputMediator::s_frameQueue )
    v6 = *(_QWORD *)PointerInputMediator::s_frameQueue;
  else
    v6 = 0LL;
  while ( v2 != v5 )
  {
    a1 = *(__int64 **)(*(_QWORD *)(v6 + 8) + 8 * (v2 & (*(_QWORD *)(v6 + 16) - 1LL)));
    if ( *(_DWORD *)a1 == a2 )
      break;
    ++v2;
  }
  v3[1] = 0LL;
  *v3 = v4;
  v3[2] = v2;
  if ( v2 == v5 )
    MicrosoftTelemetryAssertTriggeredArgs((__int64)a1, 0x20000, 125);
  return v3;
}
