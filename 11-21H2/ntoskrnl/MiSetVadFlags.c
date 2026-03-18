/*
 * XREFs of MiSetVadFlags @ 0x14030B950
 * Callers:
 *     MiAddSecureEntry @ 0x1407B9190 (MiAddSecureEntry.c)
 *     MiApplyImageHotPatchRequest @ 0x140971DC0 (MiApplyImageHotPatchRequest.c)
 *     MiGetVadForHotPatchInProgress @ 0x140973534 (MiGetVadForHotPatchInProgress.c)
 * Callees:
 *     MiUnlockVadTree @ 0x1402806E0 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402ED128 (MiLockVadTree.c)
 *     MiLockVadCore @ 0x1403106E0 (MiLockVadCore.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetVadFlags(__int64 a1, __int64 a2, int a3)
{
  char v4; // si
  unsigned __int64 v6; // r14
  int v7; // edi
  signed __int32 v8; // eax
  int v9; // r9d
  int v10; // esi
  int v11; // edx
  unsigned int v12; // ecx
  signed __int32 v13; // ett
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf

  v4 = a2;
  v6 = (unsigned __int8)MiLockVadCore(a1, a2);
  v7 = v4 & 2;
  if ( (v4 & 2) != 0 )
    MiLockVadTree(3);
  v8 = *(_DWORD *)(a1 + 48);
  v9 = v4 & 1;
  v10 = v4 & 4;
  v11 = a3 & 1;
  do
  {
    v12 = v8;
    if ( v9 )
    {
      v11 = a3 & 1;
      v12 = v8 & 0xFFFFFFF7 | (8 * v11);
    }
    if ( v7 )
      v12 = (4 * v11) | v12 & 0xFFFFFFFB;
    else
      v11 = a3 & 1;
    if ( v10 )
      v12 ^= (v12 ^ (a3 << 23)) & 0x1800000;
    v13 = v8;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v12, v8);
  }
  while ( v13 != v8 );
  if ( v7 )
    MiUnlockVadTree(3, 0x11u);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 48), 0xFFFFFFFC);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v17 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
