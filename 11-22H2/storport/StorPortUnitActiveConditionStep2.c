/*
 * XREFs of StorPortUnitActiveConditionStep2 @ 0x1C000152C
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C00013E0 (StorPortUnitActiveConditionStep1.c)
 * Callees:
 *     RiNormalizeDeviceQueue @ 0x1C0004130 (RiNormalizeDeviceQueue.c)
 *     RiTryEnableDeviceQueueFastPath @ 0x1C000464C (RiTryEnableDeviceQueueFastPath.c)
 *     StorSubmitIoGatewayItem @ 0x1C0004920 (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x1C004A828 (McTemplateK0pquuuq_EtwWriteTransfer.c)
 *     RaUnitStartResetIo @ 0x1C005F780 (RaUnitStartResetIo.c)
 */

void __fastcall StorPortUnitActiveConditionStep2(__int64 a1, char a2)
{
  __int64 v3; // rcx
  char v4; // bl
  _QWORD *v5; // rax
  int v6; // r8d
  KIRQL v7; // r15
  int v8; // ebp
  KIRQL v9; // al
  signed __int64 v10; // r14
  KIRQL v11; // r13
  __int64 v12; // rbx
  bool v13; // zf
  signed __int64 v14; // rax
  _QWORD *v15; // rsi
  _QWORD *v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  KIRQL v23; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-68h] BYREF
  __int128 v25; // [rsp+68h] [rbp-50h] BYREF
  __int64 v26; // [rsp+78h] [rbp-40h]
  int v27; // [rsp+80h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 1792);
  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 96), &LockHandle);
  *(_DWORD *)(*(_QWORD *)(a1 + 1792) + 32LL) |= 2u;
  if ( *(char *)(a1 + 449) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784)) )
  {
    while ( 1 )
    {
      v5 = (_QWORD *)(*(_QWORD *)(a1 + 1792) + 80LL);
      if ( (_QWORD *)*v5 == v5 )
        break;
      v15 = *(_QWORD **)(*(_QWORD *)(a1 + 1792) + 88LL);
      v16 = (_QWORD *)v15[1];
      if ( (_QWORD *)*v15 != v5 || (_QWORD *)*v16 != v15 )
        __fastfail(3u);
      *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 88LL) = v16;
      *v16 = v5;
      v17 = v15[2];
      v18 = *(_QWORD *)(*(_QWORD *)(v17 + 184) + 8LL);
      v19 = *(unsigned __int8 *)(v18 + 2);
      if ( (_BYTE)v19 == 40 )
        v19 = *(_DWORD *)(v18 + 20);
      v20 = v19 - 16;
      if ( !v20 || (v21 = v20 - 2) == 0 || (v22 = v21 - 1) == 0 || v22 == 13 )
      {
        v23 = KfRaiseIrql(2u);
        RaUnitStartResetIo(*(_QWORD *)(a1 + 8), v17, a1 + 1744);
        KeLowerIrql(v23);
      }
      ExFreePoolWithTag(v15, 0x4F506152u);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
    v4 = a2;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( *(_BYTE *)(a1 + 695) )
  {
    *(_BYTE *)(a1 + 695) = 0;
    v26 = 0LL;
    v25 = 0LL;
    v27 = 0;
    v7 = 0;
    if ( KeGetCurrentIrql() == 2 )
    {
      v8 = 1;
    }
    else
    {
      v8 = 0;
      v7 = KfRaiseIrql(2u);
    }
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 728));
    v10 = *(_QWORD *)(a1 + 744);
    v11 = v9;
    if ( (v10 & 1) == 0 )
    {
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 736));
      ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 736));
      do
      {
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 744), v10 | 1, v10);
        v13 = v10 == v14;
        v10 = v14;
      }
      while ( !v13 && (v14 & 1) == 0 );
    }
    v12 = RiNormalizeDeviceQueue(a1 + 656, 0LL);
    RiTryEnableDeviceQueueFastPath(a1 + 656);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 728), v11);
    if ( v12 && !(unsigned __int8)StorSubmitIoGatewayItem(*(_QWORD *)(a1 + 664), v12, &v25) )
      (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(a1 + 648))(
        *(_QWORD *)(a1 + 640),
        v12 - 120,
        &v25,
        0LL);
    if ( !v8 )
      KeLowerIrql(v7);
    v4 = a2;
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0092A02 & 0x10) != 0 )
      McTemplateK0pquuuq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitActiveConditionStop,
        v6,
        **(_QWORD **)(a1 + 1792),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        v4);
  }
}
