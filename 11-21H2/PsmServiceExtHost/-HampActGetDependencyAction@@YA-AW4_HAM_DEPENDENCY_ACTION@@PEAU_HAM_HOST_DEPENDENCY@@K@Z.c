/*
 * XREFs of ?HampActGetDependencyAction@@YA?AW4_HAM_DEPENDENCY_ACTION@@PEAU_HAM_HOST_DEPENDENCY@@K@Z @ 0x18007791C
 * Callers:
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180074EF8 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall HampActGetDependencyAction(__int64 *a1, char a2)
{
  __int64 v2; // r9
  char v5; // dl

  v2 = *a1;
  if ( *a1 && (*(_BYTE *)(v2 + 552) & 8) != 0 || (a2 & 2) != 0 )
    return 3;
  v5 = 3;
  if ( *((_BYTE *)a1 + 40) == 3 )
    return (unsigned __int64)a1[8] < *(_QWORD *)(a1[6] + 816) ? 5 : 0;
  if ( (*(_DWORD *)(v2 + 552) & 0x180u) >= 0x80 || (a2 & 1) == 0 )
    v5 = 1;
  if ( (v5 == 1) == (*(_BYTE *)(v2 + 562) == 1) )
    return 0;
  else
    return (v5 == 1) + 1;
}
