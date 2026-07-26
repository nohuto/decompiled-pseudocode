/*
 * XREFs of ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C002ED48
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     NdisAllocateRefCount @ 0x1C001BED0 (NdisAllocateRefCount.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0024BB8 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C002EF44 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C01126D0 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisMInitializeMiniportBlockFront@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C014D710 (-ndisMInitializeMiniportBlockFront@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

void __fastcall ndisMInitializeMiniportBlock(struct _NDIS_M_DRIVER_BLOCK *a1, struct _NDIS_MINIPORT_BLOCK *a2, int a3)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  __int64 v7; // rbx
  struct NDISWATCHDOG__ *Watchdog; // rax
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *value; // rcx

  memset(a2, 0, a3);
  _NDIS_MINIPORT_BLOCK::_NDIS_MINIPORT_BLOCK(a2);
  a2->DriverHandle = a1;
  ndisMInitializeMiniportBlockFront(a2, a3);
  *(_QWORD *)&a2->DriverPowerState = 1LL;
  a2->AdminStatus = NET_IF_ADMIN_STATUS_UP;
  a2->InstanceNumber = _InterlockedExchangeAdd(&ndisInstanceNumber, 1u) + 1;
  a2->NicSwitchList.Blink = &a2->NicSwitchList;
  a2->NicSwitchList.Flink = &a2->NicSwitchList;
  a2->VFList.Blink = &a2->VFList;
  a2->VFList.Flink = &a2->VFList;
  a2->VPortList.Blink = &a2->VPortList;
  a2->VPortList.Flink = &a2->VPortList;
  a2->SynchronousOidCalls.Blink = &a2->SynchronousOidCalls;
  a2->SynchronousOidCalls.Flink = &a2->SynchronousOidCalls;
  KeInitializeEvent(&a2->OpenReadyEvent.Event, NotificationEvent, 0);
  KeInitializeEvent(&a2->PowerD0CompleteEvent, NotificationEvent, 1u);
  KeInitializeSpinLock(&a2->PowerStateLock);
  KeInitializeSemaphore(&a2->PMPatternSemaphore, 1, 1);
  KeInitializeSemaphore(&a2->PMOffloadSemaphore, 1, 1);
  a2->DevicePowerStateWorkItem.Parameter = 0LL;
  a2->DevicePowerStateWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ndisPowerIrpWorker;
  a2->SystemPowerStateWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ndisPowerIrpWorker;
  a2->DevicePowerStateWorkItem.List.Flink = 0LL;
  a2->InterfaceUpdateWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ndisMUpdateInterfaceWorker;
  a2->SystemPowerStateWorkItem.Parameter = 0LL;
  a2->SystemPowerStateWorkItem.List.Flink = 0LL;
  a2->InterfaceUpdateWorkItem.Parameter = a2;
  a2->InterfaceUpdateWorkItem.List.Flink = 0LL;
  IoInitializeRemoveLockEx(&a2->RemoveLock, 0x2020444Eu, 0, 0, 0x20u);
  a2->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)NdisAllocateRefCount(0x70u, 0);
  a2->NsiRefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)NdisAllocateRefCount(5u, 0);
  DriverHandle = a2->DriverHandle;
  if ( DriverHandle->HookType != NdisMiniportHookDriverTypeWdi
    || (value = DriverHandle->UnhookedCharacteristics.__ptr_.__value_) == 0LL
    || (v7 = 5464LL, value->OidRequestHandler == DriverHandle->MiniportDriverCharacteristics.OidRequestHandler) )
  {
    v7 = 5456LL;
  }
  Watchdog = ndisAllocateWatchdog();
  wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::reset(
    (struct NDISWATCHDOG__ **)(&a2->Header.Type + v7),
    Watchdog);
  EtwActivityIdControl(3u, &a2->PnPActivityID);
}
