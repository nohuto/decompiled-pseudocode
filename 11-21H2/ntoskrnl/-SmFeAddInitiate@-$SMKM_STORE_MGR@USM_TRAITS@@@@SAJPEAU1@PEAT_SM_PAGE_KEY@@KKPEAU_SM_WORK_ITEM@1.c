/*
 * XREFs of ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14037C880
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14037BD80 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14037C6BC (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14037C144 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14037C45C (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14037C48C (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14037CCE8 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14037CE7C (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14037CFB8 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(
        __int64 a1,
        unsigned int *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v8; // r13
  __int16 v9; // si
  unsigned int v10; // edi
  ULONG_PTR v11; // rsi
  int v12; // r12d
  int v13; // r14d
  ULONG_PTR v14; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v17; // r15d
  __int64 v18; // rcx
  unsigned int v19; // r9d
  unsigned int v20; // r10d
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r9
  struct _KTHREAD *v24; // rdi
  unsigned int SessionId; // r8d
  __int64 v26; // rbx
  unsigned int v27; // ecx
  int v28; // r9d
  struct _KTHREAD *v29; // rcx
  bool v30; // zf
  struct _KTHREAD *v31; // rax
  unsigned __int64 v32; // rax
  struct _KTHREAD *v33; // rax
  struct _KTHREAD *v34; // rax
  struct _KTHREAD *v35; // r13
  unsigned int v36; // ecx
  __int64 p_Process; // r14
  unsigned int v38; // edx
  int v39; // edx
  struct _KTHREAD *v40; // rax
  NTSTATUS v41; // eax
  struct _KTHREAD *v42; // rcx
  NTSTATUS v43; // r14d
  unsigned int v44; // ecx
  unsigned int v45; // [rsp+34h] [rbp-CCh] BYREF
  int v46; // [rsp+38h] [rbp-C8h]
  __int64 v47; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v48; // [rsp+48h] [rbp-B8h]
  __int64 v49; // [rsp+50h] [rbp-B0h]
  __int128 Object; // [rsp+58h] [rbp-A8h] BYREF
  char *v51; // [rsp+68h] [rbp-98h]
  __int128 v52; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v53; // [rsp+80h] [rbp-80h]
  LARGE_INTEGER Timeout; // [rsp+88h] [rbp-78h] BYREF
  __int64 v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  unsigned int **v57[3]; // [rsp+A0h] [rbp-60h] BYREF
  int v58; // [rsp+B8h] [rbp-48h]
  int v59; // [rsp+BCh] [rbp-44h]
  __int64 v60; // [rsp+C0h] [rbp-40h]
  _BYTE v61[136]; // [rsp+C8h] [rbp-38h] BYREF

  v56 = a5;
  v8 = a1;
  v9 = a4;
  v46 = a3;
  v53 = a2;
  v49 = a1;
  v55 = a6;
  v48 = a4;
  memset(v61, 0, 0x80uLL);
  v10 = *a2;
  v47 = 0x1000000000000LL;
  v51 = 0LL;
  WORD2(v47) = v9;
  v57[0] = (unsigned int **)v61;
  v11 = v8 + 440;
  v45 = 0;
  v12 = 0;
  v57[1] = 0LL;
  v13 = 0;
  Object = 0LL;
  v57[2] = 0LL;
  v14 = v8 + 440;
  v60 = 0LL;
  v58 = 0;
  v59 = 8;
  if ( (a7 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v14, 0LL);
  }
  else if ( (a7 & 4) != 0 )
  {
    if ( !StLockTryAcquireExclusive(v14, &v45) )
      return 3221225557LL;
  }
  else
  {
    v33 = KeGetCurrentThread();
    --v33->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v14, 0LL);
  }
  v17 = -1073740682;
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      v8 + 448,
      v10,
      v57);
    v52 = 0LL;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v18,
      (__int64)&v52,
      (__int64)v57);
    if ( !(_QWORD)v52 )
      goto LABEL_10;
    v21 = *((_QWORD *)&v52 + 1) + 8LL;
    v22 = (unsigned __int16)*(_DWORD *)v52 + 2LL;
    *((_QWORD *)&v52 + 1) = v21;
    if ( v21 >= (__int64)v52 + 8 * v22 )
    {
      v32 = *(_QWORD *)(v52 + 8);
      if ( v32 )
      {
        *(_QWORD *)&v52 = *(_QWORD *)(v52 + 8);
        *((_QWORD *)&v52 + 1) = v32 + 16;
      }
      v21 = (v32 + 16) & ((unsigned __int128)-(__int128)v32 >> 64);
    }
    if ( !v21 || v19 < *(_DWORD *)v21 && v20 < *(_DWORD *)v21 )
    {
LABEL_10:
      if ( (a7 & 2) != 0 )
      {
        v17 = 0;
        goto LABEL_38;
      }
      while ( 1 )
      {
        LODWORD(v47) = v10;
        v17 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
                v8 + 448,
                v10,
                v57);
        if ( v17 != -1073741275 )
          break;
        v17 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
                (__int64 *)(v8 + 448),
                v57,
                &v47);
        if ( v17 < 0 )
          goto LABEL_92;
        if ( ++v12 == v46 )
        {
          SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v55, v8, v48, v56);
          v17 = 0;
          goto LABEL_15;
        }
        ++v10;
      }
      if ( v17 >= 0 )
        v17 = -1073741484;
LABEL_92:
      if ( v12 )
        SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(v8, v53, v12, v23, 2);
      goto LABEL_15;
    }
    if ( (*(_BYTE *)(v21 + 7) & 1) != 0 )
      break;
    if ( v13 || (a7 & 1) == 0 )
      goto LABEL_37;
    LOWORD(Object) = 0;
    v51 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    *(_QWORD *)(v8 + 1656) = &Object;
    BYTE2(Object) = 6;
    DWORD1(Object) = 0;
    *(_DWORD *)(v8 + 1648) = v10;
    if ( (a7 & 2) != 0 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v11);
      KeAbPostRelease(v11);
      v34 = KeGetCurrentThread();
      v30 = v34->SpecialApcDisable++ == -1;
      if ( v30 && ($CEA84C04E3712D858E5667A507841A2A *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
        KiCheckForKernelApcDelivery();
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v11);
      v35 = KeGetCurrentThread();
      v36 = v11 - qword_140C50630 >= 0x8000000000LL ? -1 : MmGetSessionIdEx((__int64)v35->ApcState.Process);
      _disable();
      p_Process = (__int64)&v35[1].Process;
      v38 = 0;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v11 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(p_Process + 18)
           || (*(_DWORD *)p_Process & 1) != 0
           || *(_DWORD *)(p_Process + 8) != v36 )
      {
        ++v38;
        p_Process += 96LL;
        if ( v38 >= 6 )
          goto LABEL_76;
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
        v39 = *(_DWORD *)(p_Process + 88);
        *(_DWORD *)(p_Process + 88) = 0;
        *(_BYTE *)(p_Process + 17) = 0;
        *(_QWORD *)p_Process = 0LL;
        v35->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
        _enable();
        if ( v39 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v35, v11, v39);
        goto LABEL_78;
      }
LABEL_76:
      if ( (*((_DWORD *)&v35->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v35, v11, v36, 0LL);
      _enable();
LABEL_78:
      v40 = KeGetCurrentThread();
      v30 = v40->SpecialApcDisable++ == -1;
      if ( v30 && ($CEA84C04E3712D858E5667A507841A2A *)v40->ApcState.ApcListHead[0].Flink != &v40->152 )
        KiCheckForKernelApcDelivery();
      v8 = v49;
    }
    Timeout.QuadPart = -2500000LL;
    v41 = KeWaitForSingleObject(&Object, WrKernel, 0, 0, &Timeout);
    v42 = KeGetCurrentThread();
    v43 = v41;
    --v42->SpecialApcDisable;
    if ( (a7 & 2) != 0 )
    {
      ExAcquirePushLockSharedEx(v11, 0LL);
      v44 = 2;
    }
    else
    {
      ExAcquirePushLockExclusiveEx(v11, 0LL);
      v44 = 1;
    }
    v45 = v44;
    *(_QWORD *)(v8 + 1656) = 0LL;
    if ( v43 )
      goto LABEL_37;
    v13 = 1;
  }
  v17 = -1073740747;
LABEL_37:
  if ( (a7 & 2) != 0 )
  {
LABEL_38:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v11);
    KeAbPostRelease(v11);
    v31 = KeGetCurrentThread();
    v30 = v31->SpecialApcDisable++ == -1;
    if ( v30 )
    {
      v30 = v31->ApcState.ApcListHead[0].Flink == v31->ApcState.ApcListHead;
LABEL_33:
      if ( !v30 )
        KiCheckForKernelApcDelivery();
      return (unsigned int)v17;
    }
    return (unsigned int)v17;
  }
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11);
  v24 = KeGetCurrentThread();
  if ( v11 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)v24->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  v26 = (__int64)&v24[1].Process;
  v27 = 0;
  while ( (*(_QWORD *)v26 & 0x7FFFFFFFFFFFFFFCLL) != (v11 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v26 + 18)
       || (*(_DWORD *)v26 & 1) != 0
       || *(_DWORD *)(v26 + 8) != SessionId )
  {
    ++v27;
    v26 += 96LL;
    if ( v27 >= 6 )
      goto LABEL_44;
  }
  *(_BYTE *)(v26 + 18) = 0;
  if ( v26 )
  {
    if ( *(__int64 *)v26 < 0 )
    {
      *(_BYTE *)v26 |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(v26);
      _disable();
    }
    v28 = *(_DWORD *)(v26 + 88);
    *(_DWORD *)(v26 + 88) = 0;
    *(_BYTE *)(v26 + 17) = 0;
    *(_QWORD *)v26 = 0LL;
    v24->AbEntrySummary |= 1 << *(_BYTE *)(v26 + 16);
    _enable();
    if ( v28 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v24, v11, v28);
    goto LABEL_29;
  }
LABEL_44:
  if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v24, v11, SessionId, 0LL);
  _enable();
LABEL_29:
  v29 = KeGetCurrentThread();
  v30 = v29->SpecialApcDisable++ == -1;
  if ( v30 )
  {
    v30 = v29->ApcState.ApcListHead[0].Flink == v29->ApcState.ApcListHead;
    goto LABEL_33;
  }
  return (unsigned int)v17;
}
