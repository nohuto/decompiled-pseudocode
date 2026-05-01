/*
 * XREFs of ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180031CA0
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x1800316C0 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 *     ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x180037090 (-HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x18000C760 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x180031EA0 (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 *     ?HampPkgInitialize@@YAXPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_PACKAGE@@@Z @ 0x180032BCC (-HampPkgInitialize@@YAXPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcTableFindOrInsertEx @ 0x180037A30 (CemRcTableFindOrInsertEx.c)
 */

__int64 __fastcall HampPkgFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_PACKAGE_INFO *a2,
        struct _HAM_PACKAGE **a3)
{
  struct _HAM_PACKAGE *v5; // rbp
  int v6; // ebx
  unsigned __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // esi
  struct _HAM_PACKAGE *Heap; // rax
  struct _HAM_PACKAGE *v11; // rbx
  int v13; // eax
  __int64 v14; // rax
  struct _HAM_USER *v15; // [rsp+68h] [rbp+10h] BYREF
  struct _HAM_PACKAGE *v16; // [rsp+78h] [rbp+20h]

  v5 = 0LL;
  v15 = 0LL;
  v6 = HampUserFindOrCreate(a1, (struct _HAM_PACKAGE_INFO *)((char *)a2 + 132), *((_DWORD *)a2 + 50), &v15);
  if ( v6 < 0 )
    goto LABEL_9;
  v7 = (unsigned __int64)v15 + 40;
  RtlAcquireSRWLockShared((char *)v15 + 56);
  v8 = *(_QWORD *)v7;
  v9 = *(_BYTE *)(v7 + 8) & 1;
  if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_4;
    v8 ^= v7;
  }
  if ( !v8 )
    goto LABEL_4;
  do
  {
    v13 = HampPkgCompareByIdentity((const wchar_t *)a2, (const wchar_t *)v8);
    if ( v13 < 0 )
    {
      v14 = *(_QWORD *)v8;
      if ( v9 && v14 )
        goto LABEL_29;
      goto LABEL_18;
    }
    if ( v13 <= 0 )
      break;
    v14 = *(_QWORD *)(v8 + 8);
    if ( v9 && v14 )
    {
LABEL_29:
      v8 ^= v14;
      continue;
    }
LABEL_18:
    v8 = v14;
  }
  while ( v8 );
  if ( v8 && *(_QWORD *)(v8 + 24) )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24)) <= 1 )
      __fastfail(0xEu);
    RtlReleaseSRWLockShared(v7 + 16);
    *a3 = (struct _HAM_PACKAGE *)v8;
LABEL_8:
    v6 = 0;
    goto LABEL_9;
  }
LABEL_4:
  RtlReleaseSRWLockShared(v7 + 16);
  Heap = (struct _HAM_PACKAGE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x160uLL);
  v11 = Heap;
  if ( Heap )
  {
    HampPkgInitialize(v15, a2, Heap);
    v5 = v11;
    CemRcTableFindOrInsertEx(v7, (_DWORD)v11 + 96, (unsigned int)HampPkgCompareByIdentity, (_DWORD)v11);
    if ( v16 && v11 == v16 )
    {
      *a3 = v11;
      v5 = 0LL;
    }
    else
    {
      *a3 = v16;
    }
    goto LABEL_8;
  }
  v6 = -1073741801;
LABEL_9:
  if ( v15 )
    CemRcObjectDereference(v15);
  if ( v5 )
    CemRcObjectDereference(v5);
  return (unsigned int)v6;
}
