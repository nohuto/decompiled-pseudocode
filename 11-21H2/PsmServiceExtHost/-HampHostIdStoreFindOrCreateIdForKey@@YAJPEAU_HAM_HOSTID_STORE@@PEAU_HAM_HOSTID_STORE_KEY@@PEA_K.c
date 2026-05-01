/*
 * XREFs of ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180008790
 * Callers:
 *     HamRpcSrvFindOrCreateHostId @ 0x180008570 (HamRpcSrvFindOrCreateHostId.c)
 * Callees:
 *     ?HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_ENTRY@@@Z @ 0x180009CFC (-HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STOR.c)
 *     ?HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z @ 0x18002C3DC (-HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x180037AB0 (CemRcTableFindOrInsertEx.c)
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x18003A5D0 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z @ 0x18003CDB0 (-HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z @ 0x18003CDD0 (-HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareLeafByKey@@YAJPEAX0@Z @ 0x18003DC10 (-HampHostIdStoreCompareLeafByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180043558 (-HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180043590 (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TREE_NODE@@@Z @ 0x180045A28 (-HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TR.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HampHostIdStoreLeafReference@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU1@@Z @ 0x1800772AC (-HampHostIdStoreLeafReference@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU1@@Z.c)
 */

__int64 __fastcall HampHostIdStoreFindOrCreateIdForKey(
        struct _HAM_HOSTID_STORE *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        unsigned __int64 *a3)
{
  DWORD v3; // ebp
  struct _HAM_HOSTID_STORE_KEY *v6; // rsi
  struct _HAM_HOSTID_ENTRY *v7; // rdi
  char *v8; // r15
  _QWORD *Value; // rbx
  void *v10; // r14
  unsigned __int64 v11; // rbx
  int v12; // ebp
  int v13; // eax
  unsigned __int64 v14; // rax
  struct _HAM_RC_TREE_NODE *v15; // r14
  struct _HAM_RC_TREE_NODE *Heap; // rax
  unsigned int v17; // ebp
  struct _HAM_HOSTID_STORE_KEY *v18; // r15
  unsigned __int64 v19; // rbx
  int v20; // ebp
  int v21; // eax
  unsigned __int64 v22; // rax
  char *v23; // rax
  struct _HAM_HOSTID_STORE_KEY *v24; // r12
  unsigned __int8 IsDynamicKey; // al
  int v26; // r13d
  unsigned __int64 v27; // rbx
  int v28; // esi
  int v29; // eax
  unsigned __int64 v30; // rax
  struct _HAM_HOSTID_STORE_KEY *v31; // rax
  _OWORD *v32; // rax
  struct _HAM_HOSTID_STORE_KEY *v33; // rcx
  __int64 v34; // rdx
  __int128 v35; // xmm0
  unsigned __int64 *v36; // rbx
  int v37; // edi
  unsigned __int64 v38; // rbx
  int v39; // eax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  struct _HAM_HOSTID_ENTRY *v42; // rax
  struct _HAM_HOSTID_ENTRY *v43; // rbx
  __int64 *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  signed __int64 v47; // rax
  signed __int64 v48; // rcx
  bool v49; // zf
  signed __int64 v50; // rtt
  unsigned __int64 v51; // r13
  signed __int64 v52; // rax
  bool v53; // cc
  signed __int64 v54; // rax
  unsigned __int64 *v55; // rax
  signed __int64 v56; // rax
  signed __int64 v57; // rcx
  bool v58; // zf
  signed __int64 v59; // rtt
  unsigned __int64 v60; // rdi
  signed __int64 v61; // rax
  signed __int64 v62; // rax
  signed __int64 v63; // rax
  signed __int64 v64; // rcx
  bool v65; // zf
  signed __int64 v66; // rtt
  unsigned __int64 v67; // rdi
  signed __int64 v68; // rax
  signed __int64 v69; // rax
  signed __int64 v70; // rax
  signed __int64 v71; // rcx
  bool v72; // zf
  signed __int64 v73; // rtt
  unsigned __int64 v74; // rdi
  signed __int64 v75; // rbx
  signed __int64 v76; // rbx
  char *v78; // [rsp+30h] [rbp-58h]
  struct _HAM_HOSTID_ENTRY *v79; // [rsp+38h] [rbp-50h]
  struct _HAM_RC_TREE_NODE *v83; // [rsp+A8h] [rbp+20h]

  v3 = HampLockTrackerId;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockShared(a1);
  v10 = (void *)*((unsigned int *)a2 + 133);
  RtlAcquireSRWLockShared((char *)a1 + 72);
  v11 = *((_QWORD *)a1 + 7);
  v12 = *((_BYTE *)a1 + 64) & 1;
  if ( (*((_BYTE *)a1 + 64) & 1) != 0 )
  {
    if ( !v11 )
    {
LABEL_20:
      RtlReleaseSRWLockShared((char *)a1 + 72);
      goto LABEL_24;
    }
    v11 ^= (unsigned __int64)a1 + 56;
  }
  while ( v11 )
  {
    v13 = HampHostIdStoreCompareSessionByKey(v10, (void *)v11);
    if ( v13 >= 0 )
    {
      if ( v13 <= 0 )
        break;
      v14 = *(_QWORD *)(v11 + 8);
    }
    else
    {
      v14 = *(_QWORD *)v11;
    }
    if ( v12 && v14 )
      v11 ^= v14;
    else
      v11 = v14;
  }
  v15 = (struct _HAM_RC_TREE_NODE *)v11;
  if ( v11 )
  {
    if ( !*(_QWORD *)(v11 + 24) )
      goto LABEL_20;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24)) <= 1 )
      __fastfail(0xEu);
  }
  RtlReleaseSRWLockShared((char *)a1 + 72);
  if ( v11 )
  {
    v18 = a2;
    goto LABEL_31;
  }
LABEL_24:
  Heap = (struct _HAM_RC_TREE_NODE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
  v15 = Heap;
  if ( !Heap )
  {
    v17 = -1073741801;
    goto LABEL_110;
  }
  *(_OWORD *)Heap = 0LL;
  *((_OWORD *)Heap + 1) = 0LL;
  *((_OWORD *)Heap + 2) = 0LL;
  *((_OWORD *)Heap + 3) = 0LL;
  *((_OWORD *)Heap + 4) = 0LL;
  *((_OWORD *)Heap + 5) = 0LL;
  HamRcNodeInitializeFromRoot(
    (void (*)(struct _CEM_RC_OBJECT *))HampHostIdStoreApplicationDestroy,
    (struct _HAM_HOSTID_STORE *)((char *)a1 + 16),
    Heap);
  v18 = a2;
  *((_DWORD *)v15 + 22) = *((_DWORD *)a2 + 133);
  CemRcTableFindOrInsertEx(
    (_DWORD)a1 + 56,
    *((_DWORD *)a2 + 133),
    (unsigned int)HampHostIdStoreCompareSessionByKey,
    (_DWORD)v15);
  if ( v83 )
  {
    if ( v83 != v15 )
    {
      CemRcObjectDereference(v15);
      v15 = v83;
    }
  }
  else
  {
    CemRcObjectDereference(v15);
    v15 = 0LL;
  }
LABEL_31:
  RtlAcquireSRWLockShared((char *)v15 + 56);
  v19 = *((_QWORD *)v15 + 5);
  v20 = *((_BYTE *)v15 + 48) & 1;
  if ( (*((_BYTE *)v15 + 48) & 1) == 0 )
    goto LABEL_34;
  if ( v19 )
  {
    v19 ^= (unsigned __int64)v15 + 40;
LABEL_34:
    while ( v19 )
    {
      v21 = HampUserCompareByIdentity((char *)v18 + 464, (void *)v19);
      if ( v21 >= 0 )
      {
        if ( v21 <= 0 )
          break;
        v22 = *(_QWORD *)(v19 + 8);
      }
      else
      {
        v22 = *(_QWORD *)v19;
      }
      if ( v20 && v22 )
        v19 ^= v22;
      else
        v19 = v22;
    }
    v8 = (char *)v19;
    if ( v19 )
    {
      if ( !*(_QWORD *)(v19 + 24) )
        goto LABEL_46;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v19 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    RtlReleaseSRWLockShared((char *)v15 + 56);
    if ( v19 )
      goto LABEL_55;
    goto LABEL_50;
  }
LABEL_46:
  RtlReleaseSRWLockShared((char *)v15 + 56);
LABEL_50:
  v23 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA0uLL);
  v8 = v23;
  if ( !v23 )
  {
    v17 = -1073741801;
    goto LABEL_110;
  }
  memset_0(v23, 0, 0xA0uLL);
  HamRcNodeInitialize(
    (void (*)(struct _CEM_RC_OBJECT *))HampHostIdStoreApplicationDestroy,
    v15,
    (struct _HAM_RC_TREE_NODE *)v8);
  *(_OWORD *)(v8 + 88) = *((_OWORD *)a2 + 29);
  *(_OWORD *)(v8 + 104) = *((_OWORD *)a2 + 30);
  *(_OWORD *)(v8 + 120) = *((_OWORD *)a2 + 31);
  *(_OWORD *)(v8 + 136) = *((_OWORD *)a2 + 32);
  *((_DWORD *)v8 + 38) = *((_DWORD *)a2 + 132);
  CemRcTableFindOrInsertEx((_DWORD)v15 + 40, (_DWORD)a2 + 464, (unsigned int)HampUserCompareByIdentity, (_DWORD)v8);
  if ( !v78 || v78 != v8 )
  {
    CemRcObjectDereference(v8);
    v8 = v78;
  }
LABEL_55:
  v24 = a2;
  IsDynamicKey = PsmIsDynamicKey(a2);
  v26 = IsDynamicKey;
  if ( !IsDynamicKey )
  {
    RtlAcquireSRWLockShared(v8 + 56);
    v27 = *((_QWORD *)v8 + 5);
    v28 = v8[48] & 1;
    if ( (v8[48] & 1) != 0 )
    {
      if ( !v27 )
      {
LABEL_71:
        v6 = 0LL;
        goto LABEL_74;
      }
      v27 ^= (unsigned __int64)(v8 + 40);
    }
    while ( v27 )
    {
      v29 = HampHostIdStoreCompareApplicationByKey(a2, (void *)v27);
      if ( v29 >= 0 )
      {
        if ( v29 <= 0 )
          break;
        v30 = *(_QWORD *)(v27 + 8);
      }
      else
      {
        v30 = *(_QWORD *)v27;
      }
      if ( v28 && v30 )
        v27 ^= v30;
      else
        v27 = v30;
    }
    v6 = (struct _HAM_HOSTID_STORE_KEY *)v27;
    if ( v27 )
    {
      if ( !*(_QWORD *)(v27 + 24) )
        goto LABEL_71;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v27 + 24)) <= 1 )
        __fastfail(0xEu);
    }
LABEL_74:
    RtlReleaseSRWLockShared(v8 + 56);
    v24 = a2;
    if ( v6 )
      goto LABEL_83;
  }
  v31 = (struct _HAM_HOSTID_STORE_KEY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x228uLL);
  v6 = v31;
  if ( !v31 )
  {
    v17 = -1073741801;
    goto LABEL_110;
  }
  memset_0(v31, 0, 0x228uLL);
  HamRcNodeInitialize((void (*)(struct _CEM_RC_OBJECT *))HampHostIdStoreLeafDestroy, (struct _HAM_RC_TREE_NODE *)v8, v6);
  v32 = (_OWORD *)((char *)v6 + 88);
  v33 = v24;
  v34 = 3LL;
  do
  {
    v32 += 8;
    v35 = *(_OWORD *)v33;
    v33 = (struct _HAM_HOSTID_STORE_KEY *)((char *)v33 + 128);
    *(v32 - 8) = v35;
    *(v32 - 7) = *((_OWORD *)v33 - 7);
    *(v32 - 6) = *((_OWORD *)v33 - 6);
    *(v32 - 5) = *((_OWORD *)v33 - 5);
    *(v32 - 4) = *((_OWORD *)v33 - 4);
    *(v32 - 3) = *((_OWORD *)v33 - 3);
    *(v32 - 2) = *((_OWORD *)v33 - 2);
    *(v32 - 1) = *((_OWORD *)v33 - 1);
    --v34;
  }
  while ( v34 );
  *v32 = *(_OWORD *)v33;
  v32[1] = *((_OWORD *)v33 + 1);
  v32[2] = *((_OWORD *)v33 + 2);
  v32[3] = *((_OWORD *)v33 + 3);
  v32[4] = *((_OWORD *)v33 + 4);
  CemRcTableFindOrInsertEx(
    (_DWORD)v8 + 40,
    (_DWORD)v24,
    (unsigned int)HampHostIdStoreCompareApplicationByKey,
    (_DWORD)v6);
  if ( !a2 || a2 != v6 )
  {
    CemRcObjectDereference(v6);
    v6 = a2;
  }
  if ( v26 )
    goto LABEL_104;
LABEL_83:
  v36 = (unsigned __int64 *)((char *)v6 + 40);
  RtlAcquireSRWLockShared((char *)v6 + 56);
  v37 = *((_BYTE *)v6 + 48) & 1;
  if ( (*((_BYTE *)v6 + 48) & 1) != 0 )
  {
    if ( !*v36 )
    {
LABEL_99:
      v7 = 0LL;
      goto LABEL_102;
    }
    v38 = *v36 ^ (unsigned __int64)v36;
  }
  else
  {
    v38 = *v36;
  }
  while ( v38 )
  {
    v39 = HampHostIdStoreCompareLeafByKey(v24, (void *)v38);
    if ( v39 >= 0 )
    {
      if ( v39 <= 0 )
        break;
      v40 = *(_QWORD *)(v38 + 8);
    }
    else
    {
      v40 = *(_QWORD *)v38;
    }
    if ( v37 && v40 )
      v38 ^= v40;
    else
      v38 = v40;
  }
  v7 = (struct _HAM_HOSTID_ENTRY *)v38;
  if ( v38 )
  {
    if ( !*(_QWORD *)(v38 + 24) )
      goto LABEL_99;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v38 + 24)) <= 1 )
      __fastfail(0xEu);
  }
LABEL_102:
  RtlReleaseSRWLockShared((char *)v6 + 56);
  if ( v7 )
  {
    v41 = *((_QWORD *)v7 + 11);
    goto LABEL_109;
  }
LABEL_104:
  v42 = (struct _HAM_HOSTID_ENTRY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x270uLL);
  v7 = v42;
  if ( !v42 )
  {
    v17 = -1073741801;
    goto LABEL_110;
  }
  HampHostIdStoreLeafInitialize(v6, v24, v42);
  CemRcTableFindOrInsertEx((_DWORD)v6 + 40, (_DWORD)v24, (unsigned int)HampHostIdStoreCompareLeafByKey, (_DWORD)v7);
  v43 = v79;
  if ( v79 )
  {
    if ( v79 == v7 )
    {
      v55 = (unsigned __int64 *)((char *)v7 + 88);
      v7 = 0LL;
      v41 = *v55;
      goto LABEL_109;
    }
  }
  else
  {
    v43 = 0LL;
  }
  CemRcObjectDereference(v7);
  v41 = *((_QWORD *)v43 + 11);
  v7 = v43;
LABEL_109:
  v17 = 0;
  *a3 = v41;
LABEL_110:
  if ( HampLockTrackerId != -1 )
  {
    v44 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v45 = *v44;
    if ( (*v44 & 0x800) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v49 = v44[12]-- == 1;
    if ( v49 )
      *v44 = v45 & 0xFFFFFFFFFFFFF7FFuLL;
  }
  RtlReleaseSRWLockShared(a1);
  if ( v7 )
  {
    HampHostIdStoreAcquireLockExclusive(a1);
    v46 = *((_QWORD *)v7 + 77);
    if ( v46 )
    {
      TpWaitForTimer(v46, 1LL);
      TpReleaseTimer(*((_QWORD *)v7 + 77));
      *((_QWORD *)v7 + 77) = 0LL;
    }
    if ( *((_WORD *)v7 + 304) )
    {
      *((_WORD *)v7 + 304) = 0;
      HampHostIdStoreLeafReference(v7);
    }
    HampHostIdStoreReleaseLockExclusive(a1);
    _m_prefetchw((char *)v7 + 24);
    v47 = *((_QWORD *)v7 + 3);
    v48 = v47 - 1;
    v49 = v47 == 1;
    if ( v47 - 1 <= 0 )
    {
LABEL_123:
      if ( !v49 )
        __fastfail(0xEu);
      v51 = *((_QWORD *)v7 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *((_QWORD *)v7 + 2) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)v7 + 3) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(struct _HAM_HOSTID_ENTRY *))(v51 + 24))(v7);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v51 + 16);
        v52 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v53 = v52 <= 1;
        v54 = v52 - 1;
        if ( v53 )
        {
          if ( v54 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v51 + 16);
          (*(void (__fastcall **)(struct _HAM_HOSTID_ENTRY *))(v51 + 24))(v7);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v51 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v50 = v47;
        v47 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 3, v48, v47);
        if ( v50 == v47 )
          break;
        v48 = v47 - 1;
        v49 = v47 == 1;
        if ( v47 - 1 <= 0 )
          goto LABEL_123;
      }
    }
  }
  if ( v6 )
  {
    _m_prefetchw((char *)v6 + 24);
    v56 = *((_QWORD *)v6 + 3);
    v57 = v56 - 1;
    v58 = v56 == 1;
    if ( v56 - 1 <= 0 )
    {
LABEL_140:
      if ( !v58 )
        __fastfail(0xEu);
      v60 = *((_QWORD *)v6 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *((_QWORD *)v6 + 2) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)v6 + 3) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(struct _HAM_HOSTID_STORE_KEY *))(v60 + 24))(v6);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v60 + 16);
        v61 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v53 = v61 <= 1;
        v62 = v61 - 1;
        if ( v53 )
        {
          if ( v62 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v60 + 16);
          (*(void (__fastcall **)(struct _HAM_HOSTID_STORE_KEY *))(v60 + 24))(v6);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v60 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v59 = v56;
        v56 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 3, v57, v56);
        if ( v59 == v56 )
          break;
        v57 = v56 - 1;
        v58 = v56 == 1;
        if ( v56 - 1 <= 0 )
          goto LABEL_140;
      }
    }
  }
  if ( v8 )
  {
    _m_prefetchw(v8 + 24);
    v63 = *((_QWORD *)v8 + 3);
    v64 = v63 - 1;
    v65 = v63 == 1;
    if ( v63 - 1 <= 0 )
    {
LABEL_155:
      if ( !v65 )
        __fastfail(0xEu);
      v67 = *((_QWORD *)v8 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *((_QWORD *)v8 + 2) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)v8 + 3) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(char *))(v67 + 24))(v8);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v67 + 16);
        v68 = _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v53 = v68 <= 1;
        v69 = v68 - 1;
        if ( v53 )
        {
          if ( v69 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v67 + 16);
          (*(void (__fastcall **)(char *))(v67 + 24))(v8);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v67 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v66 = v63;
        v63 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 3, v64, v63);
        if ( v66 == v63 )
          break;
        v64 = v63 - 1;
        v65 = v63 == 1;
        if ( v63 - 1 <= 0 )
          goto LABEL_155;
      }
    }
  }
  if ( v15 )
  {
    _m_prefetchw((char *)v15 + 24);
    v70 = *((_QWORD *)v15 + 3);
    v71 = v70 - 1;
    v72 = v70 == 1;
    if ( v70 - 1 <= 0 )
    {
LABEL_170:
      if ( !v72 )
        __fastfail(0xEu);
      v74 = *((_QWORD *)v15 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *((_QWORD *)v15 + 2) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)v15 + 3) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(struct _HAM_RC_TREE_NODE *))(v74 + 24))(v15);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v74 + 16);
        v75 = _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v53 = v75 <= 1;
        v76 = v75 - 1;
        if ( v53 )
        {
          if ( v76 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v74 + 16);
          (*(void (__fastcall **)(struct _HAM_RC_TREE_NODE *))(v74 + 24))(v15);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v74 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v73 = v70;
        v70 = _InterlockedCompareExchange64((volatile signed __int64 *)v15 + 3, v71, v70);
        if ( v73 == v70 )
          break;
        v71 = v70 - 1;
        v72 = v70 == 1;
        if ( v70 - 1 <= 0 )
          goto LABEL_170;
      }
    }
  }
  return v17;
}
