/*
 * XREFs of ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C0070A6C
 * Callers:
 *     ??0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C0068618 (--0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ??0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C0077908 (--0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 * Callees:
 *     memset @ 0x1C000AC00 (memset.c)
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x1C004FF48 (--0FxWaitLockInternal@@QEAA@XZ.c)
 *     ??0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C0067CD0 (--0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ??0FxEventQueue@@QEAA@E@Z @ 0x1C00811C4 (--0FxEventQueue@@QEAA@E@Z.c)
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x1C008120C (--0FxThreadedEventQueue@@QEAA@E@Z.c)
 */

void __fastcall FxPkgPnp::FxPkgPnp(
        FxPkgPnp *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *Device,
        unsigned __int16 Type)
{
  unsigned __int8 v5; // dl
  __int64 m_HistoryIndex; // r8
  unsigned int v7; // edx
  __int64 v8; // r8
  unsigned int v9; // edx
  __int64 v10; // r8
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  int v13; // eax
  int v14; // edx

  FxPackage::FxPackage(this, FxDriverGlobals, Device, Type);
  this->__vftable = (FxPkgPnp_vtbl *)FxPkgPnp::`vftable';
  FxWaitLockInternal::FxWaitLockInternal(&this->m_QueryInterfaceLock);
  FxWaitLockInternal::FxWaitLockInternal(&this->m_DeviceInterfaceLock);
  FxEventQueue::FxEventQueue(&this->m_PnpMachine, v5);
  this->m_PnpMachine.m_WorkItem.m_WorkItem = 0LL;
  *(_OWORD *)this->m_PnpMachine.m_Queue = 0LL;
  *(_OWORD *)&this->m_PnpMachine.m_Queue[4] = 0LL;
  this->m_PnpMachine.m_States.S = 0LL;
  m_HistoryIndex = this->m_PnpMachine.m_HistoryIndex;
  v7 = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PnpMachine.m_QueueDepth;
  this->m_PnpMachine.m_HistoryIndex = v7;
  this->m_PnpMachine.m_States.History[m_HistoryIndex] = 256;
  this->m_PnpMachine.m_FireAndForget = 0;
  FxThreadedEventQueue::FxThreadedEventQueue(&this->m_PowerMachine, v7);
  this->m_PowerMachine.m_WaitWakeLock.m_Lock = 0LL;
  this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList.Blink = &this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList;
  this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList.Flink = &this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList;
  this->m_PowerMachine.m_WaitWakeLock.m_DbgFlagIsInitialized = 1;
  this->m_PowerMachine.m_Queue.E = 0LL;
  this->m_PowerMachine.m_States.S = 0LL;
  v8 = this->m_PowerMachine.m_HistoryIndex;
  v9 = ((int)v8 + 1) % (unsigned int)this->m_PowerMachine.m_QueueDepth;
  this->m_PowerMachine.m_HistoryIndex = v9;
  this->m_PowerMachine.m_States.History[v8] = 768;
  *(_DWORD *)&this->m_PowerMachine.m_SingularEventsPresent = 0;
  FxThreadedEventQueue::FxThreadedEventQueue(&this->m_PowerPolicyMachine, v9);
  this->m_PowerPolicyMachine.m_Owner = 0LL;
  *(_OWORD *)this->m_PowerPolicyMachine.m_Queue = 0LL;
  *(_OWORD *)&this->m_PowerPolicyMachine.m_Queue[4] = 0LL;
  this->m_PowerPolicyMachine.m_States.S = 0LL;
  v10 = this->m_PowerPolicyMachine.m_HistoryIndex;
  this->m_PowerPolicyMachine.m_HistoryIndex = ((int)v10 + 1) % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
  this->m_PowerPolicyMachine.m_States.History[v10] = 1280;
  this->m_PowerPolicyMachine.m_SingularEventsPresent = 0;
  this->m_DeviceD0Entry.__vftable = (FxPnpDeviceD0Entry_vtbl *)FxPnpDeviceD0Entry::`vftable';
  this->m_DeviceD0Exit.__vftable = (FxPnpDeviceD0Exit_vtbl *)FxPnpDeviceD0Exit::`vftable';
  this->m_DeviceD0EntryPostHardwareEnabled.__vftable = (FxPnpDeviceD0EntryPostHwEnabled_vtbl *)FxPnpDeviceD0EntryPostHwEnabled::`vftable';
  this->m_DeviceD0ExitPreHardwareDisabled.__vftable = (FxPnpDeviceD0ExitPreHwDisabled_vtbl *)FxPnpDeviceD0ExitPreHwDisabled::`vftable';
  this->m_DevicePrepareHardware.__vftable = (FxPnpDevicePrepareHardware_vtbl *)FxPnpDevicePrepareHardware::`vftable';
  this->m_DeviceUsageNotification.m_Method = 0LL;
  this->m_DeviceUsageNotificationEx.m_Method = 0LL;
  this->m_DeviceRelationsQuery.m_Method = 0LL;
  this->m_DeviceD0Entry.m_Method = 0LL;
  this->m_DeviceD0EntryPostInterruptsEnabled.m_Method = 0LL;
  this->m_DeviceD0ExitPreInterruptsDisabled.m_Method = 0LL;
  this->m_DeviceD0Exit.m_Method = 0LL;
  this->m_DevicePrepareHardware.m_Method = 0LL;
  this->m_DeviceReleaseHardware.m_Method = 0LL;
  this->m_DeviceReleaseHardware.__vftable = (FxPnpDeviceReleaseHardware_vtbl *)FxPnpDeviceReleaseHardware::`vftable';
  v11 = 0;
  this->m_DeviceQueryStop.m_Method = 0LL;
  this->m_DeviceSurpriseRemoval.__vftable = (FxPnpDeviceSurpriseRemoval_vtbl *)FxPnpDeviceSurpriseRemoval::`vftable';
  this->m_DeviceQueryRemove.m_Method = 0LL;
  this->m_DeviceSurpriseRemoval.m_Method = 0LL;
  this->m_PowerCaps.D1Latency = -1;
  this->m_PowerCaps.D2Latency = -1;
  this->m_PowerCaps.D3Latency = -1;
  this->m_PnpCapsAddress = -1;
  this->m_PnpCapsUINumber = -1;
  v12 = 0;
  this->m_DmaEnablerList = 0LL;
  this->m_RemovalDeviceList = 0LL;
  this->m_UsageDependentDeviceList = 0LL;
  this->m_PnpState.Value = 10922;
  this->m_PnpCaps.Value = 174762;
  *(_DWORD *)&this->m_PowerCaps.Caps = 117770922;
  do
  {
    v13 = 5 << v12;
    v14 = ~(15 << v12);
    v12 += 4;
    v11 = v13 | v14 & v11;
    this->m_PowerCaps.States = v11;
  }
  while ( v12 < 0x1C );
  memset(&this->m_D3ColdInterface, 0, sizeof(this->m_D3ColdInterface));
  *(_DWORD *)this->m_SpecialSupport = 0;
  *(_WORD *)&this->m_SpecialSupport[4] = 0;
  *(_OWORD *)this->m_SpecialFileCount = 0LL;
  *(_QWORD *)&this->m_SpecialFileCount[4] = 0LL;
  this->m_PowerThreadInterface.Interface.InterfaceReference = (void (__fastcall *)(void *))FxPkgPnp::_PowerThreadInterfaceReference;
  this->m_PowerThreadInterface.Interface.InterfaceDereference = FxPkgPnp::_PowerThreadInterfaceDereference;
  this->m_PowerThreadInterface.PowerThreadEnqueue = FxPkgPnp::_PowerThreadEnqueue;
  this->m_PowerThread = 0LL;
  *(_DWORD *)&this->m_SystemPowerAction = 0;
  this->m_PowerThreadInterfaceReferenceCount = 1;
  this->m_PowerThreadEvent = 0LL;
  this->m_DeviceStopCount = 0;
  *(_WORD *)&this->m_FailedAction = 0;
  this->m_PendingChildCount = 0;
  this->m_QueryInterfaceHead.Next = 0LL;
  this->m_DeviceInterfaceHead.Next = 0LL;
  this->m_DeviceInterfacesCanBeEnabled = 0;
  this->m_PendingPnPIrp = 0LL;
  this->m_PendingSystemPowerIrp = 0LL;
  this->m_PendingDevicePowerIrp = 0LL;
  this->m_PnpStateCallbacks = 0LL;
  this->m_PowerStateCallbacks = 0LL;
  this->m_PowerPolicyStateCallbacks = 0LL;
  this->m_SelfManagedIoMachine = 0LL;
  this->m_EnumInfo = 0LL;
  this->m_BusEnumRetries = 0;
  *(_DWORD *)&this->m_PowerThreadInterface.Interface.Size = 65576;
  this->m_PowerThreadInterface.Interface.Context = this;
  *(_DWORD *)&this->m_Failed = 84214016;
  this->m_BusInformation.BusTypeGuid = 0LL;
  *(_QWORD *)&this->m_BusInformation.LegacyBusType = 0LL;
  this->m_InterruptListHead.Blink = &this->m_InterruptListHead;
  this->m_InterruptListHead.Flink = &this->m_InterruptListHead;
  this->m_Resources = 0LL;
  this->m_ResourcesRaw = 0LL;
  this->m_InterruptObjectCount = 0;
  *(_QWORD *)&this->m_WakeInterruptCount = 0LL;
  *(_WORD *)&this->m_SystemWokenByWakeInterrupt = 0;
  this->m_AchievedStart = 0;
  this->m_SharedPower.m_WaitWakeIrp = 0LL;
  *(_WORD *)&this->m_SharedPower.m_WaitWakeOwner = 0;
  this->m_DeviceRemoveProcessed = 0LL;
  *(_LIST_ENTRY *)&this->m_IoConnectInterruptEx = WPP_GLOBAL_WDF_Control.Queue.ListEntry;
  *(_OWORD *)&this->m_IoReportInterruptActive = *(_OWORD *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfChannels;
  this->m_ObjectFlags |= 0x800u;
  this->m_ReleaseHardwareAfterDescendantsOnFailure = 0;
  this->m_SleepStudy = 0LL;
  this->m_SleepStudyPowerRefIoCount = 0;
  this->m_SleepStudyTrackReferences = 1;
  this->m_CompanionTarget = 0LL;
  this->m_SetDeviceFailedAttemptRestartWorkItem = 0LL;
  this->m_CompanionTargetStatus = -1073741275;
}
