/*
 * XREFs of StorPortUnitIdleState @ 0x1C0025000
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001DD00 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C0002B10 (RaidAdapterPoFxActivateComponent.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C000C7B4 (StorUpdateCrashDumpPowerReady.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidGetStorPoFxComponent @ 0x1C000C8F8 (RaidGetStorPoFxComponent.c)
 *     RaidIsUnitControlSupported @ 0x1C000C930 (RaidIsUnitControlSupported.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00136DC (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C0024F72 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     McTemplateK0pquuuqq_EtwWriteTransfer @ 0x1C0047AD4 (McTemplateK0pquuuqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitIdleState(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // r8d
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // ebp
  char *StorPoFxComponent; // rax
  KSPIN_LOCK *v11; // rcx
  __int64 v12; // rcx
  int v13; // r8d
  void *v14; // rdx
  __int64 v15; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x10) != 0 )
      McTemplateK0pquuuqq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitIdleStateStart,
        v6,
        **(_QWORD **)(a1 + 1744),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a2,
        a3);
    if ( a3 )
    {
      v8 = *(_QWORD *)(a1 + 1744);
      *(_QWORD *)(a1 + 2008) = MEMORY[0xFFFFF78000000008];
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 108LL) & 1) != 0 )
        *(_DWORD *)(v8 + 32) |= 0x40u;
      else
        *(_DWORD *)(v8 + 32) &= ~0x40u;
    }
    else
    {
      ++*(_DWORD *)(a1 + 2060);
      if ( *(_QWORD *)(a1 + 2008) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 0x40) != 0
          || (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 108LL) & 1) != 0 )
        {
          v7 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 2008);
          *(_QWORD *)(a1 + 2016) += v7 / 0x2710;
          if ( v7 / 0x2710 >= 0x2710 )
            ++*(_DWORD *)(a1 + 2068);
        }
        *(_QWORD *)(a1 + 2008) = 0LL;
      }
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 16LL) = a3;
    if ( *(_DWORD *)(a1 + 920) && a3 )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(a1 + 24));
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 4) != 0 && RaidIsUnitControlSupported(a1, 7) )
    {
      v9 = 1;
      StorPoFxComponent = RaidGetStorPoFxComponent(*(int **)(*(_QWORD *)(a1 + 1744) + 8LL), a2);
      if ( StorPoFxComponent && *(_DWORD *)StorPoFxComponent == 2 )
        v9 = *((_DWORD *)StorPoFxComponent + 8);
      if ( StorageD3InModernStandbyEnabled )
        v9 = 1;
      if ( a3 <= v9
        && *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4832LL)
        && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3432), 1, 0)
        && !RaidAdapterPoFxActivateComponent(*(_QWORD *)(a1 + 24)) )
      {
        v11 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 24) + 80LL);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
        v12 = *(_QWORD *)(a1 + 24);
        if ( *(int *)(v12 + 308) > 1 )
        {
          *(_BYTE *)(a1 + 1912) = 1;
          *(_DWORD *)(a1 + 1916) = a3;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(v12 + 4816), (PSLIST_ENTRY)(a1 + 1936));
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( !StorEtwLoggingEnabled || (byte_1C00799E2 & 0x10) == 0 )
            goto LABEL_52;
          v14 = &EventUnitIdleStateQueued;
LABEL_51:
          McTemplateK0pquuuqq_EtwWriteTransfer(
            *(_QWORD *)(a1 + 24),
            (_DWORD)v14,
            v13,
            **(_QWORD **)(a1 + 1744),
            *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
            *(_BYTE *)(a1 + 96),
            *(_BYTE *)(a1 + 97),
            *(_BYTE *)(a1 + 98),
            a2,
            a3);
LABEL_52:
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
          return;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      RaidUnitSendPoFxIdleStateToMiniport(a1);
      if ( a3 > v9 && *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4832LL) )
      {
LABEL_41:
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3432), 0, 1) == 1 )
          RaidAdapterPoFxIdleComponent(*(_QWORD *)(a1 + 24), 0LL, 0LL);
      }
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v15 + 110) & 0x40) != 0
        && (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 0x1000) != 0
        && *(_QWORD *)(v15 + 4832) )
      {
        if ( !a3 )
        {
          if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3432), 1, 0) )
            RaidAdapterPoFxActivateComponent(*(_QWORD *)(a1 + 24));
          goto LABEL_45;
        }
        goto LABEL_41;
      }
    }
LABEL_45:
    if ( *(_DWORD *)(a1 + 920) && !a3 )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(a1 + 24));
    PoFxCompleteIdleState(**(_QWORD **)(a1 + 1744), a2);
    if ( !StorEtwLoggingEnabled || (byte_1C00799E2 & 0x10) == 0 )
      goto LABEL_52;
    v14 = &EventUnitIdleStateStop;
    goto LABEL_51;
  }
}
