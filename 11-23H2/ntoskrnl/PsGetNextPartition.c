/*
 * XREFs of PsGetNextPartition @ 0x14036AF10
 * Callers:
 *     MiCheckControlArea @ 0x14029FE50 (MiCheckControlArea.c)
 *     MmSetTrimWhileAgingState @ 0x14036AED4 (MmSetTrimWhileAgingState.c)
 *     EtwpLogMemNodeInfo @ 0x140467E86 (EtwpLogMemNodeInfo.c)
 *     ExpCheckForWorker @ 0x14060D158 (ExpCheckForWorker.c)
 *     MiFreeExcessSegments @ 0x140624F6C (MiFreeExcessSegments.c)
 *     MmEmptyAllWorkingSets @ 0x140635BA0 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x140635BEC (MmTrimFilePagesFromWorkingSets.c)
 *     MmFlushAllPagesEx @ 0x14063C218 (MmFlushAllPagesEx.c)
 *     MiWakeAllZeroConductors @ 0x140655B5C (MiWakeAllZeroConductors.c)
 *     MmSetMinimumAgeRate @ 0x1407E7130 (MmSetMinimumAgeRate.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140A00A60 (ExpNodeHotAddProcessorWorker.c)
 *     MmEnablePeriodicAccessClearing @ 0x140A88A18 (MmEnablePeriodicAccessClearing.c)
 *     MiMirrorBrownPhase @ 0x140AAC49C (MiMirrorBrownPhase.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x1402F9EAC (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     PsGetNextPartitionUnsafe @ 0x140311180 (PsGetNextPartitionUnsafe.c)
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
