/*
 * XREFs of ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x18000298C
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18000225C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18004650C (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_A.c)
 * Callees:
 *     ?RmpActivityHostGetManagerType@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800044C8 (-RmpActivityHostGetManagerType@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HampHostQueryHostGenerationForProcess(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        void *a2,
        unsigned __int64 *a3)
{
  unsigned int v3; // esi
  __int64 v5; // r14
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int8 (__fastcall *v11)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned int, void *); // rdi
  unsigned int ManagerType; // eax

  v3 = 0;
  v5 = 0LL;
  while ( 1 )
  {
    CempLockTrackerMarkAcquired(HampLockTrackerId);
    RtlAcquireSRWLockShared(a1);
    v9 = *((_QWORD *)a1 + 102);
    v10 = HampLockTrackerId;
    if ( v5 == v9 )
      break;
    v5 = *((_QWORD *)a1 + 102);
    CempLockTrackerMarkReleased(HampLockTrackerId, v8, 1LL);
    RtlReleaseSRWLockShared(a1);
    v11 = *(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned int, void *))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 80LL);
    ManagerType = RmpActivityHostGetManagerType((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
    if ( !v11(
            (char *)a1 + 488,
            *((unsigned int *)a1 + 139),
            (char *)a1 + 24,
            *((unsigned int *)a1 + 140),
            *((_QWORD *)a1 - 4),
            ManagerType,
            a2) )
      return (unsigned int)-1073741394;
  }
  *a3 = v9;
  CempLockTrackerMarkReleased(v10, v8, 1LL);
  RtlReleaseSRWLockShared(a1);
  return v3;
}
