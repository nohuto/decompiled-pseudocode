/*
 * XREFs of ?ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@W4_AR_STATE_CHANGE_EVENT@@@Z @ 0x18004FBEC
 * Callers:
 *     ?ArCsStateChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18006D1E0 (-ArCsStateChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x1800021A4 (-ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005200 (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005250 (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x1800052A0 (-ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x1800052F8 (-ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     CemRcTableGetFirst @ 0x180005910 (CemRcTableGetFirst.c)
 *     CemRcTableGetNext @ 0x180043224 (CemRcTableGetNext.c)
 */

unsigned __int64 __fastcall ArManagerRestartActivitiesForPhase(__int64 a1, char a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // rcx
  bool v6; // zf
  struct _AR_ACTIVITY_HOST *v7; // rbx

  ArManagerAcquireLockExclusive((struct _ACTIVITY_RESTARTER *)a1);
  *(_BYTE *)(a1 + 64) &= (a2 != 1) - 3;
  ArManagerReleaseLockExclusive((struct _ACTIVITY_RESTARTER *)a1);
  for ( result = CemRcTableGetFirst(a1); ; result = CemRcTableGetNext(v7) )
  {
    v7 = (struct _AR_ACTIVITY_HOST *)result;
    if ( !result )
      break;
    if ( !*(_QWORD *)(result + 600) )
      continue;
    ArHostWaitForAndSetChangeInProgress((struct _AR_ACTIVITY_HOST *)result);
    v5 = *((_QWORD *)v7 + 75);
    if ( v5 && (unsigned __int8)(*(_BYTE *)(v5 + 32) - 1) > 1u )
    {
      if ( !a2 )
      {
        v6 = (*(_BYTE *)(v5 + 28) & 1) == 0;
        goto LABEL_9;
      }
      if ( a2 == 1 )
      {
        v6 = (*(_BYTE *)(v5 + 28) & 2) == 0;
LABEL_9:
        if ( !v6 )
          ArActStartAsync((struct _AR_ACTIVITY *)v5);
      }
    }
    ArHostClearChangeInProgress(v7);
  }
  return result;
}
