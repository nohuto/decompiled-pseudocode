/*
 * XREFs of ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x1800744F8
 * Callers:
 *     ?HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x18006F154 (-HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z.c)
 * Callees:
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180005E58 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800423C0 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A60 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180074C90 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall __noreturn HampDepGroupAddProcessDependency(struct _HOST_ACTIVITY_MANAGER *a1, void *a2, void *a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v6; // rbx
  struct _HAM_DEPENDENCY_GROUP *v7; // r14
  __int64 v8; // rdx
  char *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int HostByProcessHandle; // eax
  struct _RM_HAM_ACTIVITY_HOST *v19; // rsi
  int v20; // eax
  bool v21; // zf
  struct _RM_HAM_ACTIVITY_HOST *v22; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v23; // [rsp+38h] [rbp-C8h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v24; // [rsp+40h] [rbp-C0h] BYREF
  char v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+51h] [rbp-AFh]
  __int16 v27; // [rsp+55h] [rbp-ABh]
  char v28; // [rsp+57h] [rbp-A9h]
  char v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+1E0h] [rbp+E0h]
  void *v31; // [rsp+1E8h] [rbp+E8h]
  void *v32; // [rsp+1F0h] [rbp+F0h]
  DWORD ProcessId; // [rsp+1F8h] [rbp+F8h]
  DWORD v34; // [rsp+1FCh] [rbp+FCh]
  _DWORD v35[100]; // [rsp+200h] [rbp+100h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  v6 = 0LL;
  v22 = 0LL;
  v7 = 0LL;
  HampActivityPropertiesInitialize(L"ProcessDependency", &word_1800B7A9C, (struct _HAM_ACTIVITY_PROPERTIES *)v35);
  v35[0] |= 0x400u;
  v8 = 3LL;
  v30 = 0LL;
  v26 = 0;
  v9 = &v29;
  v27 = 0;
  v28 = 0;
  v10 = v35;
  v25 = 0;
  do
  {
    v11 = v10[1];
    *(_OWORD *)v9 = *v10;
    v12 = v10[2];
    *((_OWORD *)v9 + 1) = v11;
    v13 = v10[3];
    *((_OWORD *)v9 + 2) = v12;
    v14 = v10[4];
    *((_OWORD *)v9 + 3) = v13;
    v15 = v10[5];
    *((_OWORD *)v9 + 4) = v14;
    v16 = v10[6];
    *((_OWORD *)v9 + 5) = v15;
    v17 = v10[7];
    v10 += 8;
    *((_OWORD *)v9 + 6) = v16;
    v9 += 128;
    *((_OWORD *)v9 - 1) = v17;
    --v8;
  }
  while ( v8 );
  *(_QWORD *)v9 = *(_QWORD *)v10;
  v31 = a2;
  v32 = a3;
  ProcessId = GetProcessId(a2);
  v34 = GetProcessId(a3);
  HostByProcessHandle = RmHamFindHostByProcessHandle((__int64)a1, a2, 0, &v23);
  v19 = v23;
  if ( HostByProcessHandle >= 0 )
  {
    v20 = RmHamFindHostByProcessHandle((__int64)a1, a3, 0, &v22);
    v6 = v22;
    if ( v20 >= 0 )
    {
      HampDepGroupAddDependency(v19, v22, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)&v25, 0LL, &v24);
      v7 = v24;
    }
  }
  if ( v19 )
  {
    RmpAcquireGlobalLock();
    v21 = (*((_QWORD *)v19 + 75))-- == 1LL;
    if ( v21 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v19 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v6 )
  {
    RmpAcquireGlobalLock();
    v21 = (*((_QWORD *)v6 + 75))-- == 1LL;
    if ( v21 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v6 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v7 )
  {
    HampDepGroupRunStateChangeWorker(v7);
    HampDepGroupDereference(v7);
  }
}
