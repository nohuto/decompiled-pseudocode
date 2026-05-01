/*
 * XREFs of ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180024C60
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023C00 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 * Callees:
 *     ?HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x18000BD4C (-HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@KPEAPEAU_HAM_APPLICATION@@@Z.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x180025F60 (CempPackageFamilyNameFromPsmKey.c)
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180028408 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x180037AB0 (CemRcTableFindOrInsertEx.c)
 *     ?HampAppCompareByIdentity@@YAJPEAX0@Z @ 0x18003EAA0 (-HampAppCompareByIdentity@@YAJPEAX0@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall HampAppFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_APPLICATION_INFO *a2,
        char a3,
        struct _HAM_APPLICATION **a4)
{
  struct _HAM_APPLICATION *v8; // rdi
  int v9; // esi
  __int64 v10; // rdx
  _WORD *v11; // rax
  __int16 v12; // cx
  int v13; // eax
  struct _HAM_PACKAGE *v14; // rsi
  unsigned int v15; // ebx
  unsigned __int64 *v16; // r14
  unsigned __int64 v17; // rbx
  int v18; // edi
  int v19; // eax
  unsigned __int64 v20; // rax
  int v21; // eax
  struct _HAM_PACKAGE *v22; // rax
  struct _HAM_APPLICATION *v23; // rcx
  struct _HAM_PACKAGE *v25; // [rsp+30h] [rbp-1C8h] BYREF
  struct _HAM_APPLICATION *v26; // [rsp+38h] [rbp-1C0h] BYREF
  _BYTE v27[132]; // [rsp+40h] [rbp-1B8h] BYREF
  char DestinationSid[68]; // [rsp+C4h] [rbp-134h] BYREF
  int v29; // [rsp+108h] [rbp-F0h]
  _BYTE v30[144]; // [rsp+110h] [rbp-E8h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  v8 = 0LL;
  memset_0(v30, 0, 0x82uLL);
  CempPackageFamilyNameFromPsmKey(a2, v30);
  v9 = *((_DWORD *)a2 + 133);
  memset_0(v27, 0, 0xCCuLL);
  v10 = 65LL;
  v11 = v27;
  while ( v10 != -2147483581 )
  {
    v12 = *(_WORD *)((char *)v11 + v30 - v27);
    if ( !v12 )
      break;
    *v11++ = v12;
    if ( !--v10 )
    {
      --v11;
      break;
    }
  }
  *v11 = 0;
  RtlCopySid(0x44u, DestinationSid, (char *)a2 + 464);
  v29 = v9;
  v13 = HampPkgFindOrCreate(a1, (struct _HAM_PACKAGE_INFO *)v27, &v25);
  v14 = v25;
  v15 = v13;
  if ( v13 < 0 )
    goto LABEL_34;
  v16 = (unsigned __int64 *)((char *)v25 + 40);
  RtlAcquireSRWLockShared((char *)v25 + 56);
  v17 = *v16;
  v18 = *((_BYTE *)v14 + 48) & 1;
  if ( (*((_BYTE *)v14 + 48) & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_21;
    v17 ^= (unsigned __int64)v16;
  }
  if ( !v17 )
    goto LABEL_21;
  while ( 1 )
  {
    v19 = HampAppCompareByIdentity(a2, (void *)v17);
    if ( v19 < 0 )
    {
      v20 = *(_QWORD *)v17;
      if ( !v18 || !v20 )
        goto LABEL_15;
      goto LABEL_12;
    }
    if ( v19 <= 0 )
      break;
    v20 = *(_QWORD *)(v17 + 8);
    if ( !v18 || !v20 )
    {
LABEL_15:
      v17 = v20;
      goto LABEL_16;
    }
LABEL_12:
    v17 ^= v20;
LABEL_16:
    if ( !v17 )
      goto LABEL_21;
  }
  if ( !*(_QWORD *)(v17 + 24) )
  {
LABEL_21:
    RtlReleaseSRWLockShared((char *)v14 + 56);
    v21 = HampAppCreate(v14, a2, a3, &v26);
    v8 = v26;
    v15 = v21;
    if ( v21 >= 0 )
    {
      CemRcTableFindOrInsertEx((_DWORD)v16, (_DWORD)v26 + 96, (unsigned int)HampAppCompareByIdentity, (_DWORD)v26);
      v22 = v25;
      if ( !v25 )
        v22 = 0LL;
      v23 = v8;
      v15 = 0;
      if ( v22 != v8 )
        v23 = v22;
      if ( v23 == v8 )
      {
        *a4 = v8;
        v8 = 0LL;
      }
      else
      {
        *a4 = v23;
      }
    }
    goto LABEL_34;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v17 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared((char *)v14 + 56);
  v14 = v25;
  v8 = v26;
  *a4 = (struct _HAM_APPLICATION *)v17;
  v15 = 0;
LABEL_34:
  if ( v14 )
    CemRcObjectDereference(v14);
  if ( v8 )
    CemRcObjectDereference(v8);
  return v15;
}
