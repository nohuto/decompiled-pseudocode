/*
 * XREFs of CemRcTableFind @ 0x180035CE0
 * Callers:
 *     ?ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800033F0 (-ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST.c)
 *     ?HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z @ 0x180035CC0 (-HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180036230 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x18003F1D4 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x1800412E8 (-HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     ?ArManagerFindActivityByHandle@@YAPEAU_AR_ACTIVITY@@PEAU_ACTIVITY_RESTARTER@@_K1@Z @ 0x18006C804 (-ArManagerFindActivityByHandle@@YAPEAU_AR_ACTIVITY@@PEAU_ACTIVITY_RESTARTER@@_K1@Z.c)
 *     ?HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x18007FDB0 (-HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 *     ?HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z @ 0x180080A68 (-HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CemRcTableFind(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64))
{
  __int64 v3; // rbp
  __int64 v7; // rbx
  int v8; // esi
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdi

  v3 = a1 + 16;
  RtlAcquireSRWLockShared(a1 + 16);
  v7 = *(_QWORD *)a1;
  v8 = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    if ( v7 )
    {
      v7 ^= a1;
      goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    while ( v7 )
    {
      v9 = a3(a2, v7);
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
  }
  v11 = v7;
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v11 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v3);
  return v11;
}
