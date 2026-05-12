/*
 * XREFs of RaidUnitPendingDpcRoutine @ 0x1C000EA30
 * Callers:
 *     <none>
 * Callees:
 *     StorTickEventQueue @ 0x1C000EAE0 (StorTickEventQueue.c)
 *     RaidUnitDisablePendingTimer @ 0x1C000ED94 (RaidUnitDisablePendingTimer.c)
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 *     RaidAdapterResetBus @ 0x1C00379D0 (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C003E93C (WPP_SF_q.c)
 *     RaUnitRequestPowerDown @ 0x1C004B63C (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C004B78C (RaUnitRequestPowerUp.c)
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x1C005C574 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x1C005C710 (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C0060BF0 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitRequestTimeout @ 0x1C00620B8 (RaidUnitRequestTimeout.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0070974 (StorpTelemetryMarkUnitUnresponsive.c)
 */

void __fastcall RaidUnitPendingDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool v6; // bp
  bool v7; // r14
  unsigned int v8; // edi
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // edx
  unsigned int v12; // ecx
  __int64 v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-28h] BYREF

  v4 = DeferredContext[8];
  v5 = *(_QWORD *)(v4 + 504);
  if ( v5 )
  {
    if ( *(int *)(v4 + 1824) > 0 )
    {
      v6 = 0;
      memset(&LockHandle, 0, sizeof(LockHandle));
      v7 = 0;
      v8 = *(_DWORD *)(v5 + 4);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1840), &LockHandle);
      v9 = *(_DWORD *)(v4 + 1824);
      if ( v9 > 0 )
      {
        v10 = 0;
        if ( v9 >= v8 )
          v10 = v9 - v8;
        *(_DWORD *)(v4 + 1824) = v10;
        v6 = v10 == 0;
      }
      v11 = *(_DWORD *)(v4 + 1828);
      if ( v11 > 0 && !v6 )
      {
        v12 = 0;
        if ( v11 >= v8 )
          v12 = v11 - v8;
        *(_DWORD *)(v4 + 1828) = v12;
        v7 = v12 == 0;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( *(_BYTE *)(v4 + 3280) )
      {
        if ( (*(_BYTE *)(v4 + 450) & 2) == 0 )
        {
          v14 = *(_DWORD *)(v4 + 3288);
          if ( v14 != -1 )
          {
            v15 = *(_DWORD *)(v4 + 1320);
            if ( v15 < 0x1E )
              v15 = 30;
            v13 = 4 * v15 - *(_DWORD *)(v4 + 1824) + 42;
            if ( !v14 || v14 < (unsigned int)v13 )
            {
              v16 = *(_DWORD *)(v4 + 96);
              StorpTelemetryMarkUnitUnresponsive(v4, v13);
              *(_BYTE *)(v4 + 450) |= 2u;
              if ( (byte_1C0092A04 & 4) != 0 )
                McTemplateK0zqjuuujsssq_EtwWriteTransfer(
                  v4 + 169,
                  (unsigned int)&EventUnitUnresponsive,
                  v4 + 2024,
                  *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4656LL),
                  *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
                  *(_QWORD *)(v4 + 24) + 5000LL,
                  v16,
                  SBYTE1(v16),
                  SBYTE2(v16),
                  v4 + 2024,
                  v4 + 160,
                  v4 + 169,
                  v4 + 186,
                  1);
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
              {
                WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 60LL, &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids, v4);
              }
            }
          }
        }
      }
      if ( v6 )
      {
        if ( (qword_1C0092468 & 0x400) != 0 )
          DbgLogRequest(*(_QWORD *)(v4 + 24), 10, v4, 0, 0LL, 0LL, 0LL);
        RaidUnitAbortHierarchicalResetWorkItem(v4);
      }
      else if ( v7 )
      {
        if ( (byte_1C0092A04 & 2) != 0 )
          McTemplateK0zqjujssstq_EtwWriteTransfer(
            v4 + 169,
            v4 + 160,
            v4 + 2024,
            *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4656LL),
            *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
            *(_QWORD *)(v4 + 24) + 5000LL,
            *(_BYTE *)(v4 + 96),
            v4 + 2024,
            v4 + 160,
            v4 + 169,
            v4 + 186,
            *(_BYTE *)(v4 + 450) & 1,
            3);
        LOBYTE(v13) = *(_BYTE *)(v4 + 96);
        RaidAdapterResetBus(*(_QWORD *)(v4 + 24), v13);
      }
    }
    else if ( (int)StorTickEventQueue(v4, v5, SystemArgument1, SystemArgument2) < 0 )
    {
      if ( (qword_1C0092468 & 0x400) != 0 )
        DbgLogRequest(*(_QWORD *)(v4 + 24), 9, v4, 0, 0LL, 0LL, 0LL);
      RaidUnitRequestTimeout(v4);
    }
    else
    {
      if ( (*(char *)(v4 + 449) < 0 || *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4896LL)) && (*(_DWORD *)(v4 + 456) & 4) == 0 )
        RaidUnitDisablePendingTimer(v4);
      if ( _InterlockedExchange((volatile __int32 *)(v4 + 1808), 0) )
      {
        RaUnitRequestPowerUp(v4);
      }
      else if ( _InterlockedExchange((volatile __int32 *)(v4 + 1812), 0) )
      {
        RaUnitRequestPowerDown(v4);
      }
    }
  }
}
