/*
 * XREFs of StorPortUnitIdleState @ 0x1C0024F60
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011250 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00046D0 (RaidIsUnitControlSupported.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00089A8 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00089E4 (RaidAdapterPoFxActivateComponent.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C00124B0 (StorUpdateCrashDumpPowerReady.c)
 *     RaidGetStorPoFxComponent @ 0x1C00125F8 (RaidGetStorPoFxComponent.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C0024ED0 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     McTemplateK0pquuuqq_EtwWriteTransfer @ 0x1C004A8DC (McTemplateK0pquuuqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitIdleState(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // r8d
  _QWORD **v7; // r14
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdx
  unsigned int v10; // r12d
  char *StorPoFxComponent; // rax
  __int64 v12; // rcx
  KSPIN_LOCK *v13; // rcx
  __int64 v14; // rcx
  int v15; // r8d
  void *v16; // rdx
  __int64 v17; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
      McTemplateK0pquuuqq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitIdleStateStart,
        v6,
        **(_QWORD **)(a1 + 1792),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a2,
        a3);
    v7 = (_QWORD **)(a1 + 1792);
    if ( a3 )
    {
      v9 = *v7;
      *(_QWORD *)(a1 + 2056) = MEMORY[0xFFFFF78000000008];
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 108LL) & 1) != 0 )
        *((_DWORD *)v9 + 8) |= 0x40u;
      else
        *((_DWORD *)v9 + 8) &= ~0x40u;
    }
    else
    {
      ++*(_DWORD *)(a1 + 2108);
      if ( *(_QWORD *)(a1 + 2056) )
      {
        if ( ((*v7)[4] & 0x40) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 108LL) & 1) != 0 )
        {
          v8 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 2056);
          *(_QWORD *)(a1 + 2064) += v8 / 0x2710;
          if ( v8 / 0x2710 >= 0x2710 )
            ++*(_DWORD *)(a1 + 2116);
        }
        *(_QWORD *)(a1 + 2056) = 0LL;
      }
    }
    *((_DWORD *)*v7 + 4) = a3;
    if ( *(_DWORD *)(a1 + 976) && a3 )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(a1 + 24));
    if ( ((*v7)[4] & 4) != 0 && RaidIsUnitControlSupported(a1, 7) )
    {
      v10 = 1;
      StorPoFxComponent = RaidGetStorPoFxComponent((int *)(*v7)[1], a2);
      if ( StorPoFxComponent && *(_DWORD *)StorPoFxComponent == 2 )
        v10 = *((_DWORD *)StorPoFxComponent + 8);
      v12 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v12 + 120) & 2) != 0 )
        v10 = 1;
      if ( a3 <= v10
        && *(_QWORD *)(v12 + 4896)
        && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3512), 1, 0)
        && !RaidAdapterPoFxActivateComponent(*(_QWORD *)(a1 + 24), 0LL, 0LL) )
      {
        v13 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 24) + 80LL);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock(v13, &LockHandle);
        v14 = *(_QWORD *)(a1 + 24);
        if ( *(int *)(v14 + 308) > 1 )
        {
          *(_BYTE *)(a1 + 1960) = 1;
          *(_DWORD *)(a1 + 1964) = a3;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(v14 + 4880), (PSLIST_ENTRY)(a1 + 1984));
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( !StorEtwLoggingEnabled || (byte_1C0092A02 & 0x10) == 0 )
            goto LABEL_52;
          v16 = &EventUnitIdleStateQueued;
LABEL_51:
          McTemplateK0pquuuqq_EtwWriteTransfer(
            *(_QWORD *)(a1 + 24),
            (_DWORD)v16,
            v15,
            **v7,
            *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
            *(_BYTE *)(a1 + 96),
            *(_BYTE *)(a1 + 97),
            *(_BYTE *)(a1 + 98),
            a2,
            a3);
LABEL_52:
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
          return;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      RaidUnitSendPoFxIdleStateToMiniport(a1);
      if ( a3 > v10 && *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4896LL) )
      {
LABEL_41:
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3512), 0, 1) == 1 )
          RaidAdapterPoFxIdleComponent(*(_QWORD *)(a1 + 24), 0LL, 0LL);
      }
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v17 + 110) & 0x40) != 0 && ((*v7)[4] & 0x1000) != 0 && *(_QWORD *)(v17 + 4896) )
      {
        if ( !a3 )
        {
          if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3512), 1, 0) )
            RaidAdapterPoFxActivateComponent(*(_QWORD *)(a1 + 24), 0LL, 0LL);
          goto LABEL_45;
        }
        goto LABEL_41;
      }
    }
LABEL_45:
    if ( *(_DWORD *)(a1 + 976) && !a3 )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(a1 + 24));
    PoFxCompleteIdleState(**v7, a2);
    if ( !StorEtwLoggingEnabled || (byte_1C0092A02 & 0x10) == 0 )
      goto LABEL_52;
    v16 = &EventUnitIdleStateStop;
    goto LABEL_51;
  }
}
