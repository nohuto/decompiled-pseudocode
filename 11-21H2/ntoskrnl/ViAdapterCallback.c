/*
 * XREFs of ViAdapterCallback @ 0x140A86EA0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfUtilDbgPrint @ 0x1405FDF9C (VfUtilDbgPrint.c)
 *     ViIsActiveChannelWcb @ 0x1405FE78C (ViIsActiveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140A83888 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140A83B84 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x140A880B0 (ViFreeMapRegisterFile.c)
 */

__int64 __fastcall ViAdapterCallback(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64); // rax
  __int64 v11; // r9
  unsigned int v12; // esi
  _DWORD *v14; // rdx
  KSPIN_LOCK *v15; // rbp
  unsigned __int64 v16; // rbx
  __int64 v17; // r8
  _QWORD *v18; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v22; // eax
  bool v23; // zf

  v4 = *((_QWORD *)a4 + 7);
  v6 = a3;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 192) < 3u )
    {
      v9 = *((_QWORD *)a4 + 12);
      if ( v9 && *(_DWORD *)v9 == -1393569779 )
      {
        *(_QWORD *)(v9 + 48) = a3;
        v6 = *((_QWORD *)a4 + 12);
      }
      else if ( !a3 )
      {
        v6 = -559026163LL;
      }
    }
    if ( *(_BYTE *)(v4 + 196) )
      DECREMENT_ADAPTER_CHANNELS(v4);
  }
  v10 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))*((_QWORD *)a4 + 1);
  v11 = *(_QWORD *)a4;
  *((_QWORD *)a4 + 11) = v6;
  v12 = v10(a1, a2, v6, v11);
  if ( !v4 || !ViIsActiveChannelWcb(v4, (__int64)a4) )
    return v12;
  a4[13] = v12;
  if ( v12 != 1 )
  {
    if ( !*(_BYTE *)(v4 + 196) )
      DECREMENT_ADAPTER_CHANNELS(v4);
    if ( v12 == 3 )
      return 3LL;
    SUBTRACT_MAP_REGISTERS(v4, a4[12]);
    v14 = (_DWORD *)*((_QWORD *)a4 + 12);
    if ( v14 && *v14 == -1393569779 )
    {
      ViFreeMapRegisterFile(v4);
      *((_QWORD *)a4 + 12) = 0LL;
    }
    v15 = (KSPIN_LOCK *)(v4 + 144);
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
    v17 = *((_QWORD *)a4 + 9);
    v18 = (_QWORD *)*((_QWORD *)a4 + 10);
    if ( *(_DWORD **)(v17 + 8) != a4 + 18 || (_DWORD *)*v18 != a4 + 18 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    KxReleaseSpinLock(v15);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v23 = (v22 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v22;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v16);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, a4);
    return v12;
  }
  if ( *(_BYTE *)(v4 + 196) )
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 184), 0xFFFFFFFF);
    VfUtilDbgPrint("Driver at address %p has a problem\n", *(const void **)(v4 + 40));
    VfUtilDbgPrint("Master devices should return DeallocateObjectKeepRegisters\n");
  }
  *(_DWORD *)(v4 + 256) = a4[12];
  return 1LL;
}
