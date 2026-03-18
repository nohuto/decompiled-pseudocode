/*
 * XREFs of ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037EEA8
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037FA00 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x1405F9C9C (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StNpLeafDelete@?$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z @ 0x1405FA610 (-StNpLeafDelete@-$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140237ED8 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140237F80 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140238A40 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmEtwEnabled @ 0x140261818 (SmEtwEnabled.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     SmHpChunkFree @ 0x14037EC9C (SmHpChunkFree.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14037ED14 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140380C38 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140381130 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1403812B0 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140381960 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1403819D4 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140381E98 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?StDmCombinePageEntry@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x1403820C0 (-StDmCombinePageEntry@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_S.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14038217C (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140390A50 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1405F616C (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     SmEtwLogStoreOp @ 0x1405FB4F4 (SmEtwLogStoreOp.c)
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1405FC72C (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRemove(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r13
  __int64 v4; // rdx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // r15d
  unsigned int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r12
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned int v18; // esi
  _DWORD *v19; // r13
  int v20; // r9d
  int v21; // eax
  __int64 v22; // r15
  _QWORD *v23; // r13
  unsigned int v24; // eax
  __int64 LeafSibling; // rax
  int v27; // eax
  unsigned int v28; // r12d
  __int64 v29; // r12
  ULONG_PTR v30; // r12
  struct _KTHREAD *v31; // r15
  unsigned int v32; // ecx
  __int64 v33; // rbx
  unsigned int v34; // edx
  int v35; // r9d
  struct _KTHREAD *v36; // rax
  bool v37; // zf
  _DWORD *v38; // rcx
  __int64 v39; // rsi
  ULONG_PTR v40; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // r8d
  __int64 p_Process; // rbx
  int v44; // r9d
  struct _KTHREAD *v45; // rax
  unsigned int v46; // [rsp+40h] [rbp-38h]
  unsigned __int64 v47; // [rsp+48h] [rbp-30h]
  ULONGLONG *v48; // [rsp+50h] [rbp-28h]
  _OWORD v49[2]; // [rsp+58h] [rbp-20h] BYREF
  unsigned int v50; // [rsp+C0h] [rbp+48h]
  unsigned int v52; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v53; // [rsp+D8h] [rbp+60h]

  v49[0] = 0LL;
  v48 = SmEtwEnabled(0);
  v3 = (_QWORD *)(a1 + 24);
  v5 = *(_DWORD *)(v4 + 12) + *(_DWORD *)(v4 + 8) - 1;
  v6 = *(_DWORD *)(a1 + 56);
  v53 = v5;
  if ( (v6 & 1) != 0 )
  {
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (__int64 *)a1,
      a1 + 24);
    v6 = *(_DWORD *)(a1 + 56);
  }
  *(_DWORD *)(a1 + 56) = v6 & 0xFFFFFFFE;
  v7 = *(_DWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      a1 + 88);
    v7 = *(_DWORD *)(a1 + 120);
  }
  v50 = 0;
  v8 = 0;
  *(_DWORD *)(a1 + 120) = v7 & 0xFFFFFFFE;
  v52 = 0;
  while ( 1 )
  {
    v10 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
            a1,
            *(unsigned int *)(a2 + 8),
            v3);
    if ( v10 == -1073741818 )
      break;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      a1,
      v49,
      v3);
    v14 = *(_QWORD *)&v49[0];
    if ( !*(_QWORD *)&v49[0] )
      goto LABEL_29;
    v15 = *((_QWORD *)&v49[0] + 1) + 8LL;
    v16 = (unsigned __int16)**(_DWORD **)&v49[0] + 2LL;
    *((_QWORD *)&v49[0] + 1) = v15;
    if ( v15 < *(_QWORD *)&v49[0] + 8 * v16 )
    {
      v17 = v15;
      goto LABEL_21;
    }
    v13 = a1 + 16;
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
    {
      LeafSibling = *(_QWORD *)(*(_QWORD *)&v49[0] + 8LL);
    }
    else
    {
      LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                      a1,
                      *(_QWORD *)&v49[0]);
      if ( LeafSibling == -1 )
      {
        v17 = -1LL;
        goto LABEL_21;
      }
    }
    if ( LeafSibling )
    {
      v14 = LeafSibling;
      *(_QWORD *)&v49[0] = LeafSibling;
      *((_QWORD *)&v49[0] + 1) = LeafSibling + 16;
      v17 = LeafSibling + 16;
    }
    else
    {
      v17 = 0LL;
    }
LABEL_21:
    if ( v17 == -1 )
    {
      v10 = -1073741818;
      break;
    }
    if ( !v17 || (v18 = *(_DWORD *)v17, v53 < *(_DWORD *)v17) )
    {
LABEL_29:
      if ( v50 )
      {
        v39 = *(_QWORD *)(a1 + 800);
        if ( (*(_BYTE *)(v39 + 6021) & 4) != 0 )
        {
          v40 = v39 + 6024;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v40);
          CurrentThread = KeGetCurrentThread();
          if ( v40 - qword_140C50630 >= 0x8000000000LL )
            SessionId = -1;
          else
            SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
          _disable();
          p_Process = (__int64)&CurrentThread[1].Process;
          v13 = 0LL;
          while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v40 & 0x7FFFFFFFFFFFFFFCLL)
               || !*(_BYTE *)(p_Process + 18)
               || (*(_DWORD *)p_Process & 1) != 0
               || *(_DWORD *)(p_Process + 8) != SessionId )
          {
            v13 = (unsigned int)(v13 + 1);
            p_Process += 96LL;
            if ( (unsigned int)v13 >= 6 )
              goto LABEL_106;
          }
          *(_BYTE *)(p_Process + 18) = 0;
          if ( p_Process )
          {
            if ( *(__int64 *)p_Process < 0 )
            {
              *(_BYTE *)p_Process |= 2u;
              _enable();
              KiAbEntryRemoveFromTree(p_Process);
              _disable();
            }
            v44 = *(_DWORD *)(p_Process + 88);
            *(_DWORD *)(p_Process + 88) = 0;
            *(_BYTE *)(p_Process + 17) = 0;
            *(_QWORD *)p_Process = 0LL;
            CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
            _enable();
            if ( v44 )
              KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v40, v44);
            goto LABEL_109;
          }
LABEL_106:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v40, SessionId, 0LL);
          _enable();
LABEL_109:
          v45 = KeGetCurrentThread();
          v37 = v45->SpecialApcDisable++ == -1;
          if ( v37 && ($CEA84C04E3712D858E5667A507841A2A *)v45->ApcState.ApcListHead[0].Flink != &v45->152 )
            KiCheckForKernelApcDelivery();
        }
        SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v13, &v52, v50);
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
      }
      if ( !*(_BYTE *)(a1 + 776) && (*(_BYTE *)(a1 + 1904) & 3) != 3 )
      {
        v24 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL);
        if ( v24 )
          ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v24);
      }
      v10 = 0;
      break;
    }
    v19 = (_DWORD *)ST_STORE<SM_TRAITS>::StDmCombinePageEntry(a1, v17);
    v47 = (unsigned __int64)v19;
    v46 = *(_DWORD *)(v17 + 4);
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v19);
    if ( v48 )
      SmEtwLogStoreOp((_DWORD)v48, 1, v17, v20, *v19, a1, 0, 0);
    v21 = *(_DWORD *)(a1 + 48);
    v22 = a1 + 32;
    v23 = (_QWORD *)(a1 + 32);
    if ( v21 != -1 && v21 )
      v23 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * (unsigned int)(v21 - 1));
    if ( *v23 == v14 )
    {
      v23[1] = *((_QWORD *)&v49[0] + 1);
LABEL_8:
      v3 = (_QWORD *)(a1 + 24);
      goto LABEL_9;
    }
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (__int64 *)a1,
      a1 + 24);
    if ( *(_DWORD *)(a1 + 48) == -1 )
    {
      *(_OWORD *)v23 = v49[0];
      goto LABEL_8;
    }
    v3 = (_QWORD *)(a1 + 24);
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1,
      *(unsigned int *)(v14 + 16),
      a1 + 24);
    v27 = *(_DWORD *)(a1 + 48);
    if ( v27 != -1 && v27 )
      v22 = *v3 + 16LL * (unsigned int)(v27 - 1);
    *(_QWORD *)(v22 + 8) = *((_QWORD *)&v49[0] + 1);
LABEL_9:
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
      v49,
      a1);
    v49[0] = 0LL;
    v9 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
           a1,
           v3);
    v10 = v9;
    if ( v9 < 0 )
    {
      if ( v9 != -1073741818 )
        __int2c();
      break;
    }
    if ( !*(_BYTE *)(a1 + 776) )
    {
      v11 = *(_DWORD *)(v47 + 4);
      if ( !(v11 >> 12) )
        __int2c();
      *(_DWORD *)(v47 + 4) = v11 & 0xFFF | (((v11 >> 12) - 1) << 12);
      if ( ((v11 >> 12) - 1) << 12 )
        continue;
    }
    v10 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
            a1 + 64,
            v46,
            a1 + 88);
    if ( v10 < 0 )
    {
      if ( v10 == -1073741818 )
        break;
      if ( v10 != -1073741275 || **(int **)(a1 + 1920) < 2 )
      {
        __int2c();
        if ( v10 != -1073741275 )
          break;
      }
    }
    else
    {
      v10 = ST_STORE<SM_TRAITS>::StDmPageRecordRemove(a1, v47, a1 + 88);
      if ( v10 < 0 )
        break;
      SmHpChunkFree((_DWORD *)(a1 + 192), v47);
      v12 = a2;
      if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
      {
        v28 = v50;
        if ( v50 && v18 - v8 != v50 )
        {
          v29 = *(_QWORD *)(a1 + 800);
          if ( (*(_BYTE *)(v29 + 6021) & 4) != 0 )
          {
            v30 = v29 + 6024;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v30);
            v31 = KeGetCurrentThread();
            if ( v30 - qword_140C50630 >= 0x8000000000LL )
              v32 = -1;
            else
              v32 = MmGetSessionIdEx((__int64)v31->ApcState.Process);
            _disable();
            v33 = (__int64)&v31[1].Process;
            v34 = 0;
            while ( (*(_QWORD *)v33 & 0x7FFFFFFFFFFFFFFCLL) != (v30 & 0x7FFFFFFFFFFFFFFCLL)
                 || !*(_BYTE *)(v33 + 18)
                 || (*(_DWORD *)v33 & 1) != 0
                 || *(_DWORD *)(v33 + 8) != v32 )
            {
              ++v34;
              v33 += 96LL;
              if ( v34 >= 6 )
                goto LABEL_73;
            }
            *(_BYTE *)(v33 + 18) = 0;
            if ( v33 )
            {
              if ( *(__int64 *)v33 < 0 )
              {
                *(_BYTE *)v33 |= 2u;
                _enable();
                KiAbEntryRemoveFromTree(v33);
                _disable();
              }
              v35 = *(_DWORD *)(v33 + 88);
              *(_DWORD *)(v33 + 88) = 0;
              *(_BYTE *)(v33 + 17) = 0;
              *(_QWORD *)v33 = 0LL;
              v31->AbEntrySummary |= 1 << *(_BYTE *)(v33 + 16);
              _enable();
              if ( v35 )
                KiAbThreadRemoveBoostsSlow((ULONG_PTR)v31, v30, v35);
              goto LABEL_75;
            }
LABEL_73:
            if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v31, v30, v32, 0LL);
            _enable();
LABEL_75:
            v36 = KeGetCurrentThread();
            v12 = 1LL;
            v37 = v36->SpecialApcDisable++ == -1;
            if ( v37 && ($CEA84C04E3712D858E5667A507841A2A *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
              KiCheckForKernelApcDelivery();
          }
          SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v12, &v52, v50);
          SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
          v8 = v52;
          v28 = 0;
          v50 = 0;
        }
        v38 = *(_DWORD **)(a1 + 1920);
        if ( !*v38 || *v38 == 3 && v18 < v38[1] )
        {
          if ( !v28 )
            v8 = v18;
          v50 = v28 + 1;
          v52 = v8;
        }
      }
    }
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
    v49,
    a1);
  return (unsigned int)v10;
}
