/*
 * XREFs of UsbhGetPortData @ 0x1C000F370
 * Callers:
 *     UsbhPCE_QueueDriverReset @ 0x1C0001734 (UsbhPCE_QueueDriverReset.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003078 (UsbhSyncResetDeviceInternal.c)
 *     UsbhHubProcessIsr @ 0x1C00083B0 (UsbhHubProcessIsr.c)
 *     UsbhLatchPdo @ 0x1C000F240 (UsbhLatchPdo.c)
 *     UsbhPCE_Suspend @ 0x1C000F8DC (UsbhPCE_Suspend.c)
 *     UsbhQueryChange @ 0x1C001A8AC (UsbhQueryChange.c)
 *     UsbhPCE_HardwareWake @ 0x1C001E4CC (UsbhPCE_HardwareWake.c)
 *     UsbhPCE_QueueChange @ 0x1C001E628 (UsbhPCE_QueueChange.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x1C0029398 (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002A2CC (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C002A6B4 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhGetExtendedHubInformation @ 0x1C002B4EC (UsbhGetExtendedHubInformation.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C002CE50 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C002D0CC (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhDisablePortIndicators @ 0x1C002E5F4 (UsbhDisablePortIndicators.c)
 *     UsbhEnablePortIndicators @ 0x1C002E7CC (UsbhEnablePortIndicators.c)
 *     UsbhPindicatorWorker @ 0x1C002EA80 (UsbhPindicatorWorker.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C002F130 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C002F1D4 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C002F2A0 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhOvercurrentResetWorker @ 0x1C002F330 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C002F5A0 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C002F720 (UsbhQueueOvercurrentReset.c)
 *     UsbhFdoRecordFailure @ 0x1C002FD78 (UsbhFdoRecordFailure.c)
 *     UsbhPCE_BusDisconnect @ 0x1C00338F4 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Disable @ 0x1C0033B7C (UsbhPCE_Disable.c)
 *     UsbhPCE_Enable @ 0x1C0033CC4 (UsbhPCE_Enable.c)
 *     UsbhPCE_HW_Stop @ 0x1C0033D98 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C0033E78 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_Resume @ 0x1C0033F88 (UsbhPCE_Resume.c)
 *     UsbhPCE_ResumeDone @ 0x1C003405C (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0034130 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C00342D0 (UsbhPCE_SoftDisconnect.c)
 *     UsbhQueuePauseChange @ 0x1C00344BC (UsbhQueuePauseChange.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00345D4 (UsbhQueueSoftConnectChange.c)
 *     UsbhCycleDevicePort @ 0x1C003681C (UsbhCycleDevicePort.c)
 *     UsbhDeregisterPdo @ 0x1C0036B38 (UsbhDeregisterPdo.c)
 *     UsbhFinishStart @ 0x1C0036EB4 (UsbhFinishStart.c)
 *     UsbhSoftDisconnectPdo @ 0x1C003975C (UsbhSoftDisconnectPdo.c)
 *     UsbhSyncResumePort @ 0x1C0039A30 (UsbhSyncResumePort.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C0039F80 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C003A10C (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C003A2BC (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C003A7CC (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003AA28 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoSetD0Warm @ 0x1C003B8A0 (UsbhFdoSetD0Warm.c)
 *     UsbhResetNotifyCompletion @ 0x1C003CC60 (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003EE8C (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003F5CC (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C003F8F4 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C00401D8 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhDriverNotFoundWorker @ 0x1C0041FF0 (UsbhDriverNotFoundWorker.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C0043854 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhSetSqmEnumerationData @ 0x1C0046618 (UsbhSetSqmEnumerationData.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004882C (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C0048AC8 (UsbhGetHubNodeInfo.c)
 *     UsbhWmiDoNothing @ 0x1C00497E0 (UsbhWmiDoNothing.c)
 *     UsbhWmiEnumerationFailure @ 0x1C00499C0 (UsbhWmiEnumerationFailure.c)
 *     UsbhWmiInsufficentBandwidth @ 0x1C0049A40 (UsbhWmiInsufficentBandwidth.c)
 *     UsbhWmiInsufficentPower @ 0x1C0049AC0 (UsbhWmiInsufficentPower.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x1C004AAB0 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x1C004AB40 (UsbhNotEnoughPowerPopup.c)
 *     UsbhResetPortData @ 0x1C0056EB0 (UsbhResetPortData.c)
 *     UsbhSetPortData @ 0x1C0056F4C (UsbhSetPortData.c)
 *     UsbhEtwLogPortInformation @ 0x1C005B45C (UsbhEtwLogPortInformation.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhGetPortData(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // rdx

  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v3 = *(_QWORD *)(a1 + 64);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v3 + 880)) & *(_DWORD *)(v3 + 884));
        *(_DWORD *)v4 = 1413771367;
        *(_QWORD *)(v4 + 16) = a2;
        *(_QWORD *)(v4 + 8) = 0LL;
        *(_QWORD *)(v4 + 24) = 0LL;
      }
    }
  }
  if ( !a2 )
    return 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a2 > *(unsigned __int8 *)(v5 + 2938) )
    return 0LL;
  v6 = *(_QWORD *)(v5 + 3056);
  if ( !v6 )
    return 0LL;
  v7 = a2;
  v8 = v6 + 2928LL * a2 - 2928;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v9 = *(_QWORD *)(v5 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
    *(_DWORD *)v9 = 1044672615;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = v7;
    *(_QWORD *)(v9 + 24) = v8;
  }
  return v8;
}
