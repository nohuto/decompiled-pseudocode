/*
 * XREFs of ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A554
 * Callers:
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A410 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E63C (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?HampHostComputeDesiredHamState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180079C0C (-HampHostComputeDesiredHamState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18008D18C (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18008D934 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall RmpPolicyComputeDesiredState(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // r8d
  unsigned int i; // edx
  __int64 v5; // rax
  bool v6; // zf
  int v7; // eax
  unsigned int v9; // eax
  __int64 v10; // rsi
  int v11; // ebx
  unsigned int v12; // r8d

  if ( (*(_BYTE *)(a1 + 852) & 1) != 0 )
  {
    v9 = HampHostComputeDesiredHamState(a1 + 64);
    v6 = *(_QWORD *)(a1 + 664) == 0LL;
    v2 = v9;
  }
  else
  {
    v2 = 0;
    v3 = 0;
    for ( i = 0; i < 2; ++i )
    {
      v5 = (int)i;
      v3 += *(_DWORD *)(a1 + 24 * v5 + 1144);
    }
    v6 = v3 == 0;
  }
  if ( !v6 )
  {
    v7 = *(_DWORD *)(a1 + 624);
    if ( v7 != 2 )
    {
      if ( v7 == 4 )
      {
        if ( (*(_BYTE *)(a1 + 1256) & 1) != 0 )
          v2 |= 0x40u;
      }
      else if ( v7 != 8 )
      {
        return v2;
      }
    }
    if ( (v2 & 8) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 48) + 400LL;
      v11 = RmpPolicyComputeDesiredEmptyState(v10, a1, 0LL) | v2;
      v2 = RmpPolicyGetDesiredEmptyOptimizationsForHost(v10, a1) | v11;
      if ( RmpPolicyIsHostCommitSaveEligible((struct _RM_POLICY *)v10, (struct _RM_ACTIVITY_HOST *)a1, v12) )
        v2 ^= ((unsigned __int8)v2 ^ (unsigned __int8)(8 * *(_DWORD *)(v10 + 108))) & 0x10;
    }
  }
  return v2;
}
