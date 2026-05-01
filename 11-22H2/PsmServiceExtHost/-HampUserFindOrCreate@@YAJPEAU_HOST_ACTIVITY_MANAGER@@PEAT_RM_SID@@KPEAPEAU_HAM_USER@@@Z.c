/*
 * XREFs of ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x180031ED0
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180031CD0 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x18000F420 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampSessionCompareById@@YAJPEAX0@Z @ 0x180010E90 (-HampSessionCompareById@@YAJPEAX0@Z.c)
 *     CemRcTableFindOrInsertEx @ 0x180037AB0 (CemRcTableFindOrInsertEx.c)
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180041390 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 *     ?HampUserCreate@@YAJPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAPEAU_HAM_USER@@@Z @ 0x180042950 (-HampUserCreate@@YAJPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAPEAU_HAM_USER@@@Z.c)
 */

__int64 __fastcall HampUserFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        union _RM_SID *a2,
        unsigned int a3,
        struct _HAM_USER **a4)
{
  struct _HAM_USER *v5; // r14
  struct _HOST_ACTIVITY_MANAGER *v6; // rdi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r13
  __int64 v9; // rbx
  int v10; // esi
  int v11; // eax
  __int64 v12; // rax
  struct _HOST_ACTIVITY_MANAGER *v13; // r15
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // ebx
  int v19; // eax
  struct _HAM_USER *v20; // rax
  int v21; // edi
  int v22; // eax
  struct _HAM_SESSION *v23; // rdi
  struct _HAM_USER *v24; // [rsp+30h] [rbp-58h] BYREF
  struct _HAM_SESSION *v25; // [rsp+38h] [rbp-50h] BYREF

  v5 = 0LL;
  v6 = a1;
  v7 = (unsigned __int64)a1 + 392;
  v8 = a3;
  v24 = 0LL;
  v25 = 0LL;
  RtlAcquireSRWLockShared((char *)a1 + 408);
  v9 = *(_QWORD *)v7;
  v10 = *(_BYTE *)(v7 + 8) & 1;
  if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_50;
    v9 ^= v7;
  }
  if ( v9 )
  {
    while ( 1 )
    {
      v11 = HampSessionCompareById((void *)v8, (_DWORD *)v9);
      if ( v11 >= 0 )
      {
        if ( v11 <= 0 )
        {
LABEL_9:
          v6 = a1;
          if ( v9 && *(_QWORD *)(v9 + 24) )
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v9 + 24)) <= 1 )
              __fastfail(0xEu);
            RtlReleaseSRWLockShared(v7 + 16);
            v13 = (struct _HOST_ACTIVITY_MANAGER *)v9;
            goto LABEL_45;
          }
          break;
        }
        v12 = *(_QWORD *)(v9 + 8);
        if ( v10 && v12 )
        {
LABEL_18:
          v9 ^= v12;
          goto LABEL_8;
        }
      }
      else
      {
        v12 = *(_QWORD *)v9;
        if ( v10 && v12 )
          goto LABEL_18;
      }
      v9 = v12;
LABEL_8:
      if ( !v9 )
        goto LABEL_9;
    }
  }
LABEL_50:
  RtlReleaseSRWLockShared(v7 + 16);
  v22 = HampSessionCreate(v6, v8, &v25);
  v23 = v25;
  v17 = v22;
  if ( v22 < 0 )
  {
    v13 = 0LL;
  }
  else
  {
    CemRcTableFindOrInsertEx(v7, v8, (unsigned int)HampSessionCompareById, (_DWORD)v25);
    v13 = a1;
    if ( a1 == v23 )
    {
      v13 = v23;
      goto LABEL_45;
    }
    v17 = 0;
  }
  if ( v23 )
    CemRcObjectDereference(v23);
  if ( v17 >= 0 )
  {
LABEL_45:
    RtlAcquireSRWLockShared((char *)v13 + 56);
    v16 = *((_QWORD *)v13 + 5);
    v21 = *((_BYTE *)v13 + 48) & 1;
    if ( (*((_BYTE *)v13 + 48) & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_39;
      v16 ^= (unsigned __int64)v13 + 40;
    }
    if ( v16 )
    {
      while ( 1 )
      {
        v14 = HampUserCompareByIdentity(a2, (char *)v16);
        if ( v14 >= 0 )
        {
          if ( v14 <= 0 )
          {
LABEL_24:
            if ( v16 && *(_QWORD *)(v16 + 24) )
            {
              if ( _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24)) <= 1 )
                __fastfail(0xEu);
              RtlReleaseSRWLockShared((char *)v13 + 56);
              v5 = v24;
              *a4 = (struct _HAM_USER *)v16;
              v17 = 0;
              goto LABEL_28;
            }
            break;
          }
          v15 = *(_QWORD *)(v16 + 8);
          if ( v21 && v15 )
          {
LABEL_38:
            v16 ^= v15;
            goto LABEL_23;
          }
        }
        else
        {
          v15 = *(_QWORD *)v16;
          if ( v21 && v15 )
            goto LABEL_38;
        }
        v16 = v15;
LABEL_23:
        if ( !v16 )
          goto LABEL_24;
      }
    }
LABEL_39:
    RtlReleaseSRWLockShared((char *)v13 + 56);
    v19 = HampUserCreate(v13, a2, &v24);
    v5 = v24;
    v17 = v19;
    if ( v19 >= 0 )
    {
      CemRcTableFindOrInsertEx((_DWORD)v13 + 40, (_DWORD)a2, (unsigned int)HampUserCompareByIdentity, (_DWORD)v24);
      v20 = a1;
      v17 = 0;
      if ( !a1 )
        v20 = 0LL;
      if ( v20 == v5 )
      {
        *a4 = v5;
        v5 = 0LL;
      }
      else
      {
        *a4 = v20;
      }
    }
  }
LABEL_28:
  if ( v13 )
    CemRcObjectDereference(v13);
  if ( v5 )
    CemRcObjectDereference(v5);
  return (unsigned int)v17;
}
