/*
 * XREFs of CcGetCurrentNumaNode @ 0x1403298E0
 * Callers:
 *     CcWriteBehind @ 0x14029B7E8 (CcWriteBehind.c)
 *     CcScheduleReadAheadNuma @ 0x14032924C (CcScheduleReadAheadNuma.c)
 *     CcAdjustWriteBehindThreadPool @ 0x140536128 (CcAdjustWriteBehindThreadPool.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1405361A4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetCurrentNumaNode(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] % (unsigned int)CcNumberNumaNodes;
  if ( CcEnablePerVolumeLazyWriter )
    return *(_QWORD *)(*(_QWORD *)(a2 + 600) + 8 * v3 + 64);
  else
    return *(_QWORD *)(a1 + 8 * v3 + 112);
}
