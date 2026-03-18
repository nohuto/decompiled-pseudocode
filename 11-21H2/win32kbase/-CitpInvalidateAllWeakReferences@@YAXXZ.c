/*
 * XREFs of ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C023FCCC
 * Callers:
 *     ?CitpResetTracking@@YAJXZ @ 0x1C0240624 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C0017550 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C004BBEC (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 */

void CitpInvalidateAllWeakReferences(void)
{
  __int64 i; // rbx
  __int64 v1; // rcx

  for ( i = gppiList; i; i = *(_QWORD *)(i + 376) )
  {
    if ( CitpProcessInfoIsValid(*(struct _CIT_PROCESS **)(i + 928)) )
    {
      *(_DWORD *)(v1 + 40) = 0;
      CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(*(_QWORD *)(i + 928) + 32LL));
    }
  }
}
