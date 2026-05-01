/*
 * XREFs of CemRcTableFindOrInsertEx @ 0x180037AB0
 * Callers:
 *     ?ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800033F0 (-ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST.c)
 *     ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x180017024 (-HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@.c)
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180028B20 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180031260 (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x1800316F0 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180031CD0 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x180031ED0 (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 *     ?HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180037854 (-HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x1800412C4 (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 *     ?HampClientFindOrInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAPEAU1@@Z @ 0x18004DFC0 (-HampClientFindOrInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAPEAU1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CemRcTableFindOrInsertEx(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, unsigned __int64),
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 *a6)
{
  __int64 v10; // r8
  unsigned __int64 v11; // rbx
  int v12; // edi
  int v13; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  int v17; // edi
  unsigned __int64 v18; // rax

  RtlAcquireSRWLockExclusive(a1 + 16);
  while ( 1 )
  {
    if ( *(_QWORD *)(a4 + 16) != -1LL )
      __int2c();
    if ( !*(_QWORD *)(a4 + 24) )
      __int2c();
    if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
      __int2c();
    v11 = *(_QWORD *)a1;
    v12 = *(_BYTE *)(a1 + 8) & 1;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      if ( !v11 )
        break;
      v11 ^= a1;
    }
    if ( !v11 )
      break;
    do
    {
      v13 = a3(a2, v11);
      if ( v13 < 0 )
      {
        v14 = *(_QWORD *)v11;
        if ( v12 && v14 )
          goto LABEL_30;
        goto LABEL_14;
      }
      if ( v13 <= 0 )
        break;
      v14 = *(_QWORD *)(v11 + 8);
      if ( v12 && v14 )
      {
LABEL_30:
        v11 ^= v14;
        continue;
      }
LABEL_14:
      v11 = v14;
    }
    while ( v11 );
    if ( !v11 )
      break;
    if ( *(_QWORD *)(v11 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24)) <= 1 )
        __fastfail(0xEu);
      *a6 = v11;
      RtlReleaseSRWLockExclusive(a1 + 16);
      return 0LL;
    }
    RtlSleepConditionVariableSRW(a1 + 32, a1 + 16, 0LL, 0LL);
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD *)a1;
  if ( (v15 & 1) != 0 )
  {
    if ( !v16 )
    {
LABEL_35:
      LOBYTE(v10) = 0;
      goto LABEL_36;
    }
    v16 ^= a1;
  }
  LOBYTE(v10) = 0;
  v17 = v15 & 1;
  if ( !v16 )
    goto LABEL_36;
  while ( 2 )
  {
    if ( ((int (__fastcall *)(__int64, unsigned __int64, __int64))a3)(a2, v16, v10) < 0 )
    {
      v18 = *(_QWORD *)v16;
      if ( v17 )
      {
        if ( !v18 )
          goto LABEL_35;
        v18 ^= v16;
      }
      if ( !v18 )
        goto LABEL_35;
LABEL_24:
      v16 = v18;
      continue;
    }
    break;
  }
  v18 = *(_QWORD *)(v16 + 8);
  if ( v17 )
  {
    if ( !v18 )
      goto LABEL_40;
    v18 ^= v16;
  }
  if ( v18 )
    goto LABEL_24;
LABEL_40:
  LOBYTE(v10) = 1;
LABEL_36:
  RtlRbInsertNodeEx(a1, v16, v10, a4);
  *(_QWORD *)(a1 + 40) += 2LL;
  RtlReleaseSRWLockExclusive(a1 + 16);
  RtlWakeAllConditionVariable(a1 + 32);
  *a6 = a4;
  return 0LL;
}
