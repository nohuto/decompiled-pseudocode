/*
 * XREFs of ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180028408
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180024C60 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 *     ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x18007861C (-HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z.c)
 * Callees:
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x1800285C0 (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 *     ?HampPkgInitialize@@YAXPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_PACKAGE@@@Z @ 0x18002C230 (-HampPkgInitialize@@YAXPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x180037AB0 (CemRcTableFindOrInsertEx.c)
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x1800386C0 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 */

__int64 __fastcall HampPkgFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_PACKAGE_INFO *a2,
        struct _HAM_PACKAGE **a3)
{
  struct _HAM_PACKAGE *v5; // rbp
  int v6; // ebx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  int v9; // edi
  int v10; // eax
  unsigned __int64 v11; // rax
  struct _HAM_PACKAGE *v12; // rdi
  struct _HAM_PACKAGE *Heap; // rax
  struct _HAM_PACKAGE *v14; // rbx
  struct _HAM_USER *v16; // [rsp+68h] [rbp+10h] BYREF
  struct _HAM_PACKAGE *v17; // [rsp+78h] [rbp+20h]

  v5 = 0LL;
  v16 = 0LL;
  v6 = HampUserFindOrCreate(a1, (struct _HAM_PACKAGE_INFO *)((char *)a2 + 132), *((_DWORD *)a2 + 50), &v16);
  if ( v6 < 0 )
    goto LABEL_21;
  v7 = (unsigned __int64)v16 + 40;
  RtlAcquireSRWLockShared((char *)v16 + 56);
  v8 = *(_QWORD *)v7;
  v9 = *(_BYTE *)(v7 + 8) & 1;
  if ( (*(_BYTE *)(v7 + 8) & 1) == 0 )
    goto LABEL_6;
  if ( !v8 )
    goto LABEL_30;
  v8 ^= v7;
LABEL_6:
  while ( v8 )
  {
    v10 = HampPkgCompareByIdentity(a2, (void *)v8);
    if ( v10 >= 0 )
    {
      if ( v10 <= 0 )
        break;
      v11 = *(_QWORD *)(v8 + 8);
    }
    else
    {
      v11 = *(_QWORD *)v8;
    }
    if ( v9 && v11 )
      v8 ^= v11;
    else
      v8 = v11;
  }
  v12 = (struct _HAM_PACKAGE *)v8;
  if ( !v8 )
    goto LABEL_15;
  if ( *(_QWORD *)(v8 + 24) )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24)) <= 1 )
      __fastfail(0xEu);
  }
  else
  {
LABEL_30:
    v12 = 0LL;
  }
LABEL_15:
  RtlReleaseSRWLockShared(v7 + 16);
  if ( v12 )
  {
    *a3 = v12;
LABEL_20:
    v6 = 0;
    goto LABEL_21;
  }
  Heap = (struct _HAM_PACKAGE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x160uLL);
  v14 = Heap;
  if ( Heap )
  {
    HampPkgInitialize(v16, a2, Heap);
    v5 = v14;
    CemRcTableFindOrInsertEx(v7, (_DWORD)v14 + 96, (unsigned int)HampPkgCompareByIdentity, (_DWORD)v14);
    if ( v17 && v14 == v17 )
    {
      *a3 = v14;
      v5 = 0LL;
    }
    else
    {
      *a3 = v17;
    }
    goto LABEL_20;
  }
  v6 = -1073741801;
LABEL_21:
  if ( v16 )
    CemRcObjectDereference(v16);
  if ( v5 )
    CemRcObjectDereference(v5);
  return (unsigned int)v6;
}
