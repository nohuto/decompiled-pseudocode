/*
 * XREFs of CemRcTableFind @ 0x180027F50
 * Callers:
 *     ?ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180001E2C (-ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST.c)
 *     ?HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z @ 0x180005750 (-HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z.c)
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180027440 (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180027DFC (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180043B4C (-HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     ?ArManagerFindActivityByHandle@@YAPEAU_AR_ACTIVITY@@PEAU_ACTIVITY_RESTARTER@@_K1@Z @ 0x18006D3C4 (-ArManagerFindActivityByHandle@@YAPEAU_AR_ACTIVITY@@PEAU_ACTIVITY_RESTARTER@@_K1@Z.c)
 *     ?HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180076F18 (-HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800788BC (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ?HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z @ 0x18007B6D0 (-HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CemRcTableFind(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64))
{
  __int64 v6; // rbx
  int v7; // edi
  int v8; // eax
  __int64 v9; // rax

  RtlAcquireSRWLockShared(a1 + 16);
  v6 = *(_QWORD *)a1;
  v7 = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_9;
    v6 ^= a1;
  }
  if ( !v6 )
    goto LABEL_9;
  while ( 1 )
  {
    v8 = a3(a2, v6);
    if ( v8 < 0 )
    {
      v9 = *(_QWORD *)v6;
      if ( v7 && v9 )
        goto LABEL_15;
      goto LABEL_7;
    }
    if ( v8 <= 0 )
      break;
    v9 = *(_QWORD *)(v6 + 8);
    if ( v7 && v9 )
    {
LABEL_15:
      v6 ^= v9;
      goto LABEL_8;
    }
LABEL_7:
    v6 = v9;
LABEL_8:
    if ( !v6 )
      goto LABEL_9;
  }
  if ( !*(_QWORD *)(v6 + 24) )
  {
LABEL_9:
    v6 = 0LL;
    goto LABEL_18;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24)) <= 1 )
    __fastfail(0xEu);
LABEL_18:
  RtlReleaseSRWLockShared(a1 + 16);
  return v6;
}
