/*
 * XREFs of ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x1800285C0
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180028408 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 * Callees:
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180028758 (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x180037AB0 (CemRcTableFindOrInsertEx.c)
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x18003A5D0 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampUserCreate@@YAJPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAPEAU_HAM_USER@@@Z @ 0x1800469F4 (-HampUserCreate@@YAJPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAPEAU_HAM_USER@@@Z.c)
 */

__int64 __fastcall HampUserFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        union _RM_SID *a2,
        unsigned int a3,
        struct _HAM_USER **a4)
{
  struct _HAM_USER *v5; // rdi
  int v7; // eax
  struct _HAM_SESSION *v8; // r14
  unsigned int v9; // ebx
  unsigned __int64 *v10; // r15
  unsigned __int64 v11; // rbx
  int v12; // esi
  int v13; // eax
  unsigned __int64 v14; // rax
  struct _HAM_USER *v15; // rsi
  int v17; // eax
  struct _HAM_USER *v18; // [rsp+30h] [rbp-10h] BYREF
  struct _HAM_SESSION *v19; // [rsp+38h] [rbp-8h] BYREF

  v19 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v7 = HampSessionFindOrCreate(a1, a3, &v19);
  v8 = v19;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_21;
  v10 = (unsigned __int64 *)((char *)v19 + 40);
  RtlAcquireSRWLockShared((char *)v19 + 56);
  v11 = *v10;
  v12 = *((_BYTE *)v8 + 48) & 1;
  if ( (*((_BYTE *)v8 + 48) & 1) == 0 )
    goto LABEL_6;
  if ( !v11 )
    goto LABEL_26;
  v11 ^= (unsigned __int64)v10;
LABEL_6:
  while ( v11 )
  {
    v13 = HampUserCompareByIdentity(a2, (void *)v11);
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
  v15 = (struct _HAM_USER *)v11;
  if ( !v11 )
    goto LABEL_18;
  if ( *(_QWORD *)(v11 + 24) )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24)) <= 1 )
      __fastfail(0xEu);
    v5 = v18;
    v8 = v19;
  }
  else
  {
LABEL_26:
    v15 = 0LL;
  }
LABEL_18:
  RtlReleaseSRWLockShared(v10 + 2);
  if ( v15 )
  {
    *a4 = v15;
LABEL_20:
    v9 = 0;
    goto LABEL_21;
  }
  v17 = HampUserCreate(v8, a2, &v18);
  v5 = v18;
  v9 = v17;
  if ( v17 >= 0 )
  {
    CemRcTableFindOrInsertEx((_DWORD)v10, (_DWORD)a2, (unsigned int)HampUserCompareByIdentity, (_DWORD)v18);
    if ( v19 == v5 )
    {
      *a4 = v5;
      v5 = 0LL;
    }
    else
    {
      *a4 = v19;
    }
    goto LABEL_20;
  }
LABEL_21:
  if ( v8 )
    CemRcObjectDereference(v8);
  if ( v5 )
    CemRcObjectDereference(v5);
  return v9;
}
