/*
 * XREFs of ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18008D934
 * Callers:
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A554 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18008D18C (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 */

__int64 __fastcall RmpPolicyIsHostCommitSaveEligible(struct _RM_POLICY *a1, struct _RM_ACTIVITY_HOST *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // r10d
  unsigned int v5; // r10d
  int v6; // eax
  unsigned int v7; // r10d
  __int64 v8; // r11

  v2 = 0;
  if ( (*((_BYTE *)a2 + 1176) & 8) != 0 || (v3 = 1, (*((_BYTE *)a2 + 1178) & 8) != 0) )
    v3 = 0;
  v4 = 0;
  if ( (*((_WORD *)a2 + 740) & 0x200) == 0 )
    v4 = v3;
  v5 = ~(*((_DWORD *)a2 + 314) >> 2) & v4;
  if ( v5 )
  {
    v6 = RmpPolicyComputeDesiredEmptyState((__int64)a1, (__int64)a2, 2);
    if ( ((unsigned __int8)v6 & (unsigned __int8)*(_DWORD *)(v8 + 1260) & 0x27) == v6 )
      return v7;
    return v2;
  }
  return v5;
}
