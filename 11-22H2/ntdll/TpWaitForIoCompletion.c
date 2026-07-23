/*
 * XREFs of TpWaitForIoCompletion @ 0x180087A50
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     TppIopValidateIo @ 0x18004BCC4 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x180068030 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x180125E80 (TppETWCallbackCancel.c)
 */

void __cdecl TpWaitForIoCompletion(PTP_IO Io, LOGICAL CancelPendingCallbacks)
{
  __int64 v4; // rcx

  if ( (unsigned int)TppIopValidateIo((_PEB_LDR_DATA *)Io, 0LL, 0LL) )
  {
    if ( CancelPendingCallbacks )
      CancelPendingCallbacks = _InterlockedExchange((volatile __int32 *)Io + 70, 0);
    TppBarrierAdjust((_RTL_SRWLOCK *)Io + 7, -CancelPendingCallbacks, 1);
    if ( CancelPendingCallbacks )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v4 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v4 = 2147353478LL;
      if ( *(_BYTE *)v4 )
        TppETWCallbackCancel(
          *((_QWORD *)Io + 18),
          (_DWORD)Io + 200,
          (_DWORD)Io + 80,
          *((_QWORD *)Io + 11),
          *((_QWORD *)Io + 13),
          CancelPendingCallbacks);
    }
  }
}
