/*
 * XREFs of ?RmpActivityHostComputeDigestForCategory@@YA?AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18002948C
 * Callers:
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001D7C0 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18001F950 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x18001AC10 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180020490 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18008E7B0 (-IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ.c)
 */

__int64 __fastcall RmpActivityHostComputeDigestForCategory(__int64 a1, int a2)
{
  unsigned __int16 v2; // bx
  _QWORD *v3; // rdx
  ExecutionModel::ResourceSet *v4; // r11
  __int64 v5; // rax
  bool v6; // zf
  __int64 v8; // rcx
  __int64 v9; // r11
  __int16 v10; // ax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax

  v2 = 102;
  v3 = (_QWORD *)(a1 + 24 * (a2 + 47LL));
  v4 = 0LL;
  v5 = *v3 - 1296LL;
  v6 = *v3 == (_QWORD)v3;
  while ( 1 )
  {
    if ( !v6 )
      v4 = (ExecutionModel::ResourceSet *)v5;
    if ( !v4 )
      break;
    if ( ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement(v4) )
    {
      v10 = RmpPolicyDigestCompute(v8);
      v2 = RmpPolicyDigestMerge(v2, v10);
    }
    v11 = *(_QWORD *)(v9 + 1296);
    v12 = 3 * (*(int *)(v9 + 1328) + 47LL);
    v13 = *(_QWORD *)(v9 + 1320);
    v4 = 0LL;
    v6 = v11 == v13 + 8 * v12;
    v5 = v11 - 1296;
  }
  return v2;
}
