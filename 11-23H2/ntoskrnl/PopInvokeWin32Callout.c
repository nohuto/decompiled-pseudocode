/*
 * XREFs of PopInvokeWin32Callout @ 0x1407D3B8C
 * Callers:
 *     PopEventCalloutDispatch @ 0x1403B677C (PopEventCalloutDispatch.c)
 *     PoSessionBuiltinPanelState @ 0x14059E470 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x14059E4FC (PoSessionEngagementUpdate.c)
 *     PopDispatchStateCallout @ 0x140682AC8 (PopDispatchStateCallout.c)
 *     PopSendSessionInfo @ 0x1406831FC (PopSendSessionInfo.c)
 *     PopNotifyConsoleUserPresent @ 0x1407D3A14 (PopNotifyConsoleUserPresent.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x1407D3AD0 (PopPowerRequestCallbackDisplayRequired.c)
 *     PopBroadcastSessionInfo @ 0x140825214 (PopBroadcastSessionInfo.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140993D24 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopControlMonitor @ 0x140997F70 (PopControlMonitor.c)
 *     PoSessionPowerControl @ 0x14099BDBC (PoSessionPowerControl.c)
 *     PopWin32CalloutWatchdogCallback @ 0x14099BE70 (PopWin32CalloutWatchdogCallback.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x1402936E0 (PdcCreateWatchdogAroundClientCall.c)
 *     MmGetSessionId @ 0x1402A3ED0 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x14035EE90 (MmGetNextSession.c)
 *     ZwPowerInformation @ 0x14041BCD0 (ZwPowerInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsInvokeWin32Callout @ 0x1406AF880 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PopInvokeWin32Callout(int a1, __int64 a2, int a3, int *a4)
{
  char v6; // si
  unsigned int v7; // r14d
  _QWORD *NextSession; // rdi
  int v9; // r14d
  int *p_SessionId; // r15
  int v12; // [rsp+38h] [rbp-49h]
  int SessionId; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 OutputBuffer; // [rsp+40h] [rbp-41h] BYREF
  _QWORD InputBuffer[18]; // [rsp+48h] [rbp-39h] BYREF

  SessionId = 0;
  v12 = 0;
  OutputBuffer = 0LL;
  v6 = 0;
  v7 = 0;
  memset((char *)InputBuffer + 4, 0, 0x5CuLL);
  LODWORD(InputBuffer[0]) = 21;
  if ( ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, &OutputBuffer, 8u) < 0 )
    return v7;
  NextSession = (_QWORD *)MmGetNextSession(0LL);
  do
  {
    if ( NextSession && *(_QWORD *)(NextSession[171] + 784LL) != PdcCreateWatchdogAroundClientCall() )
    {
      if ( a3 == 2 )
      {
        NextSession = (_QWORD *)MmGetNextSession(NextSession);
        if ( NextSession )
          continue;
      }
      else
      {
        v7 = -1073741811;
      }
      v6 = 1;
    }
    else
    {
      if ( a3 == 2 && NextSession )
      {
        v9 = 1;
        SessionId = MmGetSessionId((__int64)NextSession);
        p_SessionId = &SessionId;
        NextSession = (_QWORD *)MmGetNextSession(NextSession);
        if ( !NextSession )
          v6 = 1;
      }
      else
      {
        v6 = 1;
        v9 = a3;
        p_SessionId = a4;
        if ( a4 )
          v12 = *a4;
        else
          v12 = -1;
      }
      if ( OutputBuffer )
      {
        memset(InputBuffer, 0, 0x60uLL);
        LODWORD(InputBuffer[0]) = 21;
        InputBuffer[1] = OutputBuffer;
        LODWORD(InputBuffer[3]) = 417;
        LODWORD(InputBuffer[2]) = 1000 * PopWin32kCalloutWatchdogTimeoutSeconds;
        HIDWORD(InputBuffer[2]) = v12;
        InputBuffer[4] = KeGetCurrentThread();
        InputBuffer[10] = InputBuffer;
        InputBuffer[9] = &PopWin32CalloutWatchdogCallback;
        ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
      }
      v7 = PsInvokeWin32Callout(a1, a2, v9, (__int64)p_SessionId);
      if ( OutputBuffer )
      {
        memset(InputBuffer, 0, 0x60uLL);
        LODWORD(InputBuffer[0]) = 21;
        InputBuffer[1] = OutputBuffer;
        ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
      }
    }
  }
  while ( !v6 );
  if ( OutputBuffer )
  {
    memset(InputBuffer, 0, 0x60uLL);
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = OutputBuffer;
    LOBYTE(InputBuffer[11]) = 1;
    ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
  }
  return v7;
}
