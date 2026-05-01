/*
 * XREFs of ?ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@W4_AR_STATE_CHANGE_EVENT@@@Z @ 0x18004B1A0
 * Callers:
 *     ?ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18004AF50 (-ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180003154 (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800031A4 (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x1800032D4 (-ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     CemRcTableGetFirst @ 0x180016F78 (CemRcTableGetFirst.c)
 *     CemRcTableGetNext @ 0x18003F6C0 (CemRcTableGetNext.c)
 */

unsigned __int64 __fastcall ArManagerRestartActivitiesForPhase(__int64 a1, char a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  bool v5; // zf
  struct _AR_ACTIVITY_HOST *v6; // rbx

  for ( result = CemRcTableGetFirst(a1); ; result = CemRcTableGetNext(v6) )
  {
    v6 = (struct _AR_ACTIVITY_HOST *)result;
    if ( !result )
      break;
    if ( !*(_QWORD *)(result + 600) )
      continue;
    ArHostWaitForAndSetChangeInProgress((struct _AR_ACTIVITY_HOST *)result);
    v4 = *((_QWORD *)v6 + 75);
    if ( v4 && (unsigned __int8)(*(_BYTE *)(v4 + 32) - 1) > 1u )
    {
      if ( !a2 )
      {
        v5 = (*(_BYTE *)(v4 + 28) & 1) == 0;
        goto LABEL_9;
      }
      if ( a2 == 1 )
      {
        v5 = (*(_BYTE *)(v4 + 28) & 2) == 0;
LABEL_9:
        if ( !v5 )
          ArActStartAsync((struct _AR_ACTIVITY *)v4);
      }
    }
    ArHostClearChangeInProgress(v6);
  }
  return result;
}
