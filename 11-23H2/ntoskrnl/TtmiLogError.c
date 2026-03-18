/*
 * XREFs of TtmiLogError @ 0x1409A8344
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1409A2560 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1409A2860 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1409A2920 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x1409A2AAC (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1409A2C7C (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSetInputWakeCapability @ 0x1409A2F18 (TtmiSetInputWakeCapability.c)
 *     TtmpCallAssignedToTerminal @ 0x1409A2FDC (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x1409A30F8 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1409A31A8 (TtmpCallSetInputMode.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1409A34E0 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPushTerminalState @ 0x1409A3AC4 (TtmpPushTerminalState.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x1409A3B94 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmInitCurrentSession @ 0x1409A3FA0 (TtmInitCurrentSession.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409A4214 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409A42A8 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409A4324 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1409A43C0 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1409A4558 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x1409A4758 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1409A47E8 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x1409A4880 (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x1409A4930 (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x1409A4ADC (TtmiSessionsRundown.c)
 *     TtmiSetDisplayPowerRequest @ 0x1409A4B9C (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1409A4E1C (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x1409A4EB8 (TtmiWriteEventToAllQueues.c)
 *     TtmpAcquireSessionById @ 0x1409A4F30 (TtmpAcquireSessionById.c)
 *     TtmpFindPowerRequestEntryById @ 0x1409A5298 (TtmpFindPowerRequestEntryById.c)
 *     TtmpInsertPowerRequestToSession @ 0x1409A5468 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSessionWorker @ 0x1409A5930 (TtmpSessionWorker.c)
 *     TtmpSetDisplayRequestEnded @ 0x1409A5B60 (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1409A5D4C (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1409A5E1C (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1409A5EE0 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmDispatchApi @ 0x1409A5F8C (TtmDispatchApi.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1409A6238 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x1409A6388 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1409A6430 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1409A656C (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1409A665C (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x1409A6708 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x1409A67CC (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1409A6868 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1409A6924 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1409A69D0 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1409A6A84 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x1409A6B40 (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiCreateTerminal @ 0x1409AADA8 (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x1409AB09C (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x1409AB54C (TtmiTerminalMonitorControl.c)
 *     TtmiCreateEventQueue @ 0x1409ABFEC (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409AC140 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1409AC2A8 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetProcessSessionIdEx @ 0x14036FA00 (PsGetProcessSessionIdEx.c)
 *     _tlgCreate1Sz_char @ 0x1403C431C (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

void __fastcall TtmiLogError(const CHAR *a1, int a2, int a3, int a4)
{
  int ProcessSessionId; // eax
  int v9; // r8d
  int v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  int v13; // [rsp+3Ch] [rbp-3Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp-39h] BYREF
  int *v15; // [rsp+60h] [rbp-19h]
  int v16; // [rsp+68h] [rbp-11h]
  int v17; // [rsp+6Ch] [rbp-Dh]
  _BYTE v18[16]; // [rsp+70h] [rbp-9h] BYREF
  int *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  int *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  int *v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]

  if ( TtmpBreakOnError
    && (!dword_140D531EC || dword_140D531EC == a2)
    && (!dword_140D531F0 || dword_140D531F0 == a3)
    && (!dword_140D531F4 || dword_140D531F4 == a4) )
  {
    __debugbreak();
  }
  if ( (unsigned int)dword_140D53918 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D53918, 2LL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v17 = 0;
      v10 = ProcessSessionId;
      v16 = 4;
      v15 = &v10;
      tlgCreate1Sz_char((__int64)v18, a1);
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v19 = &v11;
      v20 = v9;
      v22 = &v12;
      v25 = &v13;
      v23 = v9;
      v26 = v9;
      v11 = a2;
      v12 = a3;
      v13 = a4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140D53918,
        (unsigned __int8 *)&word_140032B46,
        0LL,
        0LL,
        7u,
        &v14);
    }
  }
}
