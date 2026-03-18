/*
 * XREFs of UsbhException @ 0x1C004A0A8
 * Callers:
 *     UsbhPdoSetD0_Finish @ 0x1C0001A6C (UsbhPdoSetD0_Finish.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0001D80 (UsbhCompletePdoWakeIrps.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003078 (UsbhSyncResetDeviceInternal.c)
 *     UsbhHubIsr @ 0x1C0004510 (UsbhHubIsr.c)
 *     UsbhPdoSetD0 @ 0x1C00055F0 (UsbhPdoSetD0.c)
 *     UsbhSshSuspendHub @ 0x1C00063E0 (UsbhSshSuspendHub.c)
 *     UsbhFdoD0Worker_Action @ 0x1C00070B0 (UsbhFdoD0Worker_Action.c)
 *     UsbhHubProcessIsr @ 0x1C00083B0 (UsbhHubProcessIsr.c)
 *     UsbhSshResumeDownstream @ 0x1C0009090 (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetD0Cold @ 0x1C0009FA0 (UsbhFdoSetD0Cold.c)
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 *     UsbhSshResumeUpstream @ 0x1C000D344 (UsbhSshResumeUpstream.c)
 *     UsbhSuspendPort @ 0x1C000D884 (UsbhSuspendPort.c)
 *     UsbhCheckHubPowerStatus @ 0x1C000D988 (UsbhCheckHubPowerStatus.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C000EC40 (UsbhSyncSuspendPdoPort.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0015150 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0016AF0 (UsbhHubDispatchPortEvent.c)
 *     UsbhQueryPortState @ 0x1C0018E60 (UsbhQueryPortState.c)
 *     UsbhSyncPowerOnPorts @ 0x1C001A270 (UsbhSyncPowerOnPorts.c)
 *     UsbhQueryChange @ 0x1C001A8AC (UsbhQueryChange.c)
 *     UsbhResumeSuspendedPort @ 0x1C001AA6C (UsbhResumeSuspendedPort.c)
 *     UsbhResetPort @ 0x1C001AB54 (UsbhResetPort.c)
 *     UsbhFdoColdStartPdo @ 0x1C001B954 (UsbhFdoColdStartPdo.c)
 *     UsbhCreateDevice @ 0x1C001BC70 (UsbhCreateDevice.c)
 *     UsbhInitializeDevice @ 0x1C001E90C (UsbhInitializeDevice.c)
 *     UsbhBusSuspend_Action @ 0x1C001ED64 (UsbhBusSuspend_Action.c)
 *     UsbhConfigureUsbHub @ 0x1C00293DC (UsbhConfigureUsbHub.c)
 *     UsbhFdoDeviceControl @ 0x1C0029C60 (UsbhFdoDeviceControl.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002A2CC (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhGetDescriptor @ 0x1C002AFDC (UsbhGetDescriptor.c)
 *     UsbhGetHubClassDescriptor @ 0x1C002B6CC (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C002B864 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetHubDeviceInformation @ 0x1C002BAD8 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetStatus @ 0x1C002C278 (UsbhGetStatus.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C002CC20 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetHubRemoteWake @ 0x1C002CF94 (UsbhSetHubRemoteWake.c)
 *     UsbhSetPortPower @ 0x1C002D208 (UsbhSetPortPower.c)
 *     UsbhSetPortIndicator @ 0x1C002EB18 (UsbhSetPortIndicator.c)
 *     UsbhFdoCyclePdoPort @ 0x1C002F9D0 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoRecordFailure @ 0x1C002FD78 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C002FF70 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C0030998 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhParseDescriptors @ 0x1C00316BC (UsbhParseDescriptors.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C003227C (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetMsOsContainerID @ 0x1C0032674 (UsbhGetMsOsContainerID.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00345D4 (UsbhQueueSoftConnectChange.c)
 *     UsbhClearTt @ 0x1C003664C (UsbhClearTt.c)
 *     UsbhDisablePort @ 0x1C0036D8C (UsbhDisablePort.c)
 *     UsbhFinishStart @ 0x1C0036EB4 (UsbhFinishStart.c)
 *     UsbhGetBillboardInfo @ 0x1C003743C (UsbhGetBillboardInfo.c)
 *     UsbhGetDeviceInformation @ 0x1C0037880 (UsbhGetDeviceInformation.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C00380C0 (UsbhHubResetIrqPipeWorker.c)
 *     UsbhPortResumeTimeout @ 0x1C0038490 (UsbhPortResumeTimeout.c)
 *     UsbhQueryHubState @ 0x1C00386EC (UsbhQueryHubState.c)
 *     UsbhSetupDevice @ 0x1C0038CE8 (UsbhSetupDevice.c)
 *     UsbhSyncResumePort @ 0x1C0039A30 (UsbhSyncResumePort.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C003B740 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhFdoSetD0Warm @ 0x1C003B8A0 (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C003C838 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C003DB64 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003E348 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C003E67C (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C003E8F4 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C003EBB8 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003EE8C (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C003F11C (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003F5CC (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C003F8F4 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C003FC08 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C003FEF8 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C00401D8 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C00404C8 (UsbhIoctlResetStuckHub.c)
 *     UsbhIoctlValidateParameters @ 0x1C0040958 (UsbhIoctlValidateParameters.c)
 *     UsbhFdoPnp_QueryPnpDeviceState @ 0x1C0042540 (UsbhFdoPnp_QueryPnpDeviceState.c)
 *     UsbhFdoPnp_StartDevice @ 0x1C0042970 (UsbhFdoPnp_StartDevice.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C0043690 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C00491A0 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhBusIfAddDevice @ 0x1C004B330 (UsbhBusIfAddDevice.c)
 *     UsbhGetBusInterface @ 0x1C004BB30 (UsbhGetBusInterface.c)
 *     UsbhHandleOvercurrent @ 0x1C004C3B4 (UsbhHandleOvercurrent.c)
 *     UsbhHardErrorInvalidData @ 0x1C004C5F0 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C004C6E0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortConnect @ 0x1C004C820 (UsbhPortConnect.c)
 *     UsbhPortResumeFailed @ 0x1C004D050 (UsbhPortResumeFailed.c)
 *     UsbhReset1DebounceError @ 0x1C004D4B0 (UsbhReset1DebounceError.c)
 *     UsbhReset1Timeout @ 0x1C004D800 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C004DA10 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C004DFD0 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E0C8 (UsbhSetEnumerationFailed.c)
 *     UsbhGetLanguageIdString @ 0x1C004FB20 (UsbhGetLanguageIdString.c)
 *     UsbhGetProductIdString @ 0x1C004FF10 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1C00500D4 (UsbhGetSerialNumber.c)
 *     UsbhCheckDeviceErrata @ 0x1C0050C04 (UsbhCheckDeviceErrata.c)
 *     UsbhCheckHubErrata @ 0x1C0050F60 (UsbhCheckHubErrata.c)
 *     UsbhValidateSerialNumberString @ 0x1C00526D8 (UsbhValidateSerialNumberString.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C0054170 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C00548CC (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C0054C70 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C00552A0 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0055CA0 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C0002868 (UsbhQueueWorkItemEx.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhReferenceListAdd @ 0x1C001AD54 (UsbhReferenceListAdd.c)
 *     UsbhReferenceListRemove @ 0x1C001DCEC (UsbhReferenceListRemove.c)
 *     memmove @ 0x1C001F540 (memmove.c)
 *     UsbhExceptionTrace @ 0x1C004A388 (UsbhExceptionTrace.c)
 *     UsbhExceptionWorker @ 0x1C004A720 (UsbhExceptionWorker.c)
 *     UsbhGetExceptionDispatch @ 0x1C004A814 (UsbhGetExceptionDispatch.c)
 *     UsbhEtwLogHubException @ 0x1C005B04C (UsbhEtwLogHubException.c)
 */

void __fastcall UsbhException(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        int a6,
        int a7,
        _BYTE *a8,
        int a9,
        char a10)
{
  int v11; // esi
  _DWORD *v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r15
  int v19; // eax
  unsigned __int16 v20; // si
  unsigned int v21; // r14d
  unsigned int v22; // r13d
  __int64 Pool2; // rax
  _DWORD *v24; // rbx
  char *v25; // rcx
  unsigned int v26; // ecx
  _OWORD *v27; // rdx
  __int64 v28; // rax
  _OWORD *v29; // rax
  __int64 ExceptionDispatch; // [rsp+40h] [rbp-48h]

  v11 = a2;
  v14 = FdoExt(a1);
  v15 = -1LL;
  ExceptionDispatch = UsbhGetExceptionDispatch(a1, a3);
  v16 = -1LL;
  v17 = *(_QWORD *)(ExceptionDispatch + 8);
  do
    ++v16;
  while ( *(_BYTE *)(v17 + v16) );
  UsbhEtwLogHubException(a1, v11, a3, a6, a7, v17, v16 + 1);
  v18 = 16LL;
  if ( a10 )
  {
    v19 = v14[640];
    if ( (v19 & 0x10) != 0 )
      return;
    v14[640] = v19 | 0x10;
  }
  v20 = a5;
  if ( a5 > 0xFFFF || (unsigned __int16)a5 > 0x1000u )
    v20 = 4096;
  Log(a1, 128, 1751480369, (__int64)a4, v20);
  if ( (v14[640] & 0x2000) != 0 )
  {
    do
      ++v15;
    while ( a8[v15] );
    v21 = v15 + 1;
    v22 = v21 + v20 + 600;
    Pool2 = ExAllocatePool2(64LL, v22, 1112885333LL);
    v24 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 4) = v22;
      if ( (int)UsbhReferenceListAdd(a1, Pool2, 1381516648) < 0 )
      {
LABEL_23:
        ExFreePoolWithTag(v24, 0);
        return;
      }
      *v24 = 1381516648;
      *((_QWORD *)v24 + 1) = a1;
      *((_WORD *)v24 + 16) = v20;
      if ( v20 )
      {
        *((_QWORD *)v24 + 5) = v24 + 150;
        memmove(v24 + 150, a4, v20);
      }
      v25 = (char *)v24 + v20 + 600;
      *((_QWORD *)v24 + 74) = v25;
      memmove(v25, a8, v21);
      v24[146] = a9;
      v24[6] = a7;
      v24[7] = a6;
      v24[4] = a3;
      *((_WORD *)v24 + 10) = a2;
      *((_QWORD *)v24 + 8) = MEMORY[0xFFFFF78000000014];
      if ( *((_QWORD *)v14 + 111) )
      {
        v26 = v14[220];
        v27 = v24 + 18;
        do
        {
          v28 = v14[221] & v26;
          v26 = v28 + 1;
          v29 = (_OWORD *)(*((_QWORD *)v14 + 111) + 32 * v28);
          *v27 = *v29;
          v27 += 2;
          *(v27 - 1) = v29[1];
          --v18;
        }
        while ( v18 );
      }
      UsbhExceptionTrace(a1, v24, ExceptionDispatch);
      if ( !KeGetCurrentIrql() && !*(_QWORD *)(ExceptionDispatch + 16) )
      {
        UsbhExceptionWorker(a1, a2, v24);
        return;
      }
      if ( (UsbhQueueWorkItemEx(a1, 1u, (int)UsbhExceptionWorker, (__int64)v24, a2, 1230469221, 0LL) & 0xC0000000) == 0xC0000000 )
      {
        UsbhReferenceListRemove(a1, (__int64)v24);
        goto LABEL_23;
      }
    }
  }
}
