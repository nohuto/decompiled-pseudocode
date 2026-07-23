/*
 * XREFs of ExFreeHeapPool @ 0x140323340
 * Callers:
 *     ExAllocateHeapPool @ 0x1402AD570 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x1403BA2F4 (ExAllocateContiguousHeapPool.c)
 *     ExFreePool @ 0x140AAECC0 (ExFreePool.c)
 * Callees:
 *     ExpReturnPoolQuota @ 0x140207F24 (ExpReturnPoolQuota.c)
 *     MiDeterminePoolType @ 0x1402123C0 (MiDeterminePoolType.c)
 *     RtlpHpSegPageRangeShrink @ 0x14024E790 (RtlpHpSegPageRangeShrink.c)
 *     ExpPoolTrackerReturnLimit @ 0x1402AC5E0 (ExpPoolTrackerReturnLimit.c)
 *     ExReturnPoolQuota @ 0x1402ACF70 (ExReturnPoolQuota.c)
 *     RtlpHpQueryVA @ 0x140315BA8 (RtlpHpQueryVA.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140315F50 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpVsContextFree @ 0x1403238C0 (RtlpHpVsContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x140323A1C (RtlCSparseBitmapBitmaskRead.c)
 *     ExpRemoveTagForBigPages @ 0x140323AA0 (ExpRemoveTagForBigPages.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x140323D50 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpLargeFree @ 0x1403240FC (RtlpHpLargeFree.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExpRemovePoolTrackerExpansion @ 0x14046B59A (ExpRemovePoolTrackerExpansion.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14046BBDA (ExpHpIsSpecialPoolHeap.c)
 *     KeCheckForTimer @ 0x14057102C (KeCheckForTimer.c)
 *     RtlpLogHeapFailure @ 0x1405B503C (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x1405B6A90 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x1405B6D28 (RtlpHpSizeHeap.c)
 *     VerifierFreeTrackedPool @ 0x1405D00D0 (VerifierFreeTrackedPool.c)
 *     EtwTracePool @ 0x1405FD700 (EtwTracePool.c)
 *     ExpCheckForResource @ 0x14060B1A8 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x14060B8E8 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14060D158 (ExpCheckForWorker.c)
 *     ExpFreeHeapSpecialPool @ 0x14060F5F8 (ExpFreeHeapSpecialPool.c)
 *     VfPtFreePoolNotification @ 0x140ADE75C (VfPtFreePoolNotification.c)
 */

int __fastcall ExFreeHeapPool(ULONG_PTR BugCheckParameter2)
{
  int v2; // eax
  __int64 v3; // rbx
  ULONG_PTR v4; // rbx
  unsigned __int64 v5; // rdi
  int v6; // r13d
  int v7; // esi
  unsigned int v8; // r12d
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // r9d
  unsigned int v12; // esi
  __int64 v13; // r11
  unsigned int v14; // edx
  unsigned int v15; // r10d
  int v16; // eax
  __int64 v17; // r8
  ULONG_PTR v18; // rsi
  __int64 v19; // rdx
  int v20; // ecx
  unsigned int v21; // esi
  int v22; // eax
  __int64 v23; // rbx
  unsigned __int64 v24; // r8
  char v25; // cl
  __int64 v26; // rdx
  char v27; // al
  char v28; // cl
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  char v41; // cl
  int v42; // ecx
  ULONG_PTR *v44; // [rsp+40h] [rbp-40h] BYREF
  PVOID Object; // [rsp+48h] [rbp-38h] BYREF
  __int128 v46; // [rsp+50h] [rbp-30h]
  unsigned int v47; // [rsp+B0h] [rbp+30h]
  __int64 v48; // [rsp+B8h] [rbp+38h] BYREF
  unsigned int v49; // [rsp+C0h] [rbp+40h] BYREF
  int v50; // [rsp+C4h] [rbp+44h]
  ULONG_PTR Amount; // [rsp+C8h] [rbp+48h] BYREF

  Amount = 0LL;
  v47 = 0;
  LODWORD(v48) = 0;
  Object = 0LL;
  v46 = 0LL;
  *(_WORD *)((char *)&v46 + 1) = 1;
  LOBYTE(v46) = 3;
  if ( (_WORD)BugCheckParameter2 )
  {
    v2 = 0;
LABEL_3:
    v49 = 0x100000;
    v50 = 0x1000000;
    v3 = *(&v49 + v2);
    v4 = (RtlpHpHeapGlobals ^ *(_QWORD *)((BugCheckParameter2 & -v3) + 0x10) ^ BugCheckParameter2 & -v3 ^ 0xA2E64EADA2E64EADuLL)
       - 192LL * v2
       - 320;
    goto LABEL_4;
  }
  v38 = RtlCSparseBitmapBitmaskRead(&unk_140C71110, 2 * ((BugCheckParameter2 - qword_140C71108) >> 20));
  if ( v38 )
  {
    v2 = v38 - 1;
    if ( v2 != 2 )
      goto LABEL_3;
  }
  v44 = 0LL;
  v49 = 0;
  RtlpHpQueryVA(BugCheckParameter2, v39, &v44, &v49);
  v4 = *v44;
LABEL_4:
  if ( !v4 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter2, 0LL);
  if ( ExpSpecialAllocations && (unsigned int)ExpHpIsSpecialPoolHeap(v4) )
  {
    _InterlockedDecrement(&ExpSpecialAllocations);
    LODWORD(v31) = ExpFreeHeapSpecialPool(v40, BugCheckParameter2);
    return v31;
  }
  if ( (BugCheckParameter2 & 0xFFF) != 0 )
  {
    v5 = BugCheckParameter2 - 16;
    if ( (*(_BYTE *)(BugCheckParameter2 - 13) & 8) != 0 )
      ExReturnPoolQuota(BugCheckParameter2);
    if ( (*(_BYTE *)(v5 + 3) & 4) != 0 )
    {
      v5 -= 16LL * (unsigned __int8)*(_WORD *)v5;
      *(_BYTE *)(v5 + 3) |= 4u;
    }
    v6 = v5 + 16;
    v7 = *(unsigned __int8 *)(v5 + 3);
    v8 = *(_DWORD *)(v5 + 4);
    v9 = 16LL * (unsigned __int8)*(_WORD *)(v5 + 2);
    Amount = v9;
    v47 = v8;
    LODWORD(v48) = v7;
  }
  else
  {
    MiDeterminePoolType(BugCheckParameter2);
    ExpRemoveTagForBigPages(BugCheckParameter2, (__int64)&v48, (__int64)&Amount, (__int64)&Object);
    v9 = Amount;
    v8 = 0;
    v7 = v48;
    if ( (char *)Object - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      ExpReturnPoolQuota((struct _KPROCESS *)Object, Amount, v48, 0);
    v5 = BugCheckParameter2;
    v6 = BugCheckParameter2;
  }
  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !v7 )
      ExpCheckForLookaside(v5, v9);
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(v5);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource(v5, v9);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(v5);
  }
  if ( (ExpPoolFlags & 0x10) != 0 )
    VfPtFreePoolNotification(v5, v8, v9, BugCheckParameter2);
  if ( v47 == PoolHitTag )
    __debugbreak();
  v10 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v10 = EtwTracePool(3618, v7, v8, v6, v9);
  LODWORD(v10) = KeGetPcr()->Prcb.Number;
  v11 = PoolTrackTableMask;
  v12 = v7 & 0xFFFFFFDF;
  v13 = (__int64)*(&ExPoolTagTables + v10);
  v14 = PoolTrackTableMask & ((40543 * v8) ^ ((40543 * (unsigned __int64)v8) >> 32));
  v15 = v14;
  do
  {
    while ( 1 )
    {
      v16 = *(_DWORD *)(v13 + 80LL * v14);
      v17 = v13 + 80LL * v14;
      if ( v16 == v8 )
      {
        ExpPoolTrackerReturnLimit((v12 & 1) == 0, v9, v17);
        goto LABEL_22;
      }
      if ( v16 )
        break;
      v36 = *(_DWORD *)(PoolTrackTable + 80LL * v14);
      if ( !v36 )
        break;
      *(_DWORD *)v17 = v36;
      v37 = *(_QWORD *)(PoolTrackTable + 80LL * v14 + 72);
      if ( v37 )
        *(_QWORD *)(v17 + 72) = v37;
    }
    v14 = v11 & (v14 + 1);
  }
  while ( v14 != v15 );
  ExpRemovePoolTrackerExpansion(v8, v9, v12);
LABEL_22:
  v18 = Amount;
  if ( (v48 & 0x40) != 0 )
    VerifierFreeTrackedPool(BugCheckParameter2, Amount);
  v19 = *(_QWORD *)(v4 + 40);
  if ( v18 - 513 > 0xD7F
    || !v19
    || ((v33 = v19
             + (((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                               + ((unsigned __int64)(unsigned int)(v18 + 15) >> 4))
               - 33
               + 1LL) << 6),
         ++*(_DWORD *)(v33 + 28),
         *(_WORD *)v33 < *(_WORD *)(v33 + 16))
      ? (RtlpInterlockedPushEntrySList((PSLIST_HEADER)v33, (PSLIST_ENTRY)v5), LODWORD(v31) = 1)
      : (++*(_DWORD *)(v33 + 32), LODWORD(v31) = 0),
        !(_DWORD)v31) )
  {
    v20 = *(_DWORD *)(v4 + 220);
    v21 = *(_DWORD *)(v4 + 20) & 0x11000001;
    if ( v20 && v20 == KeGetCurrentThread()[1].CurrentRunTime )
      v21 = *(_DWORD *)(v4 + 20) & 0x11000000 | 1;
    if ( (v21 & 0x1000000) != 0
      || !*(_DWORD *)(v4 + 24)
      || (v31 = RtlpHpExtrasGet(v4, v5, v21, 0LL), (unsigned __int64)(v31 - 1) > 0xFFFFFFFFFFFFFFFDuLL)
      || (v41 = *(_BYTE *)(v31 + 2), (v41 & 0xF) == 0)
      || (v42 = v41 & 0xF) != 0
      && (_WORD)v42 == 1
      && (LODWORD(v31) = ((__int64 (__fastcall *)(ULONG_PTR, unsigned __int64, __int64, __int64))CLFS_LSN_NULL_EXT)(
                           v4,
                           v5,
                           3LL,
                           v31 + 16),
          (int)v31 >= 0) )
    {
      if ( (*(_DWORD *)(v4 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(v4, v5, v21) == -1 )
      {
        LODWORD(v32) = v4;
        goto LABEL_45;
      }
      if ( (_WORD)v5 )
      {
        v22 = 0;
      }
      else
      {
        v35 = RtlCSparseBitmapBitmaskRead(&unk_140C71110, 2 * ((v5 - qword_140C71108) >> 20));
        if ( !v35 || (v22 = v35 - 1, v22 == 2) )
        {
          LODWORD(v31) = RtlpHpLargeFree(v4, v5, v21);
          return v31;
        }
      }
      v49 = 0;
      v23 = 192LL * v22 + 320 + v4;
      v24 = v5 & *(_QWORD *)v23;
      if ( (RtlpHpHeapGlobals ^ v23 ^ *(_QWORD *)(v24 + 0x10) ^ v24) == 0xA2E64EADA2E64EADuLL )
      {
        v25 = *(_BYTE *)(v23 + 8);
        v26 = v24 + 32 * ((unsigned __int64)(unsigned int)(v5 - v24) >> v25);
        if ( v26 )
        {
          v27 = *(_BYTE *)(v26 + 24);
          if ( (v27 & 1) != 0 )
          {
            if ( (v27 & 2) != 0 )
            {
              if ( (v27 & 0xCu) >= 8 || (((1 << v25) - 1) & v5) == 0 )
              {
LABEL_40:
                if ( v5 <= ((unsigned __int64)v26 & *(_QWORD *)v23)
                         + ((v26 - (v26 & *(_QWORD *)v23)) >> 5 << *(_BYTE *)(v23 + 8)) )
                {
                  LODWORD(v31) = RtlpHpSegPageRangeShrink(v23, v26, v24, v21);
                }
                else
                {
                  v29 = *(_BYTE *)(v26 + 24) & 0xC;
                  v30 = (v26 & *(_QWORD *)v23) + ((v26 - (v26 & *(_QWORD *)v23)) >> 5 << *(_BYTE *)(v23 + 8));
                  if ( v29 == 8 )
                  {
                    LODWORD(v31) = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v23 + 24), v30, v5, v21);
                  }
                  else
                  {
                    LODWORD(v31) = RtlpHpVsContextFree(*(_QWORD *)(v23 + 32), v30, v5, v21, (__int64)&v49);
                    if ( (_DWORD)v31 )
                    {
                      v34 = *(_QWORD *)(v23 + 24);
                      LODWORD(v31) = *(unsigned __int16 *)(v34 + 60) - 16;
                      if ( v49 <= (unsigned int)v31 )
                        LODWORD(v31) = RtlpHpLfhBucketUpdateStats(v34, v49, 0LL);
                    }
                  }
                }
                return v31;
              }
            }
            else
            {
              v26 -= 32LL * *(unsigned __int8 *)(v26 + 31);
              v28 = *(_BYTE *)(v26 + 24);
              if ( (v28 & 3) == 3 && (v28 & 0xCu) >= 8 && v26 )
                goto LABEL_40;
            }
          }
        }
      }
      v32 = *(_QWORD *)(v23 + 56);
LABEL_45:
      LODWORD(v31) = RtlpLogHeapFailure(9, v32, v5, 0, 0LL, 0LL);
    }
  }
  return v31;
}
