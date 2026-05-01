/*
 * XREFs of ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180039760
 * Callers:
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800396B4 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x1800562BC (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 */

__int64 __fastcall RmpPolicyIsHostCommitSaveEligible(struct _RM_POLICY *a1, struct _RM_ACTIVITY_HOST *a2)
{
  unsigned __int8 v2; // r10
  unsigned int v4; // r10d
  int v5; // eax
  unsigned int v6; // r10d
  unsigned int v7; // r11d

  v2 = 0;
  if ( (*((_BYTE *)a2 + 1184) & 8) == 0 )
    v2 = (unsigned __int16)~*((_WORD *)a2 + 728) >> 9;
  v4 = (unsigned __int8)~(*((_DWORD *)a2 + 316) >> 1) & v2 & 1;
  if ( v4 )
  {
    v5 = RmpPolicyComputeDesiredEmptyState(a1, a2, 2LL);
    if ( ((unsigned __int8)v5 & (unsigned __int8)*((_DWORD *)a2 + 317) & 0x27) == v5 )
      return v6;
    return v7;
  }
  return v4;
}
