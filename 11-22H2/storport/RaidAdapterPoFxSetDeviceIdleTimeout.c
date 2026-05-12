/*
 * XREFs of RaidAdapterPoFxSetDeviceIdleTimeout @ 0x1C004BACC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00121D4 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C0047B28 (StorpAdapterInitializePoFxPower.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0quuuqqtt_EtwWriteTransfer @ 0x1C004AF2C (McTemplateK0quuuqqtt_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidAdapterPoFxSetDeviceIdleTimeout(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  int v4; // r12d
  __int64 v7; // r14
  __int64 *i; // rsi
  __int64 v9; // rcx
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
      PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 4896), v7);
      v4 = a2;
    }
    else
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 144), &LockHandle);
      if ( *(_DWORD *)(a1 + 168) )
      {
        for ( i = *(__int64 **)(a1 + 152); i != (__int64 *)(a1 + 152); i = (__int64 *)*i )
        {
          if ( RaidUnitCheckAndAcquirePoFx((__int64)(i - 7)) )
          {
            if ( StorEtwLoggingEnabled )
            {
              if ( (byte_1C0092A02 & 0x10) != 0 )
              {
                v9 = i[217];
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
              }
            }
            *(_DWORD *)(i[217] + 28) = a2;
            PoFxSetDeviceIdleTimeout(*(_QWORD *)i[217], v7);
            ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[216]);
          }
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 4896), -1LL);
      *(_DWORD *)(a1 + 5936) = a2;
    }
    result = 4912LL;
    *(_DWORD *)(a1 + 4912) = v4;
  }
  else
  {
    result = PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 4896), v7);
    *(_DWORD *)(a1 + 4912) = a2;
  }
  return result;
}
