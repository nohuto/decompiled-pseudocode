/*
 * XREFs of ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180085514
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800188E0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180019AE0 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x1800325FC (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 */

void __fastcall RmpActivityHostSetCommitSavings(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  int v3; // edx
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  RmHamHostActOnProcesses(
    a1,
    0x2001u,
    1u,
    (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostCommitSavingsCallback,
    &v4);
  v3 = v4;
  *((_DWORD *)a1 + 317) ^= (*((_DWORD *)a1 + 317) ^ (16 * v4)) & 0x10;
  if ( !v3 )
    *((_DWORD *)a1 + 316) &= ~4u;
}
