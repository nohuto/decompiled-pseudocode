/*
 * XREFs of ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18003CF28
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003CA04 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800147B4 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800262E0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 */

__int64 __fastcall HampDepGroupCheckCreateDependencyActivity(
        struct _HAM_CLIENT_CONTEXT **a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        unsigned int a3,
        struct _HAM_HOST_DEPENDENCY *a4)
{
  struct _HAM_ACTIVITY *v4; // rdi
  __int64 v9; // rdx
  _OWORD *v10; // rax
  _OWORD *v11; // r9
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rcx
  int v20; // eax
  int v21; // esi
  bool v22; // zf
  _DWORD v24[100]; // [rsp+40h] [rbp-198h] BYREF
  struct _HAM_ACTIVITY *v25; // [rsp+1F8h] [rbp+20h] BYREF

  v4 = 0LL;
  v25 = 0LL;
  v9 = 3LL;
  if ( *((_BYTE *)a4 + 40) == 3 )
  {
LABEL_12:
    v21 = 0;
    goto LABEL_13;
  }
  v10 = a1 + 1;
  v11 = v24;
  do
  {
    v12 = v10[1];
    *v11 = *v10;
    v13 = v10[2];
    v11[1] = v12;
    v14 = v10[3];
    v11[2] = v13;
    v15 = v10[4];
    v11[3] = v14;
    v16 = v10[5];
    v11[4] = v15;
    v17 = v10[6];
    v11[5] = v16;
    v18 = v10[7];
    v10 += 8;
    v11[6] = v17;
    v11 += 8;
    *(v11 - 1) = v18;
    --v9;
  }
  while ( v9 );
  *(_QWORD *)v11 = *(_QWORD *)v10;
  v19 = 624LL;
  if ( a2 )
    v19 = (__int64)a2 + 560;
  if ( *(_DWORD *)v19 != 2 )
    v24[0] &= ~0x400u;
  v20 = HampActCreate(
          a1[50],
          (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 99) + 88LL)
                                                                                + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                   + 120)
                                                       + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          - 392),
          a2,
          (struct _HAM_ACTIVITY_PROPERTIES *)v24,
          a3,
          0LL,
          &v25);
  v4 = v25;
  v21 = v20;
  if ( v20 >= 0 )
  {
    *((_QWORD *)v25 + 9) = a4;
    v22 = *((_BYTE *)a4 + 40) == 0;
    *(_QWORD *)a4 = v4;
    if ( v22 )
    {
      TpSetWait(*((_QWORD *)a4 + 10), *((_QWORD *)a4 + 8), 0LL);
      TpSetWait(*((_QWORD *)a4 + 11), *((_QWORD *)a4 + 9), 0LL);
    }
    *((_DWORD *)a4 + 8) |= 0x10u;
    goto LABEL_12;
  }
LABEL_13:
  if ( v4 )
  {
    if ( v21 < 0 )
      HampActClose(v4, v9);
    CemRcObjectDereference(v4);
  }
  return (unsigned int)v21;
}
