/*
 * XREFs of ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18007C56C
 * Callers:
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800371DC (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180003A28 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B664 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BD24 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003CA04 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     ?HampSystemPpleIsHostCacheEligible@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18008EB40 (-HampSystemPpleIsHostCacheEligible@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampDepGroupAddPpleDependency(struct _RM_HAM_ACTIVITY_HOST *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  unsigned int IsHostCacheEligible; // eax
  char *v5; // rcx
  _OWORD *v6; // rax
  __int64 v7; // r8
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // edi
  volatile signed __int64 *v16; // rbx
  struct _HAM_HOST_DEPENDENCY *v18; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  char v20[8]; // [rsp+40h] [rbp-C0h] BYREF
  char v21; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v22[100]; // [rsp+1F0h] [rbp+F0h] BYREF

  v18 = 0LL;
  P = 0LL;
  HampActivityPropertiesInitialize(L"PpleDependency", L"DefaultPPLE", (struct _HAM_ACTIVITY_PROPERTIES *)v22);
  IsHostCacheEligible = HampSystemPpleIsHostCacheEligible(a2);
  v22[0] |= 0x400u;
  v22[69] = -(IsHostCacheEligible != 0);
  memset_0(v20, 0, 0x1B0uLL);
  v20[0] = 2;
  v5 = &v21;
  v6 = v22;
  v7 = 3LL;
  do
  {
    v8 = v6[1];
    *(_OWORD *)v5 = *v6;
    v9 = v6[2];
    *((_OWORD *)v5 + 1) = v8;
    v10 = v6[3];
    *((_OWORD *)v5 + 2) = v9;
    v11 = v6[4];
    *((_OWORD *)v5 + 3) = v10;
    v12 = v6[5];
    *((_OWORD *)v5 + 4) = v11;
    v13 = v6[6];
    *((_OWORD *)v5 + 5) = v12;
    v14 = v6[7];
    v6 += 8;
    *((_OWORD *)v5 + 6) = v13;
    v5 += 128;
    *((_OWORD *)v5 - 1) = v14;
    --v7;
  }
  while ( v7 );
  *(_QWORD *)v5 = *(_QWORD *)v6;
  v15 = HampDepGroupAddDependency(
          a1,
          a2,
          (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)v20,
          &v18,
          (struct _HAM_DEPENDENCY_GROUP **)&P);
  if ( v15 >= 0 )
  {
    v15 = 0;
    *((_QWORD *)a1 + 89) = v18;
  }
  v16 = (volatile signed __int64 *)P;
  if ( P )
  {
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)P);
    HampDepGroupDereference(v16);
  }
  return (unsigned int)v15;
}
