/*
 * XREFs of ExBlockOnAddressPushLock @ 0x140348930
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1402EC8A4 (CmpWaitForLateUnloadWorker.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x1405B7A50 (RtlpCSparseBitmapWaitOnAddress.c)
 *     CmFcManagerFlushFeatureUsage @ 0x14067F5CC (CmFcManagerFlushFeatureUsage.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x14067FD84 (CmFcpManagerProcessUsageDataProviders.c)
 *     MiLockImageSection @ 0x1406F5980 (MiLockImageSection.c)
 *     CmpTransSearchAddTrans @ 0x14076872C (CmpTransSearchAddTrans.c)
 *     CmLoadAppKey @ 0x140769830 (CmLoadAppKey.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1407BA970 (ExpBlockOnLockedHandleEntry.c)
 *     CmpRollbackLightWeightTransaction @ 0x1407D0B00 (CmpRollbackLightWeightTransaction.c)
 *     RtlUpdateSwapReference @ 0x14080E3A8 (RtlUpdateSwapReference.c)
 *     PopBatteryUpdateCurrentState @ 0x140873A3C (PopBatteryUpdateCurrentState.c)
 *     PsSetVmProcessorHostProcess @ 0x1409B0CB8 (PsSetVmProcessorHostProcess.c)
 *     CmUnRegisterCallback @ 0x140A0F470 (CmUnRegisterCallback.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x140209468 (ExpUnblockPushLock.c)
 *     ExBlockPushLock @ 0x1403489F0 (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140348A10 (ExTimedWaitForUnblockPushLock.c)
 *     memset @ 0x140435E00 (memset.c)
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
