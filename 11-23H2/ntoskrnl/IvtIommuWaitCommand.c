/*
 * XREFs of IvtIommuWaitCommand @ 0x140360454
 * Callers:
 *     IvtInvalidateRemappingTableEntries @ 0x1403603E0 (IvtInvalidateRemappingTableEntries.c)
 *     IvtFlushTbInternal @ 0x1403B1020 (IvtFlushTbInternal.c)
 *     IvtInvalidateAllContextEntries @ 0x1403B5F30 (IvtInvalidateAllContextEntries.c)
 *     IvtDrainSvmPageRequests @ 0x14052C7B0 (IvtDrainSvmPageRequests.c)
 *     IvtFlushDeviceTbOnly @ 0x14052CB50 (IvtFlushDeviceTbOnly.c)
 *     IvtInvalidateContextEntry @ 0x14052D8D4 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateScalableModePasidCache @ 0x14052D960 (IvtInvalidateScalableModePasidCache.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CE60 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     IvtIommuSendCommand @ 0x140360584 (IvtIommuSendCommand.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IvtIommuWaitCommand(__int64 a1, int a2, int a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // esi
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-30h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v12) = 0x8000;
      else
        v12 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      SchedulerAssist[5] |= v12;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  }
  v7 = *(_QWORD *)(a1 + 192);
  v8 = *(_QWORD *)(a1 + 200);
  v19[0] = v7;
  v19[1] = v8;
  *(_DWORD *)(a1 + 176) = 1;
  if ( a2 )
    v19[0] = v7 | 0x80;
  IvtIommuSendCommand(a1, v19, 1LL);
  v9 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 176);
    if ( !(_DWORD)result )
      break;
    if ( (++v9 & dword_140C6249C) == 0 && qword_140C624A0 )
      qword_140C624A0(v9);
    else
      _mm_pause();
  }
  if ( !a3 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    if ( (_DWORD)KiIrqlFlags )
    {
      v13 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
