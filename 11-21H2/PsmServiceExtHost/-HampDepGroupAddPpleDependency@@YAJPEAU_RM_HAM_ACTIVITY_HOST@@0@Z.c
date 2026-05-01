/*
 * XREFs of ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180074354
 * Callers:
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000EAD4 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180005E58 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A60 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180074C90 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?PpleHostCacheHelperIsEligibleByPackageFullName@@YAJPEAXPEBGPEAE@Z @ 0x18009C724 (-PpleHostCacheHelperIsEligibleByPackageFullName@@YAJPEAXPEBGPEAE@Z.c)
 */

__int64 __fastcall HampDepGroupAddPpleDependency(struct _RM_HAM_ACTIVITY_HOST *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  char *v4; // rcx
  _OWORD *v5; // rax
  __int64 v6; // r8
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // edi
  struct _HAM_DEPENDENCY_GROUP *v15; // rbx
  unsigned __int8 v17[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  struct _HAM_HOST_DEPENDENCY *v19; // [rsp+38h] [rbp-C8h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v20; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v21[100]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v22; // [rsp+1E0h] [rbp+E0h] BYREF
  char v23; // [rsp+1E8h] [rbp+E8h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  HampActivityPropertiesInitialize(L"PpleDependency", L"DefaultPPLE", (struct _HAM_ACTIVITY_PROPERTIES *)v21);
  v17[0] = 1;
  v18 = 256;
  PsmGetPackageFullNameFromKey((char *)a2 + 24, &v22, &v18);
  PpleHostCacheHelperIsEligibleByPackageFullName((char *)a2 + 488, &v22, v17);
  v21[0] |= 0x400u;
  v21[69] = -(v17[0] != 0);
  memset_0(&v22, 0, 0x1B0uLL);
  LOBYTE(v22) = 2;
  v4 = &v23;
  v5 = v21;
  v6 = 3LL;
  do
  {
    v7 = v5[1];
    *(_OWORD *)v4 = *v5;
    v8 = v5[2];
    *((_OWORD *)v4 + 1) = v7;
    v9 = v5[3];
    *((_OWORD *)v4 + 2) = v8;
    v10 = v5[4];
    *((_OWORD *)v4 + 3) = v9;
    v11 = v5[5];
    *((_OWORD *)v4 + 4) = v10;
    v12 = v5[6];
    *((_OWORD *)v4 + 5) = v11;
    v13 = v5[7];
    v5 += 8;
    *((_OWORD *)v4 + 6) = v12;
    v4 += 128;
    *((_OWORD *)v4 - 1) = v13;
    --v6;
  }
  while ( v6 );
  *(_QWORD *)v4 = *(_QWORD *)v5;
  v14 = HampDepGroupAddDependency(a1, a2, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)&v22, &v19, &v20);
  if ( v14 >= 0 )
  {
    v14 = 0;
    *((_QWORD *)a1 + 89) = v19;
  }
  v15 = v20;
  if ( v20 )
  {
    HampDepGroupRunStateChangeWorker(v20);
    HampDepGroupDereference(v15);
  }
  return (unsigned int)v14;
}
