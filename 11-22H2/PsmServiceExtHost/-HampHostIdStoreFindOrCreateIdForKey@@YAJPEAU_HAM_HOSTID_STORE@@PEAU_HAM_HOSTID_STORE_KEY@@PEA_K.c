/*
 * XREFs of ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180028B20
 * Callers:
 *     HamRpcSrvFindOrCreateHostId @ 0x180027FF0 (HamRpcSrvFindOrCreateHostId.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampHostIdStoreCompareUserByKey@@YAJPEAX0@Z @ 0x180010B40 (-HampHostIdStoreCompareUserByKey@@YAJPEAX0@Z.c)
 *     ?HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z @ 0x18001150C (-HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z.c)
 *     ?HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z @ 0x180011670 (-HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z @ 0x180011790 (-HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareLeafByKey@@YAJPEAX0@Z @ 0x180012270 (-HampHostIdStoreCompareLeafByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_ENTRY@@@Z @ 0x180015978 (-HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STOR.c)
 *     CemRcTableFindOrInsertEx @ 0x180037AB0 (CemRcTableFindOrInsertEx.c)
 *     ?HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x18003F144 (-HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x18003F17C (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TREE_NODE@@@Z @ 0x180041ABC (-HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TR.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HampHostIdStoreLeafReference@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU1@@Z @ 0x18008035C (-HampHostIdStoreLeafReference@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU1@@Z.c)
 */

__int64 __fastcall HampHostIdStoreFindOrCreateIdForKey(
        struct _HAM_HOSTID_STORE *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        unsigned __int64 *a3)
{
  DWORD v3; // ebp
  char *v6; // rsi
  struct _HAM_HOSTID_ENTRY *v7; // rdi
  char *v8; // r15
  _QWORD *Value; // rbx
  void *v10; // r14
  __int64 v11; // rbx
  int v12; // ebp
  int v13; // eax
  __int64 v14; // rax
  struct _HAM_RC_TREE_NODE *v15; // r14
  struct _HAM_RC_TREE_NODE *Heap; // rax
  unsigned int v17; // ebp
  struct _HAM_HOSTID_STORE_KEY *v18; // r15
  __int64 v19; // rbx
  int v20; // ebp
  int v21; // eax
  __int64 v22; // rax
  char *v23; // rax
  struct _HAM_HOSTID_STORE_KEY *v24; // r12
  unsigned __int8 IsDynamicKey; // al
  int v26; // r13d
  char *v27; // r12
  int v28; // esi
  __int64 v29; // rbx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  unsigned __int64 v33; // rbp
  char *v34; // rax
  _OWORD *v35; // rax
  struct _HAM_HOSTID_STORE_KEY *v36; // rdx
  __int64 v37; // rcx
  __int128 v38; // xmm0
  char *v39; // r12
  int v40; // edi
  __int64 v41; // rbx
  unsigned __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  struct _HAM_HOSTID_ENTRY *v46; // rax
  struct _HAM_HOSTID_STORE_KEY *v47; // rbx
  __int64 *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  signed __int64 v51; // rax
  signed __int64 v52; // rcx
  bool v53; // zf
  signed __int64 v54; // rtt
  unsigned __int64 v55; // r13
  signed __int64 v56; // rax
  bool v57; // cc
  signed __int64 v58; // rax
  unsigned __int64 *v59; // rax
  signed __int64 v60; // rax
  signed __int64 v61; // rcx
  bool v62; // zf
  signed __int64 v63; // rtt
  unsigned __int64 v64; // rdi
  signed __int64 v65; // rax
  signed __int64 v66; // rax
  signed __int64 v67; // rax
  signed __int64 v68; // rcx
  bool v69; // zf
  signed __int64 v70; // rtt
  unsigned __int64 v71; // rdi
  signed __int64 v72; // rax
  signed __int64 v73; // rax
  signed __int64 v74; // rax
  signed __int64 v75; // rcx
  bool v76; // zf
  signed __int64 v77; // rtt
  unsigned __int64 v78; // rdi
  signed __int64 v79; // rbx
  signed __int64 v80; // rbx
  char *v82; // [rsp+30h] [rbp-58h]
  char *v83; // [rsp+38h] [rbp-50h]
  struct _HAM_RC_TREE_NODE *v87; // [rsp+A8h] [rbp+20h]

  v3 = HampLockTrackerId;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      __int2c();
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
      goto LABEL_18;
    v11 ^= (unsigned __int64)a1 + 56;
  }
  while ( v11 )
  {
    v13 = HampHostIdStoreCompareSessionByKey(v10, (_DWORD *)v11);
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
LABEL_18:
  v15 = (struct _HAM_RC_TREE_NODE *)v11;
  if ( v11 )
  {
    if ( !*(_QWORD *)(v11 + 24) )
    {
      RtlReleaseSRWLockShared((char *)a1 + 72);
      goto LABEL_24;
    }
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
    goto LABEL_116;
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
  if ( v87 )
  {
    if ( v87 != v15 )
    {
      CemRcObjectDereference(v15);
      v15 = v87;
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
  if ( (*((_BYTE *)v15 + 48) & 1) != 0 )
  {
    if ( !v19 )
      goto LABEL_44;
    v19 ^= (unsigned __int64)v15 + 40;
  }
  while ( v19 )
  {
    v21 = HampHostIdStoreCompareUserByKey((char *)v18 + 464, (char *)v19);
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
LABEL_44:
  v8 = (char *)v19;
  if ( !v19 )
    goto LABEL_49;
  if ( *(_QWORD *)(v19 + 24) )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v19 + 24)) <= 1 )
      __fastfail(0xEu);
LABEL_49:
    RtlReleaseSRWLockShared((char *)v15 + 56);
    if ( v19 )
      goto LABEL_55;
    goto LABEL_50;
  }
  RtlReleaseSRWLockShared((char *)v15 + 56);
LABEL_50:
  v23 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA0uLL);
  v8 = v23;
  if ( !v23 )
  {
    v17 = -1073741801;
    goto LABEL_116;
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
  CemRcTableFindOrInsertEx(
    (_DWORD)v15 + 40,
    (_DWORD)a2 + 464,
    (unsigned int)HampHostIdStoreCompareUserByKey,
    (_DWORD)v8);
  if ( !v82 || v82 != v8 )
  {
    CemRcObjectDereference(v8);
    v8 = v82;
  }
LABEL_55:
  v24 = a2;
  IsDynamicKey = PsmIsDynamicKey(a2);
  v26 = IsDynamicKey;
  if ( IsDynamicKey )
    goto LABEL_79;
  v27 = v8 + 56;
  RtlAcquireSRWLockShared(v8 + 56);
  v28 = v8[48] & 1;
  if ( (v8[48] & 1) == 0 )
  {
    v30 = *((_QWORD *)v8 + 5);
LABEL_60:
    v29 = v30;
    if ( v30 )
    {
      do
      {
        v31 = HampHostIdStoreCompareApplicationByKey((const wchar_t *)a2, (const wchar_t *)v29);
        if ( v31 >= 0 )
        {
          if ( v31 <= 0 )
            break;
          v32 = *(_QWORD *)(v29 + 8);
        }
        else
        {
          v32 = *(_QWORD *)v29;
        }
        if ( v28 && v32 )
          v29 ^= v32;
        else
          v29 = v32;
      }
      while ( v29 );
      v27 = v8 + 56;
    }
    goto LABEL_71;
  }
  v29 = *((_QWORD *)v8 + 5);
  if ( v29 )
  {
    v30 = v29 ^ (unsigned __int64)(v8 + 40);
    goto LABEL_60;
  }
LABEL_71:
  v6 = (char *)v29;
  if ( v29 )
  {
    if ( *(_QWORD *)(v29 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v29 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v6 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v27);
  if ( v6 )
  {
    v33 = (unsigned __int64)(v6 + 40);
    goto LABEL_87;
  }
  v24 = a2;
LABEL_79:
  v34 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x228uLL);
  v6 = v34;
  if ( !v34 )
  {
    v17 = -1073741801;
    goto LABEL_116;
  }
  memset_0(v34, 0, 0x228uLL);
  HamRcNodeInitialize(
    (void (*)(struct _CEM_RC_OBJECT *))HampHostIdStoreLeafDestroy,
    (struct _HAM_RC_TREE_NODE *)v8,
    (struct _HAM_RC_TREE_NODE *)v6);
  v35 = v6 + 88;
  v36 = v24;
  v37 = 3LL;
  do
  {
    v35 += 8;
    v38 = *(_OWORD *)v36;
    v36 = (struct _HAM_HOSTID_STORE_KEY *)((char *)v36 + 128);
    *(v35 - 8) = v38;
    *(v35 - 7) = *((_OWORD *)v36 - 7);
    *(v35 - 6) = *((_OWORD *)v36 - 6);
    *(v35 - 5) = *((_OWORD *)v36 - 5);
    *(v35 - 4) = *((_OWORD *)v36 - 4);
    *(v35 - 3) = *((_OWORD *)v36 - 3);
    *(v35 - 2) = *((_OWORD *)v36 - 2);
    *(v35 - 1) = *((_OWORD *)v36 - 1);
    --v37;
  }
  while ( v37 );
  *v35 = *(_OWORD *)v36;
  v35[1] = *((_OWORD *)v36 + 1);
  v35[2] = *((_OWORD *)v36 + 2);
  v35[3] = *((_OWORD *)v36 + 3);
  v35[4] = *((_OWORD *)v36 + 4);
  CemRcTableFindOrInsertEx(
    (_DWORD)v8 + 40,
    (_DWORD)v24,
    (unsigned int)HampHostIdStoreCompareApplicationByKey,
    (_DWORD)v6);
  if ( !v83 || v83 != v6 )
  {
    CemRcObjectDereference(v6);
    v6 = v83;
  }
  v33 = (unsigned __int64)(v6 + 40);
  if ( v26 )
    goto LABEL_110;
LABEL_87:
  v39 = (char *)(v33 + 16);
  RtlAcquireSRWLockShared(v33 + 16);
  v40 = *(_BYTE *)(v33 + 8) & 1;
  if ( (*(_BYTE *)(v33 + 8) & 1) == 0 )
  {
    v42 = *(_QWORD *)v33;
LABEL_91:
    v41 = v42;
    if ( v42 )
    {
      do
      {
        v43 = HampHostIdStoreCompareLeafByKey((const wchar_t *)a2, (const wchar_t *)v41);
        if ( v43 >= 0 )
        {
          if ( v43 <= 0 )
            break;
          v44 = *(_QWORD *)(v41 + 8);
        }
        else
        {
          v44 = *(_QWORD *)v41;
        }
        if ( v40 && v44 )
          v41 ^= v44;
        else
          v41 = v44;
      }
      while ( v41 );
      v39 = (char *)(v33 + 16);
    }
    goto LABEL_102;
  }
  v41 = *(_QWORD *)v33;
  if ( *(_QWORD *)v33 )
  {
    v42 = v41 ^ v33;
    goto LABEL_91;
  }
LABEL_102:
  v7 = (struct _HAM_HOSTID_ENTRY *)v41;
  if ( v41 )
  {
    if ( *(_QWORD *)(v41 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v41 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v7 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v39);
  if ( v7 )
  {
    v45 = *((_QWORD *)v7 + 11);
    goto LABEL_115;
  }
  v24 = a2;
LABEL_110:
  v46 = (struct _HAM_HOSTID_ENTRY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x270uLL);
  v7 = v46;
  if ( !v46 )
  {
    v17 = -1073741801;
    goto LABEL_116;
  }
  HampHostIdStoreLeafInitialize((struct _HAM_HOSTID_STORE_APPLICATION_ENTRY *)v6, v24, v46);
  CemRcTableFindOrInsertEx(v33, (_DWORD)v24, (unsigned int)HampHostIdStoreCompareLeafByKey, (_DWORD)v7);
  v47 = a2;
  if ( a2 )
  {
    if ( a2 == v7 )
    {
      v59 = (unsigned __int64 *)((char *)v7 + 88);
      v7 = 0LL;
      v45 = *v59;
      goto LABEL_115;
    }
  }
  else
  {
    v47 = 0LL;
  }
  CemRcObjectDereference(v7);
  v45 = *((_QWORD *)v47 + 11);
  v7 = v47;
LABEL_115:
  v17 = 0;
  *a3 = v45;
LABEL_116:
  if ( HampLockTrackerId != -1 )
  {
    v48 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v49 = *v48;
    if ( (*v48 & 0x800) == 0 )
      __int2c();
    v53 = v48[12]-- == 1;
    if ( v53 )
      *v48 = v49 & 0xFFFFFFFFFFFFF7FFuLL;
  }
  RtlReleaseSRWLockShared(a1);
  if ( v7 )
  {
    HampHostIdStoreAcquireLockExclusive(a1);
    v50 = *((_QWORD *)v7 + 77);
    if ( v50 )
    {
      TpWaitForTimer(v50, 1LL);
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
    v51 = *((_QWORD *)v7 + 3);
    v52 = v51 - 1;
    v53 = v51 == 1;
    if ( v51 - 1 <= 0 )
    {
LABEL_129:
      if ( !v53 )
        __fastfail(0xEu);
      v55 = *((_QWORD *)v7 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *((_QWORD *)v7 + 2) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)v7 + 3) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(struct _HAM_HOSTID_ENTRY *))(v55 + 24))(v7);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v55 + 16);
        v56 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v57 = v56 <= 1;
        v58 = v56 - 1;
        if ( v57 )
        {
          if ( v58 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v55 + 16);
          (*(void (__fastcall **)(struct _HAM_HOSTID_ENTRY *))(v55 + 24))(v7);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v55 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v54 = v51;
        v51 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 3, v52, v51);
        if ( v54 == v51 )
          break;
        v52 = v51 - 1;
        v53 = v51 == 1;
        if ( v51 - 1 <= 0 )
          goto LABEL_129;
      }
    }
  }
  if ( v6 )
  {
    _m_prefetchw(v6 + 24);
    v60 = *((_QWORD *)v6 + 3);
    v61 = v60 - 1;
    v62 = v60 == 1;
    if ( v60 - 1 <= 0 )
    {
LABEL_146:
      if ( !v62 )
        __fastfail(0xEu);
      v64 = *((_QWORD *)v6 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *((_QWORD *)v6 + 2) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)v6 + 3) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(char *))(v64 + 24))(v6);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v64 + 16);
        v65 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v57 = v65 <= 1;
        v66 = v65 - 1;
        if ( v57 )
        {
          if ( v66 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v64 + 16);
          (*(void (__fastcall **)(char *))(v64 + 24))(v6);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v64 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v63 = v60;
        v60 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 3, v61, v60);
        if ( v63 == v60 )
          break;
        v61 = v60 - 1;
        v62 = v60 == 1;
        if ( v60 - 1 <= 0 )
          goto LABEL_146;
      }
    }
  }
  if ( v8 )
  {
    _m_prefetchw(v8 + 24);
    v67 = *((_QWORD *)v8 + 3);
    v68 = v67 - 1;
    v69 = v67 == 1;
    if ( v67 - 1 <= 0 )
    {
LABEL_161:
      if ( !v69 )
        __fastfail(0xEu);
      v71 = *((_QWORD *)v8 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *((_QWORD *)v8 + 2) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)v8 + 3) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(char *))(v71 + 24))(v8);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v71 + 16);
        v72 = _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v57 = v72 <= 1;
        v73 = v72 - 1;
        if ( v57 )
        {
          if ( v73 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v71 + 16);
          (*(void (__fastcall **)(char *))(v71 + 24))(v8);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v71 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v70 = v67;
        v67 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 3, v68, v67);
        if ( v70 == v67 )
          break;
        v68 = v67 - 1;
        v69 = v67 == 1;
        if ( v67 - 1 <= 0 )
          goto LABEL_161;
      }
    }
  }
  if ( v15 )
  {
    _m_prefetchw((char *)v15 + 24);
    v74 = *((_QWORD *)v15 + 3);
    v75 = v74 - 1;
    v76 = v74 == 1;
    if ( v74 - 1 <= 0 )
    {
LABEL_176:
      if ( !v76 )
        __fastfail(0xEu);
      v78 = *((_QWORD *)v15 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *((_QWORD *)v15 + 2) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)v15 + 3) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(struct _HAM_RC_TREE_NODE *))(v78 + 24))(v15);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v78 + 16);
        v79 = _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v57 = v79 <= 1;
        v80 = v79 - 1;
        if ( v57 )
        {
          if ( v80 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v78 + 16);
          (*(void (__fastcall **)(struct _HAM_RC_TREE_NODE *))(v78 + 24))(v15);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v78 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v77 = v74;
        v74 = _InterlockedCompareExchange64((volatile signed __int64 *)v15 + 3, v75, v74);
        if ( v77 == v74 )
          break;
        v75 = v74 - 1;
        v76 = v74 == 1;
        if ( v74 - 1 <= 0 )
          goto LABEL_176;
      }
    }
  }
  return v17;
}
