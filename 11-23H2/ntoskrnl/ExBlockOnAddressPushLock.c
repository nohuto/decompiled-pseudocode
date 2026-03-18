/*
 * XREFs of ExBlockOnAddressPushLock @ 0x1403486A0
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1402EC614 (CmpWaitForLateUnloadWorker.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x1405B74E0 (RtlpCSparseBitmapWaitOnAddress.c)
 *     CmFcManagerFlushFeatureUsage @ 0x14067F5CC (CmFcManagerFlushFeatureUsage.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x14067FD84 (CmFcpManagerProcessUsageDataProviders.c)
 *     MiLockImageSection @ 0x1406F5770 (MiLockImageSection.c)
 *     CmpTransSearchAddTrans @ 0x14076853C (CmpTransSearchAddTrans.c)
 *     CmLoadAppKey @ 0x140769640 (CmLoadAppKey.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1407BA690 (ExpBlockOnLockedHandleEntry.c)
 *     CmpRollbackLightWeightTransaction @ 0x1407D0830 (CmpRollbackLightWeightTransaction.c)
 *     RtlUpdateSwapReference @ 0x14080E0D8 (RtlUpdateSwapReference.c)
 *     PopBatteryUpdateCurrentState @ 0x1408737FC (PopBatteryUpdateCurrentState.c)
 *     PsSetVmProcessorHostProcess @ 0x1409B0AB8 (PsSetVmProcessorHostProcess.c)
 *     CmUnRegisterCallback @ 0x140A0F1C0 (CmUnRegisterCallback.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x140209468 (ExpUnblockPushLock.c)
 *     ExBlockPushLock @ 0x140348760 (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140348780 (ExTimedWaitForUnblockPushLock.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall ExBlockOnAddressPushLock(
        volatile __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 a4,
        __int64 a5)
{
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  bool v12; // zf
  _BYTE v14[64]; // [rsp+20h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  ExBlockPushLock(a1, v14);
  if ( a4 > 8 )
    goto LABEL_8;
  v9 = a4 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        if ( v11 != 4 )
          goto LABEL_8;
        v12 = *a2 == *a3;
      }
      else
      {
        v12 = *(_DWORD *)a2 == *(_DWORD *)a3;
      }
    }
    else
    {
      v12 = *(_WORD *)a2 == *(_WORD *)a3;
    }
  }
  else
  {
    v12 = *(_BYTE *)a2 == *(_BYTE *)a3;
  }
  if ( v12 )
    return ExTimedWaitForUnblockPushLock(a1, v14, a5);
LABEL_8:
  ExpUnblockPushLock(a1, v14, 0);
  return 0LL;
}
