/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x140371720
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x1408396DC (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x14083CBB8 (EtwpFreeKeyNameList.c)
 *     PopPowerRequestStatsOnSleepstudySessionChange @ 0x140875AA0 (PopPowerRequestStatsOnSleepstudySessionChange.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140ADC260 (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140ADC2D4 (VfAvlEnumerateNodes.c)
 *     VfPtGenerateTraceInformation @ 0x140ADE808 (VfPtGenerateTraceInformation.c)
 *     ViPtDeleteAvlTrees @ 0x140ADEC20 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x140371750 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
