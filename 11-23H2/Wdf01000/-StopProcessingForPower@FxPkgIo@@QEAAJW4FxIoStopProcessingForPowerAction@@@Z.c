/*
 * XREFs of ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0062CBC
 * Callers:
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C006A1BC (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C006B1D0 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006EA80 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C006ECE4 (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006F300 (-PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006FDE0 (-PowerStartSelfManagedIoFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006FE10 (-PowerStartSelfManagedIoFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x1C000F97E (-GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z.c)
 *     WPP_IFR_SF_Lq @ 0x1C0062E44 (WPP_IFR_SF_Lq.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C0066984 (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0066A68 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 */

__int64 __fastcall FxPkgIo::StopProcessingForPower(FxPkgIo *this, FxIoStopProcessingForPowerAction Action)
{
  const void *id; // rax
  unsigned int flags; // edx
  unsigned int v6; // r8d
  unsigned __int16 v7; // r9
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r8
  _SINGLE_LIST_ENTRY *Next; // rdi
  _SINGLE_LIST_ENTRY *v11; // rbx
  _SINGLE_LIST_ENTRY *v12; // rsi
  _SINGLE_LIST_ENTRY *v13; // r14
  const _GUID *v15; // [rsp+20h] [rbp-38h]
  _SINGLE_LIST_ENTRY queueList; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF

  irql = 0;
  id = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_Lq(this->m_Globals, flags, v6, v7, v15, flags, id);
  queueList.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, v8);
  this->m_PowerStateOn = 0;
  if ( Action == FxIoStopProcessingForPowerPurgeManaged || Action == FxIoStopProcessingForPowerPurgeNonManaged )
    this->m_QueuesAreShuttingDown = 1;
  FxPkgIo::GetIoQueueListLocked(this, &queueList, (void *)2);
  FxNonPagedObject::Unlock(this, irql, v9);
  Next = queueList.Next;
  if ( Action == FxIoStopProcessingForPowerHold )
  {
    v11 = queueList.Next;
    if ( !queueList.Next )
      return 0LL;
    do
    {
      FxIoQueue::StartPowerTransitionOff((FxIoQueue *)&v11[-116]);
      v11 = v11->Next;
    }
    while ( v11 );
  }
  if ( Next )
  {
    v12 = Next->Next;
    while ( 1 )
    {
      v13 = v12;
      FxIoQueue::StopProcessingForPower((FxIoQueue *)&Next[-116], Action);
      Next->Next = 0LL;
      ((void (__fastcall *)(_SINGLE_LIST_ENTRY *, __int64, __int64, const char *))Next[-116].Next[2].Next)(
        &Next[-116],
        1702326128LL,
        1249LL,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
      if ( !v12 )
        break;
      v12 = v12->Next;
      Next = v13;
    }
  }
  return 0LL;
}
