/*
 * XREFs of ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18003A284
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x18002F170 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18004BDD8 (-HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180074238 (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007484C (-HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 * Callees:
 *     ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x180013024 (-HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A79C (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 */

__int64 __fastcall HampHostFindByProcessHandle(
        __int64 a1,
        void *a2,
        __int64 a3,
        struct _RM_HAM_ACTIVITY_HOST **a4,
        unsigned __int64 *a5)
{
  int HostByProcessHandle; // edi
  void *v8; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v9; // rbx
  unsigned __int64 v10; // rax
  struct _RM_HAM_ACTIVITY_HOST *v13; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-10h] BYREF

  v13 = 0LL;
  HostByProcessHandle = RmHamFindHostByProcessHandle(a1, a2, a3, &v13);
  if ( HostByProcessHandle < 0 )
  {
    v9 = v13;
  }
  else
  {
    v8 = a2;
    v9 = v13;
    HostByProcessHandle = HampHostQueryHostGenerationForProcess(v13, v8, &v14);
    if ( HostByProcessHandle >= 0 )
    {
      v10 = v14;
      *a4 = v9;
      v9 = 0LL;
      HostByProcessHandle = 0;
      *a5 = v10;
    }
  }
  if ( v9 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v9 + 75))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v9 - 64) & -(__int64)(v9 != 0LL)));
    RmpReleaseGlobalLock();
  }
  return (unsigned int)HostByProcessHandle;
}
