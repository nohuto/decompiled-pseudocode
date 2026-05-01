/*
 * XREFs of ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180039634
 * Callers:
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180084A58 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B0EC (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?HampHostComputeDesiredHamState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800390B8 (-HampHostComputeDesiredHamState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800396E0 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18005607C (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 */

__int64 __fastcall RmpPolicyComputeDesiredState(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rsi
  int v5; // ebx
  unsigned int v6; // r8d

  v2 = HampHostComputeDesiredHamState(a1 + 64);
  if ( *(_QWORD *)(a1 + 664) )
  {
    v3 = *(_DWORD *)(a1 + 624);
    if ( v3 != 2 )
    {
      if ( v3 == 4 )
      {
        if ( (*(_BYTE *)(a1 + 1264) & 1) != 0 )
          v2 |= 0x40u;
      }
      else if ( v3 != 8 )
      {
        return v2;
      }
    }
    if ( (v2 & 8) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 48) + 400LL;
      v5 = RmpPolicyComputeDesiredEmptyState(v4, a1, 0LL) | v2;
      v2 = RmpPolicyGetDesiredEmptyOptimizationsForHost(v4, a1) | v5;
      if ( RmpPolicyIsHostCommitSaveEligible((struct _RM_POLICY *)v4, (struct _RM_ACTIVITY_HOST *)a1, v6) )
        v2 ^= ((unsigned __int8)v2 ^ (unsigned __int8)(8 * *(_DWORD *)(v4 + 108))) & 0x10;
    }
  }
  return v2;
}
