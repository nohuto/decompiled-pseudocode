/*
 * XREFs of TppExecuteWaitTimerCallback @ 0x18008B8E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     TppETWCallbackDequeue @ 0x1801244E8 (TppETWCallbackDequeue.c)
 */

__int64 __fastcall TppExecuteWaitTimerCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  int v2; // edi
  _QWORD *v3; // rbx
  __int64 v5; // r8

  v2 = a2;
  v3 = (_QWORD *)(a2 - 200);
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v5 = 2147353478LL;
  if ( *(_BYTE *)v5 )
    TppETWCallbackDequeue(v3[18], v2, v3[10], v3[11], v3[13]);
  return TppExecuteWaitCallback(Instance, (__int64)v3, 0x102u);
}
