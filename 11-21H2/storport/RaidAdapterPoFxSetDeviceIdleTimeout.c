/*
 * XREFs of RaidAdapterPoFxSetDeviceIdleTimeout @ 0x1C0048AF0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0016D0C (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C00446A8 (StorpAdapterInitializePoFxPower.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0quuuqqtt_EtwWriteTransfer @ 0x1C0048124 (McTemplateK0quuuqqtt_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidAdapterPoFxSetDeviceIdleTimeout(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  int v4; // r12d
  __int64 v7; // r14
  __int64 *i; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-38h] BYREF

  v4 = -1;
  if ( a2 == -1 )
    v7 = -1LL;
  else
    v7 = 10000LL * a2;
  if ( (*(_BYTE *)(a1 + 110) & 0x40) != 0 )
  {
    if ( a4 )
    {
      result = PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 4832), v7);
      v4 = a2;
    }
    else
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      if ( *(_DWORD *)(a1 + 160) )
      {
        for ( i = *(__int64 **)(a1 + 144); i != (__int64 *)(a1 + 144); i = (__int64 *)*i )
        {
          if ( RaidUnitCheckAndAcquirePoFx((__int64)(i - 7)) )
          {
            v10 = i[211];
            if ( StorEtwLoggingEnabled )
            {
              if ( (byte_1C00799E2 & 0x10) != 0 )
              {
                v9 = i[211];
                McTemplateK0quuuqqtt_EtwWriteTransfer(
                  (*(_DWORD *)(v9 + 32) >> 10) & 1,
                  *(i - 4),
                  *(unsigned int *)(v9 + 28),
                  *(_DWORD *)(*(i - 4) + 56),
                  *((_BYTE *)i + 40),
                  *((_BYTE *)i + 41),
                  *((_BYTE *)i + 42),
                  *(_DWORD *)(v9 + 28),
                  a2,
                  (*(_DWORD *)(v9 + 32) & 0x400) != 0,
                  (*(_DWORD *)(v9 + 32) & 0x800) != 0);
                v10 = i[211];
              }
            }
            *(_DWORD *)(v10 + 28) = a2;
            PoFxSetDeviceIdleTimeout(*(_QWORD *)i[211], v7);
            ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[210]);
          }
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      result = PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 4832), -1LL);
      *(_DWORD *)(a1 + 5872) = a2;
    }
    *(_DWORD *)(a1 + 4848) = v4;
  }
  else
  {
    result = PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 4832), v7);
    *(_DWORD *)(a1 + 4848) = a2;
  }
  return result;
}
