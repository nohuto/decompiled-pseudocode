/*
 * XREFs of ?HampProcessSnapshotEnsureAdditionalCapacity@@YAJPEAU_HAM_PROCESS_SNAPSHOT@@K@Z @ 0x18004C264
 * Callers:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x180021270 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x1800326A0 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?HampReAllocateHeapZero@@YAJPEAPEAX_K@Z @ 0x18004C304 (-HampReAllocateHeapZero@@YAJPEAPEAX_K@Z.c)
 */

int __fastcall HampProcessSnapshotEnsureAdditionalCapacity(struct _HAM_PROCESS_SNAPSHOT *a1, int a2)
{
  unsigned int v2; // eax
  unsigned int v4; // r8d
  unsigned __int64 v5; // rbx
  int result; // eax

  v2 = *((_DWORD *)a1 + 4);
  v4 = v2 + a2;
  if ( v2 + a2 < v2 )
    return -1073741675;
  LODWORD(v5) = *((_DWORD *)a1 + 5);
  if ( v4 <= (unsigned int)v5 )
    return 0;
  if ( (_DWORD)v5 )
  {
    while ( 1 )
    {
      v5 = 2LL * (unsigned int)v5;
      if ( v5 > 0xFFFFFFFF )
        return -1073741675;
      if ( (unsigned int)v5 >= v4 )
        goto LABEL_9;
    }
  }
  LODWORD(v5) = v2 + a2;
LABEL_9:
  if ( !is_mul_ok((unsigned int)v5, 8uLL) )
    return -1073741675;
  result = HampReAllocateHeapZero((void **)a1, 8LL * (unsigned int)v5);
  if ( result < 0 )
    return result;
  if ( !is_mul_ok((unsigned int)v5, 4uLL) )
    return -1073741675;
  result = HampReAllocateHeapZero((void **)a1 + 1, 4LL * (unsigned int)v5);
  if ( result >= 0 )
  {
    *((_DWORD *)a1 + 5) = v5;
    return 0;
  }
  return result;
}
