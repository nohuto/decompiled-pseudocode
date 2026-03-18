/*
 * XREFs of PopSetSystemAwayMode @ 0x14098A890
 * Callers:
 *     PopIssueActionRequest @ 0x140989CA4 (PopIssueActionRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KiSetTimerEx @ 0x140252820 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x1402AF940 (KeResetEvent.c)
 *     KeInitializeDpc @ 0x1402BF9A0 (KeInitializeDpc.c)
 *     PopDiagTraceEventNoPayload @ 0x140367640 (PopDiagTraceEventNoPayload.c)
 *     PopAcquireUserPresentSpinLock @ 0x14058DE7C (PopAcquireUserPresentSpinLock.c)
 *     PopReleaseUserPresentSpinLock @ 0x14058DEA0 (PopReleaseUserPresentSpinLock.c)
 *     PopNotifyConsoleUserPresent @ 0x1407D3744 (PopNotifyConsoleUserPresent.c)
 *     PopSetAwayModeStatus @ 0x14098A80C (PopSetAwayModeStatus.c)
 */

__int64 __fastcall PopSetSystemAwayMode(int a1)
{
  unsigned int v1; // ebx
  KIRQL v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0;
  if ( a1 )
  {
    if ( !byte_140C3D871 )
    {
      if ( byte_140C3D870 )
      {
        PopAcquireUserPresentSpinLock(&v3);
        KeResetEvent(&PopUserPresentCompletedEvent);
        dword_140C3D874 = 1;
        if ( PopUserPresentSetStatus )
        {
          PopReleaseUserPresentSpinLock(v3);
          KeWaitForSingleObject(&PopUserPresentCompletedEvent, Executive, 0, 0, 0LL);
        }
        else
        {
          PopReleaseUserPresentSpinLock(v3);
        }
        KeInitializeDpc(
          &PopAwayModeUserPresenceDpcObject,
          (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc,
          &dword_140C3D874);
        KiSetTimerEx(
          (__int64)&PopAwayModeUserPresenceTimer,
          -30000000LL,
          0,
          0,
          (__int64)&PopAwayModeUserPresenceDpcObject);
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_AWAYMODE);
        PopSetAwayModeStatus(1);
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  else if ( byte_140C3D871 )
  {
    PopSetAwayModeStatus(0);
    PopNotifyConsoleUserPresent(0, PopAwaymodeExitReason);
  }
  return v1;
}
