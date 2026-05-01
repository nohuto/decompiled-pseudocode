/*
 * XREFs of ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007C5F4
 * Callers:
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180074018 (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007462C (-HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 * Callees:
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180003A28 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B5E4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BCA4 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003C984 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

__int64 __fastcall HampDepGroupAddTerminateDependency(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        __int64 a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6)
{
  char *v10; // r8
  __int64 v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // edi
  volatile signed __int64 *v21; // rbx
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  char v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+41h] [rbp-BFh]
  __int16 v26; // [rsp+45h] [rbp-BBh]
  char v27; // [rsp+47h] [rbp-B9h]
  char v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+1D0h] [rbp+D0h]
  __int64 v30; // [rsp+1D8h] [rbp+D8h]
  __int64 v31; // [rsp+1E0h] [rbp+E0h]
  int v32; // [rsp+1E8h] [rbp+E8h]
  int v33; // [rsp+1ECh] [rbp+ECh]
  _BYTE v34[400]; // [rsp+1F0h] [rbp+F0h] BYREF

  P = 0LL;
  HampActivityPropertiesInitialize(&word_1800B66B4, &word_1800B66B4, (struct _HAM_ACTIVITY_PROPERTIES *)v34);
  v29 = 0LL;
  v25 = 0;
  v10 = &v28;
  v26 = 0;
  v27 = 0;
  v11 = 3LL;
  v24 = 3;
  v12 = v34;
  do
  {
    v13 = v12[1];
    *(_OWORD *)v10 = *v12;
    v14 = v12[2];
    *((_OWORD *)v10 + 1) = v13;
    v15 = v12[3];
    *((_OWORD *)v10 + 2) = v14;
    v16 = v12[4];
    *((_OWORD *)v10 + 3) = v15;
    v17 = v12[5];
    *((_OWORD *)v10 + 4) = v16;
    v18 = v12[6];
    *((_OWORD *)v10 + 5) = v17;
    v19 = v12[7];
    v12 += 8;
    *((_OWORD *)v10 + 6) = v18;
    v10 += 128;
    *((_OWORD *)v10 - 1) = v19;
    --v11;
  }
  while ( v11 );
  *(_QWORD *)v10 = *(_QWORD *)v12;
  v33 = a5;
  v30 = a4;
  v32 = a6 | 0xC00;
  v31 = a2;
  v20 = HampDepGroupAddDependency(
          a3,
          a1,
          (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)&v24,
          0LL,
          (struct _HAM_DEPENDENCY_GROUP **)&P);
  if ( v20 >= 0 )
    v20 = 0;
  v21 = (volatile signed __int64 *)P;
  if ( P )
  {
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)P);
    HampDepGroupDereference(v21);
  }
  return (unsigned int)v20;
}
