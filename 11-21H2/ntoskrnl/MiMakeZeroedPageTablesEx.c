/*
 * XREFs of MiMakeZeroedPageTablesEx @ 0x14026DC5C
 * Callers:
 *     MiExpandSystemCache @ 0x14024280C (MiExpandSystemCache.c)
 *     MiSplitBitmapPages @ 0x140246420 (MiSplitBitmapPages.c)
 *     MiExpandPtes @ 0x14026A818 (MiExpandPtes.c)
 *     MiMakeZeroedPageTables @ 0x1402DBF90 (MiMakeZeroedPageTables.c)
 *     MiCommitPoolMemory @ 0x1403525F0 (MiCommitPoolMemory.c)
 *     MiGetPageTablesForLargeMap @ 0x1403C736C (MiGetPageTablesForLargeMap.c)
 *     MiMapNewPfns @ 0x140969514 (MiMapNewPfns.c)
 *     MiMapBBTMemory @ 0x140B092AC (MiMapBBTMemory.c)
 *     MiCreateTopLevelUltraMappings @ 0x140B2A068 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiCleanupPageTablePages @ 0x14026DFF0 (MiCleanupPageTablePages.c)
 *     MiInitializeColorBase @ 0x14026E158 (MiInitializeColorBase.c)
 *     MiInitializeLargePfnList @ 0x14026E1F4 (MiInitializeLargePfnList.c)
 *     MiDeleteSystemPageTables @ 0x14026E468 (MiDeleteSystemPageTables.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReplenishSlabAllocator @ 0x1405B1974 (MiReplenishSlabAllocator.c)
 *     MiSetLeafFillToUninitializedWsle @ 0x1405B857C (MiSetLeafFillToUninitializedWsle.c)
 *     MiGetLargePagesForSystemMapping @ 0x14096DAE0 (MiGetLargePagesForSystemMapping.c)
 */

__int64 __fastcall MiMakeZeroedPageTablesEx(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5)
{
  int v9; // eax
  __int64 v10; // r12
  unsigned __int64 v11; // rsi
  unsigned __int64 *AnyMultiplexedVm; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rdx
  int v22; // ecx
  int LargePagesForSystemMapping; // eax
  int v24; // eax
  unsigned __int64 OldIrql; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v29; // eax
  bool v30; // zf
  __int64 SharedVm; // rax
  int v32; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+38h] [rbp-C8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v37[46]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v38[22]; // [rsp+1E0h] [rbp+E0h] BYREF

  memset(v38, 0, sizeof(v38));
  memset(v37, 0, 0x168uLL);
  MiInitializeLargePfnList(v37);
  if ( (a3 & 0x800) != 0 || (a3 & 4) != 0 )
  {
    HIDWORD(v37[16]) = 3;
    goto LABEL_8;
  }
  if ( (a3 & 2) != 0 )
  {
    HIDWORD(v37[16]) = 2;
LABEL_8:
    a3 &= ~0x80u;
    goto LABEL_9;
  }
  v9 = HIDWORD(v37[16]);
  if ( (a3 & 0x20) == 0 )
    v9 = 1;
  HIDWORD(v37[16]) = v9;
  if ( v9 == 4 )
    return 1LL;
  if ( v9 )
    goto LABEL_8;
LABEL_9:
  BYTE4(v38[0]) ^= (BYTE4(v38[0]) ^ (4 * BYTE4(v37[16]))) & 0x1C;
  v10 = (a2 << 25 >> 16) + 4095;
  v11 = a1 << 25 >> 16;
  v33 = v10;
  LODWORD(v37[15]) = a4;
  v32 = 0;
  AnyMultiplexedVm = (unsigned __int64 *)MiGetAnyMultiplexedVm(5LL);
  if ( a4 <= 9 )
  {
    if ( a4 == 9 )
    {
LABEL_11:
      v15 = (unsigned int)v13;
LABEL_12:
      AnyMultiplexedVm = (unsigned __int64 *)MiGetAnyMultiplexedVm(v15);
      goto LABEL_13;
    }
    if ( a4 != 1 )
    {
      if ( a4 == 2 )
      {
        v32 = 1;
        AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
        goto LABEL_13;
      }
      if ( a4 != 3 )
      {
        v22 = a4 - 3 - v13;
        if ( !v22 )
        {
          v15 = 2LL;
          goto LABEL_12;
        }
        if ( v22 == 2 )
        {
          v15 = 0LL;
          goto LABEL_12;
        }
        goto LABEL_13;
      }
LABEL_26:
      v15 = 1LL;
      goto LABEL_12;
    }
LABEL_40:
    v32 = 2;
    AnyMultiplexedVm = (unsigned __int64 *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 192);
    goto LABEL_13;
  }
  switch ( a4 )
  {
    case 11:
      if ( (unsigned int)MiGetSystemRegionType(v11, 0LL, v13, v14) != 1 )
        break;
      goto LABEL_40;
    case 12:
      goto LABEL_26;
    case 13:
      goto LABEL_11;
    case 14:
    case 16:
      v15 = 4LL;
      goto LABEL_12;
  }
LABEL_13:
  v16 = a5;
  v17 = *(_QWORD *)(qword_140C51F48 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 87));
  v37[12] = v17;
  LODWORD(v37[16]) = a3;
  HIDWORD(v37[15]) = a5;
  v37[44] = -1LL;
  if ( (a3 & 0x40) != 0 )
  {
    MiSetLeafFillToUninitializedWsle(v37);
    v16 = HIDWORD(v37[15]);
  }
  else if ( v11 >= 0xFFFFDE0000000000uLL )
  {
    v18 = -1LL;
    if ( v11 < 48 * qword_140C50840 - 0x21FFFFFFFFD0LL )
      v18 = 0LL;
    v37[44] = v18;
  }
  MiInitializeColorBase(v11, v16, &v37[42]);
  if ( (a3 & 0x80u) != 0 )
  {
    LargePagesForSystemMapping = MiGetLargePagesForSystemMapping(v37, v11, v10);
    if ( LargePagesForSystemMapping >= 0 )
    {
      if ( LargePagesForSystemMapping == 1075380276 )
      {
        LOWORD(a3) = a3 & 0xFF7F;
        v19 = v37[16] & 0xFFFFFF7F;
        LODWORD(v37[16]) &= ~0x80u;
        goto LABEL_20;
      }
    }
    else if ( (a3 & 0x100) != 0 )
    {
      MiCleanupPageTablePages(v37);
      return 0LL;
    }
  }
  v19 = v37[16];
LABEL_20:
  if ( (a3 & 0x1000) != 0 )
  {
    if ( (a3 & 0x80u) == 0 && (MiFlags & 0x30) != 0 )
    {
      v24 = *(_DWORD *)(v17 + 4);
      memset(&LockHandle, 0, sizeof(LockHandle));
      if ( (v24 & 0x10) == 0 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_140C51F00, &LockHandle);
        *(_DWORD *)(v17 + 4) |= 0x10u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v30 = (v29 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v29;
              if ( v30 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        v10 = v33;
      }
      MiReplenishSlabAllocator(
        *(_QWORD *)(v17 + 16) + 24512 * ((unsigned __int64)HIDWORD(v37[43]) >> byte_140C506CC) + 24176,
        v17,
        ((a2 - a1) >> 3) + 1,
        64LL);
    }
    else
    {
      LODWORD(v37[16]) = v19 & 0xFFFFEFFF;
    }
  }
  LODWORD(v37[18]) = v32;
  LODWORD(v38[0]) = 18439;
  v38[19] = MiCreateSystemPageTable;
  v38[20] = MiCreateSystemPageTableTail;
  v38[21] = v37;
  v38[4] = v11;
  v38[5] = v10;
  v37[19] = 20LL;
  WORD2(v37[18]) = 0;
  v37[20] = 0LL;
  v37[21] = 0LL;
  v38[3] = AnyMultiplexedVm;
  HIBYTE(v38[0]) = MiLockWorkingSetShared(AnyMultiplexedVm);
  MiWalkPageTables(v38);
  LOBYTE(v20) = HIBYTE(v38[0]);
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v20);
  if ( (a3 & 0x40) != 0 && LODWORD(v37[15]) != 2 )
  {
    SharedVm = MiGetSharedVm(AnyMultiplexedVm);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(SharedVm + 48), v37[14]);
  }
  MiCleanupPageTablePages(v37);
  if ( SLODWORD(v37[41]) >= 0 )
    return 1LL;
  if ( (a3 & 0x200) == 0 )
    MiDeleteSystemPageTables((_DWORD)AnyMultiplexedVm, a4, v11, v10, 0, (__int64)&v37[18]);
  return 0LL;
}
