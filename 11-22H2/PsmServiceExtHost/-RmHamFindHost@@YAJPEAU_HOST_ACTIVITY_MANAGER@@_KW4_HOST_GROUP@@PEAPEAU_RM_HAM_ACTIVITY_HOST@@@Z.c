/*
 * XREFs of ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180002824
 * Callers:
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180002770 (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x18002F170 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvQueryHostStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_HOST_STATE_SUMMARY@@@Z @ 0x18004C8E4 (-HamSrvQueryHostStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_HOST_STATE_SUMMARY@@@Z.c)
 *     BiHamExtHostQueryResourceUsage @ 0x18006C0B0 (BiHamExtHostQueryResourceUsage.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180070448 (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180071A9C (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     ?HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z @ 0x180074098 (-HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180074238 (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18007C378 (-HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z @ 0x18007CFFC (-HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z.c)
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x1800849B8 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 * Callees:
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800186E0 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002EE70 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_H.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032530 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

__int64 __fastcall RmHamFindHost(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v5; // eax
  struct _RM_OBJECT_HEADER *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  struct _RM_OBJECT_HEADER *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v5 = RmpActivityHostFindByHostId(a1 - 2248, a2, a3, &v10);
  v6 = v10;
  v7 = v5;
  if ( v5 >= 0 )
  {
    RmpAcquireGlobalLock();
    if ( RmHamHostReferenceUnsafe((struct _RM_OBJECT_HEADER *)((char *)v6 + 64)) )
    {
      *a4 = v8;
      v7 = 0;
    }
    else
    {
      v7 = -1073741275;
    }
    RmpReleaseGlobalLock();
  }
  if ( v6 )
    RmpObjectRelease(v6);
  return v7;
}
