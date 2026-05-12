/*
 * XREFs of RaidUnitSubmitResetRequest @ 0x1C0062F04
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0004C30 (RaUnitScsiIrp.c)
 *     RaUnitResetBusSrb @ 0x1C005E3D0 (RaUnitResetBusSrb.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C000826C (StorAllocateContiguousIoResources.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 *     RaidUnitStartDeviceBusy @ 0x1C00431D0 (RaidUnitStartDeviceBusy.c)
 *     RaidNtStatusToSrbStatus @ 0x1C005A42C (RaidNtStatusToSrbStatus.c)
 *     RaUnitStartResetIo @ 0x1C005F780 (RaUnitStartResetIo.c)
 */

__int64 __fastcall RaidUnitSubmitResetRequest(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  unsigned int FullCreateOptions; // eax
  __int64 ContiguousIoResources; // rax
  __int128 v8; // xmm1
  KIRQL CurrentIrql; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  KSPIN_LOCK *v12; // rcx
  _QWORD *Pool; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  KIRQL v16; // bl
  unsigned int v17; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+58h] [rbp-28h] BYREF
  __int128 v21; // [rsp+68h] [rbp-18h]

  *(_QWORD *)&v21 = 0LL;
  DWORD2(v21) = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v20 = 0LL;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  CurrentStackLocation->Control |= 1u;
  FullCreateOptions = BYTE2(SecurityContext->SecurityQos);
  BYTE3(SecurityContext->SecurityQos) = 0;
  if ( (_BYTE)FullCreateOptions == 40 )
    FullCreateOptions = SecurityContext->FullCreateOptions;
  if ( FullCreateOptions == 16 )
  {
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 484LL) + 7) & 0xFFFFFFF8) + 1104,
                              (__int64)a2,
                              *(_QWORD *)(a1 + 24));
    if ( ContiguousIoResources )
    {
      *(_QWORD *)&v21 = ContiguousIoResources + 48;
      *((_QWORD *)&v21 + 1) = ContiguousIoResources + 848;
      *((_QWORD *)&v20 + 1) = ContiguousIoResources + 1104;
      RaidZeroXrb(ContiguousIoResources + 48, ContiguousIoResources + 848, 0, 0LL);
      LODWORD(v20) = -1;
      goto LABEL_8;
    }
LABEL_23:
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus(-1073741670);
    a2->IoStatus.Information = 0LL;
    RaidCompleteRequestEx(a2, 0, v17);
    return 259LL;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1776), 1, 0) )
    goto LABEL_23;
  v8 = *(_OWORD *)(a1 + 1760);
  v20 = *(_OWORD *)(a1 + 1744);
  v21 = v8;
LABEL_8:
  if ( (qword_1C0092468 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      (__int64)a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a1 + 96) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96))) << 8),
      0LL,
      0LL,
      0LL);
  if ( (*(_BYTE *)(a1 + 449) & 1) != 0 || *(char *)(a1 + 448) < 0 )
    goto LABEL_22;
  CurrentIrql = KeGetCurrentIrql();
  v10 = a1;
  if ( CurrentIrql < 2u )
  {
    v11 = 1LL;
LABEL_21:
    RaidUnitStartDeviceBusy(v10, (__int64)a2, v11);
    goto LABEL_22;
  }
  if ( !RaidUnitCheckAndAcquirePoFx(a1) )
  {
LABEL_22:
    v16 = KfRaiseIrql(2u);
    RaUnitStartResetIo(*(_QWORD *)(a1 + 8), a2, (__int64)&v20);
    KeLowerIrql(v16);
    return 259LL;
  }
  v12 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 1792) + 96LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v12, &LockHandle);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1792) + 32LL) & 2) != 0
    || (Pool = (_QWORD *)RaidAllocatePool(64LL, 32LL, 1330667858LL, *(_QWORD *)(a1 + 8))) == 0LL )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
    v11 = 0LL;
    v10 = a1;
    goto LABEL_21;
  }
  Pool[2] = a2;
  v14 = *(_QWORD *)(a1 + 1792) + 80LL;
  v15 = *(_QWORD *)v14;
  if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 )
    __fastfail(3u);
  *Pool = v15;
  Pool[1] = v14;
  *(_QWORD *)(v15 + 8) = Pool;
  *(_QWORD *)v14 = Pool;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  RaidUnitStartDeviceBusy(a1, (__int64)a2, 0LL);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  return 259LL;
}
