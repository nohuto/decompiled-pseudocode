/*
 * XREFs of ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18007C038
 * Callers:
 *     ?HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800716DC (-HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180002824 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180003A28 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B5E4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BCA4 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003C984 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

__int64 __fastcall HampDepGroupAddDynamicDependency(
        struct _HOST_ACTIVITY_MANAGER *a1,
        __int64 a2,
        __int64 a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4)
{
  struct _HAM_ACTIVITY_PROPERTIES *v4; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v5; // rbx
  struct _HAM_DEPENDENCY_GROUP *v9; // r14
  __int64 v10; // rax
  char *v11; // r8
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v20; // rdi
  unsigned int v21; // esi
  int v22; // eax
  int v23; // eax
  bool v24; // zf
  struct _RM_HAM_ACTIVITY_HOST *v26; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v27; // [rsp+38h] [rbp-C8h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v28; // [rsp+40h] [rbp-C0h] BYREF
  char v29[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v30; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v31[400]; // [rsp+200h] [rbp+100h] BYREF

  v4 = a4;
  v28 = 0LL;
  v5 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v9 = 0LL;
  if ( !a4 )
  {
    HampActivityPropertiesInitialize(L"DynamicHostDependency", &word_1800B66B4, (struct _HAM_ACTIVITY_PROPERTIES *)v31);
    v4 = (struct _HAM_ACTIVITY_PROPERTIES *)v31;
  }
  *(_DWORD *)v4 |= 0x400u;
  memset_0(v29, 0, 0x1B0uLL);
  v10 = 3LL;
  v29[0] = 1;
  v11 = &v30;
  do
  {
    v12 = *((_OWORD *)v4 + 1);
    *(_OWORD *)v11 = *(_OWORD *)v4;
    v13 = *((_OWORD *)v4 + 2);
    *((_OWORD *)v11 + 1) = v12;
    v14 = *((_OWORD *)v4 + 3);
    *((_OWORD *)v11 + 2) = v13;
    v15 = *((_OWORD *)v4 + 4);
    *((_OWORD *)v11 + 3) = v14;
    v16 = *((_OWORD *)v4 + 5);
    *((_OWORD *)v11 + 4) = v15;
    v17 = *((_OWORD *)v4 + 6);
    *((_OWORD *)v11 + 5) = v16;
    v18 = *((_OWORD *)v4 + 7);
    v4 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)v4 + 128);
    *((_OWORD *)v11 + 6) = v17;
    v11 += 128;
    *((_OWORD *)v11 - 1) = v18;
    --v10;
  }
  while ( v10 );
  *(_QWORD *)v11 = *(_QWORD *)v4;
  Host = RmHamFindHost((__int64)a1, a2, 0LL, &v27);
  v20 = v27;
  v21 = Host;
  if ( Host >= 0 )
  {
    v22 = RmHamFindHost((__int64)a1, a3, 0LL, &v26);
    v5 = v26;
    v21 = v22;
    if ( v22 >= 0 )
    {
      v23 = HampDepGroupAddDependency(v20, v26, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)v29, 0LL, &v28);
      v9 = v28;
      v21 = v23;
      if ( v23 >= 0 )
        v21 = 0;
    }
  }
  if ( v20 )
  {
    RmpAcquireGlobalLock();
    v24 = (*((_QWORD *)v20 + 75))-- == 1LL;
    if ( v24 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v20 - 64) & -(__int64)(v20 != 0LL)));
    RmpReleaseGlobalLock();
  }
  if ( v5 )
  {
    RmpAcquireGlobalLock();
    v24 = (*((_QWORD *)v5 + 75))-- == 1LL;
    if ( v24 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v5 - 64) & -(__int64)(v5 != 0LL)));
    RmpReleaseGlobalLock();
  }
  if ( v9 )
  {
    HampDepGroupRunStateChangeWorker(v9);
    HampDepGroupDereference((volatile signed __int64 *)v9);
  }
  return v21;
}
