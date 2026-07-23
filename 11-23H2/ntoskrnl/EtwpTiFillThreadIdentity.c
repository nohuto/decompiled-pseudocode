/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x140304488
 * Callers:
 *     EtwTiLogMapExecView @ 0x140682E58 (EtwTiLogMapExecView.c)
 *     EtwTiLogAllocExecVm @ 0x14076BD78 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x14076C02C (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1407A306C (EtwTiLogSetContextThread.c)
 *     EtwTiLogProtectExecVm @ 0x1408A783A (EtwTiLogProtectExecVm.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408A7B14 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E8F34 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1409E9C98 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1409EA224 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1409EA534 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwpTimLogMitigationForProcess @ 0x1409EB9FC (EtwpTimLogMitigationForProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillThreadIdentity(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)a1 = a2 + 1232;
  *(_QWORD *)(a1 + 16) = a2 + 1152;
  result = 2LL;
  *(_DWORD *)(a1 + 8) = 4;
  *(_DWORD *)(a1 + 24) = 8;
  return result;
}
