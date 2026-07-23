/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x1403A1A34
 * Callers:
 *     PopThermalWorker @ 0x140847B30 (PopThermalWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140302D18 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x140590088 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x1405900E0 (PopThermalStandbyNotify.c)
 *     PopThermalWriteShutdownToRegistry @ 0x140590610 (PopThermalWriteShutdownToRegistry.c)
 *     PopDiagTraceThermalStateChange @ 0x140595114 (PopDiagTraceThermalStateChange.c)
 *     PopTraceCr3Mitigated @ 0x1405957D4 (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x140595870 (PopTraceCr3Tripped.c)
 *     PopTraceZoneCr3Mitigated @ 0x140596598 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405966C0 (PopTraceZoneCr3Tripped.c)
 *     PopIsHibernateSupported @ 0x140873844 (PopIsHibernateSupported.c)
 *     PopUpdateOverThrottledCount @ 0x14098B3F8 (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1409923D8 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1409924CC (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x1409A1018 (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x1409A103C (PopSqmThermalHibernate.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

void __fastcall PopCheckAndHandleThermalConditions(__int64 a1)
{
  __int64 v1; // rbp
  char v3; // si
  bool v4; // bl
  char v5; // dl
  char IsHibernateSupported; // bl
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v8; // rbp
  __int64 v9; // r8
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rcx
  char v13; // di

  v1 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  if ( *(_BYTE *)(a1 + 210) && !*(_BYTE *)(a1 + 71) )
  {
    v3 = 1;
    PopSqmThermalCriticalShutdown();
    PopDiagTraceZoneCriticalTripPointExceeded(a1 + 112, v1);
    *(_BYTE *)(a1 + 71) = 1;
  }
  if ( *(_BYTE *)(a1 + 209) )
  {
    PopDiagTraceZoneS4TripPointExceeded(a1 + 112, v1);
    PopSqmThermalHibernate(a1);
    PopAcquirePolicyLock();
    IsHibernateSupported = PopIsHibernateSupported(&PopCapabilities);
    if ( !IsHibernateSupported )
      v3 = 1;
    PopReleasePolicyLock();
    v4 = IsHibernateSupported != 0;
    if ( !v3 )
      goto LABEL_20;
  }
  else
  {
    v4 = 0;
    if ( !v3 )
      goto LABEL_4;
  }
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v1, 0x6D546F50u);
  v8 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v9 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v9 = 0LL;
  v10 = a1 + 128;
  if ( *(_BYTE *)(a1 + 228) )
    v10 = 0LL;
  PopThermalWriteShutdownToRegistry((v9 + 128) & -(__int64)(v9 != 0), v10, -v9);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x6D546F50u);
LABEL_20:
  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
  if ( v4 )
    byte_140C3C751 = 1;
  if ( v3 )
    byte_140C3C753 = 1;
  PopReleaseRwLock(&PopThermalStateTransitionContext);
  PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
LABEL_4:
  v5 = *(_BYTE *)(a1 + 224) != 0;
  if ( *(_BYTE *)(a1 + 73) != v5 )
  {
    *(_BYTE *)(a1 + 73) = v5;
    PopUpdateOverThrottledCount(a1);
  }
  if ( *(_BYTE *)(a1 + 72) != *(_BYTE *)(a1 + 211) )
  {
    PopDiagTraceThermalStateChange(
      *(_QWORD *)(a1 + 48),
      *(unsigned __int8 *)(a1 + 211),
      POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
    v11 = *(_BYTE *)(a1 + 211);
    *(_BYTE *)(a1 + 72) = v11;
    if ( v11 )
    {
      if ( ++dword_140C3C774 == 1 )
      {
        byte_140C3C77C = 1;
        ++dword_140C3C778;
        PopTraceCr3Tripped();
      }
      PopTraceZoneCr3Tripped((unsigned int)dword_140C3C778, a1);
    }
    else
    {
      PopTraceZoneCr3Mitigated((unsigned int)dword_140C3C778, a1);
      --dword_140C3C774;
    }
    if ( dword_140C3C774 )
    {
      v13 = 1;
    }
    else
    {
      v13 = 0;
      PopThermalStandbyEndTracking(0LL);
      PopTraceCr3Mitigated((unsigned int)dword_140C3C778);
      if ( HIBYTE(word_140C3C770) )
      {
        PopThermalStandbyNotify(0LL);
        HIBYTE(word_140C3C770) = 0;
LABEL_37:
        PopReleaseRwLock(&PopSystemThermalInfo);
        return;
      }
    }
    if ( !v4 && v13 && (_BYTE)word_140C3C770 && !HIBYTE(word_140C3C770) )
    {
      LOBYTE(v12) = 1;
      PopThermalStandbyNotify(v12);
      word_140C3C770 = 256;
    }
    goto LABEL_37;
  }
}
