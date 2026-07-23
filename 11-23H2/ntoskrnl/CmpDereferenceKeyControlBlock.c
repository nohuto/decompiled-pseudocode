/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x14076AD00
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 *     CmpCleanupParseContext @ 0x140692A84 (CmpCleanupParseContext.c)
 *     CmReleaseLoadKeyContext @ 0x140692BE4 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x140693350 (CmpLateUnloadHiveWorker.c)
 *     CmpDeleteKeyObject @ 0x1406DB370 (CmpDeleteKeyObject.c)
 *     CmEnumerateKey @ 0x1406DC470 (CmEnumerateKey.c)
 *     CmpWalkOneLevel @ 0x1406DD850 (CmpWalkOneLevel.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2330 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmOpenKey @ 0x1406E2A90 (CmOpenKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7EC0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmpDestroyVirtualStack @ 0x140A19174 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x140A1936C (CmpDoBuildVirtualStack.c)
 *     CmpFreeSiloKeyLockEntry @ 0x140A1C02C (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140A1C074 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A242B4 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140231594 (CmpInitializeDelayDerefContext.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     CmpLockKcbExclusive @ 0x1406D8498 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14073E698 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140751F24 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14076A6C0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockHashEntry @ 0x14076A7B0 (CmpUnlockHashEntry.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
 */

void __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR BugCheckParameter4)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  bool v6; // cl
  unsigned int v7; // ebx
  _QWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0LL;
  CmpInitializeDelayDerefContext(&v12);
  v2 = *(_QWORD *)BugCheckParameter4;
  v3 = *(_QWORD *)(BugCheckParameter4 + 32);
  if ( *(_QWORD *)BugCheckParameter4 <= 1uLL )
  {
LABEL_8:
    v7 = *(_DWORD *)(BugCheckParameter4 + 16);
    v8 = *(_QWORD **)(BugCheckParameter4 + 32);
    CmpLockHashEntryExclusiveByKcb(BugCheckParameter4);
    CmpLockKcbExclusive(BugCheckParameter4);
    v9 = *(_QWORD *)(BugCheckParameter4 + 192);
    v10 = 0LL;
    if ( v9 )
    {
      v11 = *(_QWORD *)(v9 + 24);
      if ( v11 )
      {
        v10 = *(_QWORD *)(v11 + 16);
        CmpUnlockKcb(BugCheckParameter4);
        CmpLockKcbExclusive(v10);
        CmpLockKcbExclusive(BugCheckParameter4);
      }
    }
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter4, (__int64)&v12, 0);
    CmpUnlockKcb(BugCheckParameter4);
    if ( v10 )
      CmpUnlockKcb(v10);
    CmpUnlockHashEntry(v8, v7);
    CmpDrainDelayDerefContext((_QWORD **)&v12);
  }
  else
  {
    while ( 1 )
    {
      v4 = v2 - 1;
      v5 = v2;
      v6 = v2 == 3 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v3 + 2944) == 1;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v4, v2);
      if ( v2 == v5 )
        break;
      if ( v2 <= 1 )
        goto LABEL_8;
    }
    if ( v2 < v4 )
      KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
    if ( v6 )
      CmpDoQueueLateUnloadWorker(v3);
  }
}
