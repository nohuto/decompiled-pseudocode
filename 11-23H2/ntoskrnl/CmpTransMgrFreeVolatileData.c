/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x140769104
 * Callers:
 *     CmpCleanupTransactionState @ 0x14069831C (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x1407D0C84 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1407E89F8 (CmRmFinalizeRecovery.c)
 *     CmpRmUnDoPhase @ 0x140A1F308 (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140231594 (CmpInitializeDelayDerefContext.c)
 *     CmpDereferenceSecurityNode @ 0x1402976E0 (CmpDereferenceSecurityNode.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140699DD0 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140699EE8 (CmpInvalidateSubtree.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406D92F8 (CmpReferenceKeyControlBlockUnsafe.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     CmpFreeValue @ 0x14070B0D8 (CmpFreeValue.c)
 *     CmpFreeKeyByCell @ 0x14070B424 (CmpFreeKeyByCell.c)
 *     CmpMarkKeyUnbacked @ 0x140710A0C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140710A8C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14073E698 (CmpDereferenceKeyControlBlockWithLock.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     CmpRundownUnitOfWork @ 0x140768FC8 (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x1407693B0 (CmEqualTrans.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     CmpRebuildKcbCache @ 0x140769420 (CmpRebuildKcbCache.c)
 *     CmpDiscardKcb @ 0x14076AEF8 (CmpDiscardKcb.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140A1FFE8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140A20330 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  ULONG_PTR v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ecx
  unsigned int v13; // ebp
  ULONG_PTR v14; // rbx
  ULONG_PTR v15; // rbx
  ULONG_PTR v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _OWORD v21[2]; // [rsp+30h] [rbp-28h] BYREF

  v21[0] = 0LL;
  CmpInitializeDelayDerefContext(v21);
  while ( *(_QWORD *)(BugCheckParameter2 + 16) != BugCheckParameter2 + 16 )
  {
    v6 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( *(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL) )
    {
      CmpLockRegistryExclusive(v5, v4);
      v10 = *(unsigned int *)(v6 + 68);
      if ( (_DWORD)v10 )
      {
        v11 = v10 - 4;
        if ( v11 && (v12 = v11 - 1) != 0 )
        {
          v10 = (unsigned int)(v12 - 4);
          if ( (_DWORD)v10 )
          {
            if ( (_DWORD)v10 == 3 )
            {
              v7 = *(unsigned int *)(v6 + 96);
              if ( (unsigned int)(v7 - 1) <= 0xFFFFFFFD )
                HvFreeCell(*(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL), v7);
            }
          }
          else
          {
            v13 = *(_DWORD *)(v6 + 96);
            v14 = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL);
            if ( (int)HvpMarkCellDirty(v14, v13, 1) >= 0 )
              CmpDereferenceSecurityNode(v14, v13);
          }
        }
        else
        {
          CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL), *(unsigned int *)(v6 + 92));
        }
      }
      else
      {
        v7 = *(unsigned int *)(v6 + 88);
        if ( (unsigned int)(v7 - 1) <= 0xFFFFFFFD )
          CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL), v7, 0);
      }
      CmpUnlockRegistry(v10, v7, v8, v9);
    }
    CmpLockRegistryExclusive(v5, v4);
    v15 = *(_QWORD *)(v6 + 48);
    if ( *(_QWORD *)(v15 + 288) == BugCheckParameter2 )
    {
      v16 = *(unsigned int *)(v15 + 284);
      if ( (_DWORD)v16 != -1 )
      {
        HvFreeCell(*(_QWORD *)(v15 + 32), v16);
        *(_DWORD *)(v15 + 280) = 0;
        *(_DWORD *)(v15 + 284) = -1;
      }
      *(_QWORD *)(v15 + 288) = 0LL;
    }
    if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v15 + 240), BugCheckParameter2) && !*(_DWORD *)(v6 + 68) )
    {
      if ( a2 == 8 )
      {
        if ( (int)CmpPrepareToInvalidateAllHigherLayerKcbs(v15, 6LL, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v15, 0x10000uLL);
        if ( (int)CmpPrepareForSubtreeInvalidation(v15, 4, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v15, 0x10100uLL);
        CmpInvalidateAllHigherLayerKcbs(v15, 8LL, 6LL, v21);
        CmpInvalidateSubtree(v15, 8, 4, (__int64)v21, 0LL);
        CmpFlushNotifiesOnKeyBodyList(v15, 8, (__int64)v21, 0);
        *(_WORD *)(v15 + 8) |= 0x20u;
        CmpMarkKeyUnbacked(v15);
        if ( (*(_DWORD *)(v15 + 8) & 0x20000) == 0 )
          CmpDiscardKcb(v15);
      }
      *(_QWORD *)(v15 + 240) = 0LL;
    }
    if ( *(_DWORD *)(v15 + 40) != -1 )
    {
      if ( *(_QWORD *)(v15 + 32) )
        CmpRebuildKcbCache(v15, v21);
    }
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v15);
    CmpRundownUnitOfWork((_QWORD *)v6);
    ExFreePoolWithTag((PVOID)v6, 0x77554D43u);
    CmpDereferenceKeyControlBlockWithLock(v15, (__int64)v21, 1);
    CmpDrainDelayDerefContext((_QWORD **)v21);
    CmpUnlockRegistry(v18, v17, v19, v20);
  }
}
