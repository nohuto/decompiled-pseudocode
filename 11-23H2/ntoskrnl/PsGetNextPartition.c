/*
 * XREFs of PsGetNextPartition @ 0x14036AD70
 * Callers:
 *     MiCheckControlArea @ 0x14029FBC0 (MiCheckControlArea.c)
 *     MmSetTrimWhileAgingState @ 0x14036AD34 (MmSetTrimWhileAgingState.c)
 *     EtwpLogMemNodeInfo @ 0x140467A86 (EtwpLogMemNodeInfo.c)
 *     ExpCheckForWorker @ 0x14060CC08 (ExpCheckForWorker.c)
 *     MiFreeExcessSegments @ 0x140624A1C (MiFreeExcessSegments.c)
 *     MmEmptyAllWorkingSets @ 0x140635650 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14063569C (MmTrimFilePagesFromWorkingSets.c)
 *     MmFlushAllPagesEx @ 0x14063BCC8 (MmFlushAllPagesEx.c)
 *     MiWakeAllZeroConductors @ 0x14065560C (MiWakeAllZeroConductors.c)
 *     MmSetMinimumAgeRate @ 0x1407E6E60 (MmSetMinimumAgeRate.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140A007D0 (ExpNodeHotAddProcessorWorker.c)
 *     MmEnablePeriodicAccessClearing @ 0x140A88A18 (MmEnablePeriodicAccessClearing.c)
 *     MiMirrorBrownPhase @ 0x140AAC62C (MiMirrorBrownPhase.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x1402F9C1C (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x1402F9C4C (PsDereferencePartition.c)
 *     PsGetNextPartitionUnsafe @ 0x140310EF0 (PsGetNextPartitionUnsafe.c)
 */

_QWORD *__fastcall PsGetNextPartition(_QWORD *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rdi
  _UNKNOWN **NextPartitionUnsafe; // rax
  _QWORD *v4; // r8

  v1 = (__int64)a1;
  v2 = 0LL;
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(a1);
    if ( !NextPartitionUnsafe )
      break;
    if ( PsReferencePartitionSafe((__int64)NextPartitionUnsafe) )
    {
      v2 = v4;
      break;
    }
    a1 = v4;
  }
  if ( v1 )
    PsDereferencePartition(v1);
  return v2;
}
