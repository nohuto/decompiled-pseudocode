/*
 * XREFs of ?RmpActivityHostComputeDigest@@YA?AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18004FED0
 * Callers:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800500A4 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180008630 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x18000B330 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 */

__int64 __fastcall RmpActivityHostComputeDigest(__int64 a1)
{
  _QWORD *v1; // rcx
  unsigned __int16 v2; // r9
  __int64 v3; // rbx
  __int64 v4; // rax
  bool v5; // zf
  __int16 v6; // ax
  __int16 v7; // r9
  __int16 v8; // ax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx

  v1 = (_QWORD *)(a1 + 1160);
  v2 = 102;
  v3 = 0LL;
  v4 = *v1 - 1296LL;
  v5 = *v1 == (_QWORD)v1;
  while ( 1 )
  {
    if ( !v5 )
      v3 = v4;
    if ( !v3 )
      break;
    v6 = RmpPolicyDigestCompute(v3);
    v8 = RmpPolicyDigestMerge(v7, v6);
    v9 = *(_QWORD *)(v3 + 1296);
    v2 = v8;
    v10 = *(_QWORD *)(v3 + 1320);
    v11 = 3LL * *(int *)(v3 + 1328) + 142;
    v3 = 0LL;
    v5 = v9 == v10 + 8 * v11;
    v4 = v9 - 1296;
  }
  return v2;
}
