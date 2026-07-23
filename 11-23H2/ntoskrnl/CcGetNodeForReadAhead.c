/*
 * XREFs of CcGetNodeForReadAhead @ 0x1402C1674
 * Callers:
 *     CcAsyncCopyRead @ 0x1402C1300 (CcAsyncCopyRead.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetNodeForReadAhead(__int64 a1)
{
  __int64 v1; // rdx

  v1 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] % (unsigned int)CcNumberNumaNodes;
  if ( CcEnablePerVolumeLazyWriter )
    return *(_QWORD *)(*(_QWORD *)(a1 + 600) + 8 * v1 + 64);
  else
    return *(_QWORD *)(*(_QWORD *)(a1 + 536) + 8 * v1 + 112);
}
