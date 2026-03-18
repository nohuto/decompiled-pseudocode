/*
 * XREFs of CcGetNodeForLazyWrite @ 0x1402769F8
 * Callers:
 *     CcLazyWriteScan @ 0x140275670 (CcLazyWriteScan.c)
 *     CcNotifyOfMappedWrite @ 0x140310AD0 (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScanVolume @ 0x140538E4C (CcLazyWriteScanVolume.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetNodeForLazyWrite(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rdx

  v1 = *(_DWORD *)(a1 + 548);
  if ( v1 == -1 )
    v1 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v2 = v1 % CcNumberNumaNodes;
  if ( CcEnablePerVolumeLazyWriter == 1 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 592) + 8 * v2 + 64);
  else
    return *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v2 + 80);
}
