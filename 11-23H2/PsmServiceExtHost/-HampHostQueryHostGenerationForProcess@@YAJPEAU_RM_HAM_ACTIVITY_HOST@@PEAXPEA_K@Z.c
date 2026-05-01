/*
 * XREFs of ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x180013024
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18000241C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18003A204 (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_A.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800211A8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002DF80 (-RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HampHostQueryHostGenerationForProcess(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        void *a2,
        unsigned __int64 *a3)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // r9
  unsigned int v8; // edi
  struct _RM_ACTIVITY_HOST *v9; // rsi
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx

  HampHostAcquireLockSharedEx(a1, 0);
  v7 = *((_QWORD *)a1 + 102);
  v8 = 0;
  if ( v7 )
  {
    v9 = RmHostFromHamHost(a1);
    while ( 1 )
    {
      v10 = v7;
      CempLockTrackerMarkReleased(HampLockTrackerId, v6, 1LL);
      RtlReleaseSRWLockShared(a1);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int, void *))(*(_QWORD *)(*((_QWORD *)v9 + 6) + 40LL) + 80LL))(
              (__int64)v9 + 552,
              *((unsigned int *)v9 + 155),
              (__int64)v9 + 88,
              *((unsigned int *)v9 + 156),
              *((_QWORD *)v9 + 4),
              *((_BYTE *)v9 + 656) != 0 ? 4 : 0,
              a2) )
        return (unsigned int)-1073741394;
      HampHostAcquireLockSharedEx(a1, 0);
      v7 = *((_QWORD *)a1 + 102);
      if ( v10 == v7 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v11 = HampLockTrackerId;
    *a3 = v7;
    CempLockTrackerMarkReleased(v11, v6, 1LL);
    RtlReleaseSRWLockShared(a1);
  }
  return v8;
}
