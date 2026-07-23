/*
 * XREFs of EtwProviderEnabled @ 0x140304420
 * Callers:
 *     EtwTraceMemoryAcg @ 0x1403043C8 (EtwTraceMemoryAcg.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140363F94 (EtwTiLogInsertQueueUserApc.c)
 *     EtwpLogMemNodeInfo @ 0x140467E86 (EtwpLogMemNodeInfo.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x14068190C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTiLogMapExecView @ 0x140682E58 (EtwTiLogMapExecView.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14076BC24 (EtwTiLogDeviceObjectLoadUnload.c)
 *     EtwTiLogAllocExecVm @ 0x14076BD78 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x14076C02C (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1407A306C (EtwTiLogSetContextThread.c)
 *     EtwTraceWorkingSetSwap @ 0x1407B7488 (EtwTraceWorkingSetSwap.c)
 *     EtwTiLogDriverObjectLoad @ 0x1407DED38 (EtwTiLogDriverObjectLoad.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1407E28F0 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1407E7E40 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140858000 (EtwTiLogDriverObjectUnLoad.c)
 *     EtwTiLogProtectExecVm @ 0x1408A783A (EtwTiLogProtectExecVm.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408A7B14 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E8F34 (EtwTiLogSuspendResumeProcess.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1402585E0 (EtwpLevelKeywordEnabled.c)
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  __int64 v4; // rax
  UCHAR v5; // cl
  BOOLEAN result; // al

  result = 0;
  if ( RegHandle )
  {
    v4 = *(_QWORD *)(RegHandle + 32);
    if ( *(_DWORD *)(v4 + 96) )
    {
      v5 = *(_BYTE *)(v4 + 100);
      if ( (Level <= v5 || !v5)
        && ((*(_DWORD *)(v4 + 104) & 0x40) != 0 && !Keyword
         || (Keyword & *(_QWORD *)(v4 + 112)) != 0 && (Keyword & *(_QWORD *)(v4 + 120)) == *(_QWORD *)(v4 + 120)) )
      {
        return 1;
      }
    }
    if ( *(_BYTE *)(RegHandle + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 40) + 96LL, Level, Keyword) )
      return 1;
  }
  return result;
}
