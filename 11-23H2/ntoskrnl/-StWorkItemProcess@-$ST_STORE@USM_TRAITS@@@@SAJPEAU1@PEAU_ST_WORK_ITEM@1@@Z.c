/*
 * XREFs of ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C9C24
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368BF0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1405C8DC8 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     SmKmStoreReference @ 0x1403452A0 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140345424 (SmKmStoreRefFromStoreIndex.c)
 *     SmHpChunkHeapProtect @ 0x140345BBC (SmHpChunkHeapProtect.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140345EC4 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140465B4C (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C34FC (-StAddRemoveRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C3DE8 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1405C4078 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C4454 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x1405C49D0 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C5968 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C5EC4 (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1405C6850 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C6BA0 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C6FE0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C74FC (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1405C8BB4 (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C8C3C (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x1405C8CE0 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x1405C8D6C (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C930C (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x1405C9718 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C9AE8 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StWorkItemProcess(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebp
  int v7; // r15d
  _DWORD *v8; // r14
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  __int64 v17; // r8
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // edx
  unsigned int Stats; // eax
  __int64 v22; // rdi
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  char v26; // bl
  int v27; // eax
  struct _EX_RUNDOWN_REF *v28; // rax

  v5 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a2 & 1) == 0 )
    v5 = a2;
  v6 = -1;
  v7 = 0;
  v8 = 0LL;
  v9 = *(_DWORD *)v5 & 7;
  if ( (a2 & 1) == 0 )
    ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle((__int64)(a1 + 718));
  if ( !v9 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageAdd((__int64)(a1 + 10), v5);
    goto LABEL_64;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRemove((__int64)(a1 + 10), v5);
    goto LABEL_64;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRetrieve((__int64)(a1 + 10), (__int64)(a1 + 124), v5);
    goto LABEL_64;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    Stats = ST_STORE<SM_TRAITS>::StGetStats((__int64)a1, v5);
    goto LABEL_64;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( (*(_DWORD *)(v5 + 8) & 7) == 0 )
    {
      ST_STORE<SM_TRAITS>::StEmptyStore((__int64)a1, 0);
      v18 = 0;
      goto LABEL_65;
    }
    if ( (*(_DWORD *)(v5 + 8) & 7u) - 4 <= 1 )
    {
      Stats = ST_STORE<SM_TRAITS>::StAddRemoveRegions((__int64)a1, v5);
      v6 = 0;
      goto LABEL_64;
    }
    goto LABEL_44;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 == 1 )
      {
        ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion((__int64)a1 + ((*(_DWORD *)(v5 + 28) & 2) != 0 ? 2016LL : 80LL), v5);
        return 259;
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
    v6 = 259;
    if ( *(_DWORD *)(v5 + 8) != 1 )
      v8 = (_DWORD *)v5;
    if ( !SmKmStoreReference(*(_QWORD *)(a1[3] + 6728LL), *(_DWORD *)(a1[3] + 6016LL), a3, a4) )
    {
      v18 = -1073741431;
      goto LABEL_67;
    }
    v18 = 0;
    v19 = *(_DWORD *)(v5 + 8);
    v7 = 1;
    switch ( v19 )
    {
      case 1:
        v20 = *(_DWORD *)(v5 + 16);
        if ( v20 < 2 )
        {
          Stats = ST_STORE<SM_TRAITS>::StCompactionWorker((__int64)a1 + (v20 != 0 ? 2016LL : 80LL), -v20, v17);
        }
        else
        {
          if ( v20 != 2 )
          {
            switch ( v20 )
            {
              case 3u:
                ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions((__int64)(a1 + 10));
                break;
              case 4u:
                SmHpChunkHeapProtect((__int64)(a1 + 34), 0, 0);
                break;
              case 5u:
                ST_STORE<SM_TRAITS>::StDmCombineLazyCleanup((__int64)(a1 + 10));
                break;
              case 6u:
                v18 = -1073741811;
                break;
            }
            goto LABEL_67;
          }
          Stats = ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker((__int64)(a1 + 10), 0, (__int64)(a1 + 118));
        }
        goto LABEL_64;
      case 2:
        Stats = ST_STORE<SM_TRAITS>::StDmEtaRefresh((__int64)(a1 + 10));
LABEL_64:
        v18 = Stats;
LABEL_65:
        if ( v18 == -1073741818 )
          ST_STORE<SM_TRAITS>::StEmptyStore((__int64)a1, 0);
LABEL_67:
        if ( v8 )
          ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup((__int64)a1, v8);
        if ( !v7 )
          goto LABEL_71;
        goto LABEL_70;
      case 3:
        Stats = ST_STORE<SM_TRAITS>::StMetaRegionsUpdate((__int64)a1, v5);
        v8 = 0LL;
        goto LABEL_64;
      case 4:
        ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(
          a1[249],
          2LL,
          (*(_WORD *)(v5 + 14) & 1) != 0 ? 200 : 2000,
          (*(_WORD *)(v5 + 14) & 1) != 0 ? 2000 : 30000);
LABEL_70:
        v28 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(
                                          *(_QWORD *)(a1[3] + 6728LL),
                                          *(_DWORD *)(a1[3] + 6016LL) & 0x3FF);
        ExReleaseRundownProtection_0(v28 + 1);
LABEL_71:
        if ( v6 != -1 )
          return v6;
        return v18;
      case 5:
        _InterlockedAnd16((volatile signed __int16 *)(v5 + 12), 0xFFFEu);
        goto LABEL_70;
      case 6:
        _InterlockedAnd16((volatile signed __int16 *)(v5 + 12), 0xFFFEu);
        if ( (unsigned __int64)(KiQueryUnbiasedInterruptTime() - a1[751]) >= 0x989680
          && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction((__int64)(a1 + 10), 2) == 2 )
        {
          ST_STORE<SM_TRAITS>::StCompactionPerformEmergency((__int64)(a1 + 10));
          a1[751] = KiQueryUnbiasedInterruptTime();
        }
        goto LABEL_70;
    }
LABEL_44:
    v18 = -1073741811;
    goto LABEL_65;
  }
  v22 = (__int64)(a1 + 10);
  v23 = v22;
  v24 = *(_DWORD *)(v5 + 8) & 7;
  if ( v24 )
  {
    if ( v24 == 1 )
    {
      ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(v22);
    }
    else if ( v24 == 3 )
    {
      v25 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v22, 0);
      if ( v25 )
        ST_STORE<SM_TRAITS>::StQueueCompaction(v22, v25);
    }
    else
    {
      while ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v23, 1) == 2 )
      {
        v26 = *(_BYTE *)(v22 + 1904);
        *(_BYTE *)(v22 + 1904) = v26 | 3;
        v27 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(v22, 0);
        *(_BYTE *)(v22 + 1904) ^= (*(_BYTE *)(v22 + 1904) ^ v26) & 3;
        if ( v27 < 0 )
          break;
        v23 = v22;
      }
    }
  }
  else
  {
    ST_STORE<SM_TRAITS>::StDmEtaRefresh(v22);
  }
  return 0;
}
