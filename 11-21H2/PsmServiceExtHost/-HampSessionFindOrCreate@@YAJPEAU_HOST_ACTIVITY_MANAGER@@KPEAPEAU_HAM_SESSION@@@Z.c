/*
 * XREFs of ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180028758
 * Callers:
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x1800285C0 (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 *     ?HamSrvPlmNotifyNewSession@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAEK@Z @ 0x1800467F0 (-HamSrvPlmNotifyNewSession@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAEK@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x180037AB0 (CemRcTableFindOrInsertEx.c)
 *     ?HampSessionCompareById@@YAJPEAX0@Z @ 0x18003C2C0 (-HampSessionCompareById@@YAJPEAX0@Z.c)
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x1800452D8 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 */

__int64 __fastcall HampSessionFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned int a2,
        struct _HAM_SESSION **a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v5; // rbp
  unsigned __int64 v7; // rbx
  int v8; // edi
  int v9; // eax
  unsigned __int64 v10; // rax
  struct _HAM_SESSION *v11; // rdi
  unsigned int v12; // ebx
  int v14; // eax
  struct _HAM_SESSION *v15; // [rsp+70h] [rbp+8h] BYREF
  struct _HAM_SESSION *v16; // [rsp+88h] [rbp+20h]

  v15 = 0LL;
  v3 = (unsigned __int64)a1 + 168;
  v5 = a2;
  RtlAcquireSRWLockShared((char *)a1 + 184);
  v7 = *(_QWORD *)v3;
  v8 = *(_BYTE *)(v3 + 8) & 1;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( v7 )
    {
      v7 ^= v3;
      goto LABEL_5;
    }
    goto LABEL_20;
  }
LABEL_5:
  while ( v7 )
  {
    v9 = HampSessionCompareById((void *)v5, (void *)v7);
    if ( v9 >= 0 )
    {
      if ( v9 <= 0 )
        break;
      v10 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v10 = *(_QWORD *)v7;
    }
    if ( v8 && v10 )
      v7 ^= v10;
    else
      v7 = v10;
  }
  v11 = (struct _HAM_SESSION *)v7;
  if ( v7 )
  {
    if ( !*(_QWORD *)(v7 + 24) )
    {
LABEL_20:
      v11 = 0LL;
      goto LABEL_16;
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24)) <= 1 )
      __fastfail(0xEu);
  }
LABEL_16:
  RtlReleaseSRWLockShared(v3 + 16);
  if ( v11 )
  {
    v12 = 0;
LABEL_18:
    *a3 = v11;
    return v12;
  }
  v14 = HampSessionCreate(a1, v5, &v15);
  v11 = v15;
  v12 = v14;
  if ( v14 >= 0 )
  {
    CemRcTableFindOrInsertEx(v3, v5, (unsigned int)HampSessionCompareById, (_DWORD)v15);
    v12 = 0;
    if ( v16 == v11 )
      goto LABEL_18;
    *a3 = v16;
  }
  if ( v11 )
    CemRcObjectDereference(v11);
  return v12;
}
