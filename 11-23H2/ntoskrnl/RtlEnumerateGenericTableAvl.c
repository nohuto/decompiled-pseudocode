/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x1403718C0
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x1408399DC (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x14083CEB8 (EtwpFreeKeyNameList.c)
 *     PopPowerRequestStatsOnSleepstudySessionChange @ 0x140875CE0 (PopPowerRequestStatsOnSleepstudySessionChange.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140ADC250 (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140ADC2C4 (VfAvlEnumerateNodes.c)
 *     VfPtGenerateTraceInformation @ 0x140ADE7F8 (VfPtGenerateTraceInformation.c)
 *     ViPtDeleteAvlTrees @ 0x140ADEC10 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1403718F0 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
