/*
 * XREFs of ?HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z @ 0x18007CCBC
 * Callers:
 *     ?HamSrvRemoveHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1@Z @ 0x180073254 (-HamSrvRemoveHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1@Z.c)
 * Callees:
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180002824 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x18007CB8C (-HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z.c)
 */

__int64 __fastcall HampDepGroupRemoveDynamicDependency(struct _HOST_ACTIVITY_MANAGER *a1, __int64 a2, __int64 a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v4; // rbx
  int Host; // eax
  __int64 v7; // rdi
  unsigned int v8; // esi
  int v9; // eax
  bool v10; // zf
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v13; // [rsp+68h] [rbp+20h] BYREF

  v12[0] = 0LL;
  v4 = 0LL;
  v13 = 0LL;
  Host = RmHamFindHost((__int64)a1, a2, 0LL, v12);
  v7 = v12[0];
  v8 = Host;
  if ( Host >= 0 )
  {
    v9 = RmHamFindHost((__int64)a1, a3, 0LL, &v13);
    v4 = v13;
    v8 = v9;
    if ( v9 >= 0 )
      v8 = HampDepGroupRemoveDependency((struct _RM_HAM_ACTIVITY_HOST *)v7, v13, 1);
  }
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    v10 = (*(_QWORD *)(v7 + 600))-- == 1LL;
    if ( v10 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)((v7 - 64) & -(__int64)(v7 != 0)));
    RmpReleaseGlobalLock();
  }
  if ( v4 )
  {
    RmpAcquireGlobalLock();
    v10 = (*((_QWORD *)v4 + 75))-- == 1LL;
    if ( v10 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v4 - 64) & -(__int64)(v4 != 0LL)));
    RmpReleaseGlobalLock();
  }
  return v8;
}
