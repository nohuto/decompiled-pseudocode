/*
 * XREFs of ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140236F54
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x140236EC0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14037A368 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14037C45C (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14037CCE8 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

struct _KTHREAD *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(__int64 a1, int a2)
{
  int v4; // r14d
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  struct _KTHREAD *v12; // rdi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // r9d
  struct _KTHREAD *result; // rax
  __int64 v20; // rcx
  __int128 v21; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v22[3]; // [rsp+48h] [rbp-89h] BYREF
  int v23; // [rsp+60h] [rbp-71h]
  int v24; // [rsp+64h] [rbp-6Dh]
  __int64 v25; // [rsp+68h] [rbp-69h]
  _BYTE v26[136]; // [rsp+70h] [rbp-61h] BYREF

  memset(v26, 0, 0x80uLL);
  v24 = 8;
  v22[1] = 0LL;
  v22[2] = 0LL;
  v25 = 0LL;
  v4 = 0;
  v22[0] = v26;
  v5 = 0;
  v23 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = a1 + 440;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v8 = *(_QWORD *)(a1 + 448);
  v21 = 0LL;
  if ( !v8 )
    goto LABEL_2;
  while ( !*(_BYTE *)(v8 + 3) )
    v8 = *(_QWORD *)(v8 + 8);
  *(_QWORD *)&v21 = v8;
  *((_QWORD *)&v21 + 1) = v8 + 8;
  while ( 1 )
  {
    if ( v4 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v5,
        v22);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v20,
        &v21,
        v22);
      v8 = v21;
      v4 = 0;
    }
    if ( !v8 )
      break;
    v9 = *((_QWORD *)&v21 + 1) + 8LL;
    v10 = (unsigned __int16)*(_DWORD *)v8 + 2LL;
    *((_QWORD *)&v21 + 1) = v9;
    if ( v9 >= v8 + 8 * v10 )
    {
      v11 = *(_QWORD *)(v8 + 8);
      if ( v11 )
      {
        v8 = *(_QWORD *)(v8 + 8);
        *(_QWORD *)&v21 = v11;
        *((_QWORD *)&v21 + 1) = v11 + 16;
      }
      v9 = (v11 + 16) & -(__int64)(v11 != 0);
    }
    if ( !v9 )
      break;
    if ( *(unsigned __int16 *)(v9 + 4) == a2 )
    {
      v5 = *(_DWORD *)v9;
      *(_BYTE *)(v9 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v22, &v21);
      v4 = 1;
LABEL_2:
      v8 = v21;
      continue;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 440);
  v12 = KeGetCurrentThread();
  if ( v7 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(v12->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (char *)&v12[1].Process;
  v15 = v7 & 0x7FFFFFFFFFFFFFFCLL;
  v16 = 0LL;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v15
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != SessionId )
  {
    v16 = (unsigned int)(v16 + 1);
    p_Process += 96;
    if ( (unsigned int)v16 >= 6 )
      goto LABEL_31;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v16, v15);
      _disable();
    }
    v17 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    v12->AbEntrySummary |= 1 << p_Process[16];
    _enable();
    if ( v17 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v12, v7, v17);
    goto LABEL_27;
  }
LABEL_31:
  if ( (*((_DWORD *)&v12->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v12, v7, SessionId, 0LL);
  _enable();
LABEL_27:
  result = KeGetCurrentThread();
  if ( result->SpecialApcDisable++ == -1 )
  {
    result = (struct _KTHREAD *)((char *)result + 152);
    if ( *(struct _KTHREAD **)&result->Header.Lock != result )
      return (struct _KTHREAD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
