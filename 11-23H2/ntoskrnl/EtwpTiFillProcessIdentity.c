/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x1403041E4
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x140363F94 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTiLogMapExecView @ 0x140682E58 (EtwTiLogMapExecView.c)
 *     EtwTiLogAllocExecVm @ 0x14076BD78 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x14076C02C (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1407A306C (EtwTiLogSetContextThread.c)
 *     EtwTiLogProtectExecVm @ 0x1408A783A (EtwTiLogProtectExecVm.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408A7B14 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E8F34 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x1409E909C (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1409E9480 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1409E9C98 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1409EA224 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1409EA534 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1409EA918 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1409EB478 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     EtwpTimLogMitigationForProcess @ 0x1409EB9FC (EtwpTimLogMitigationForProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillProcessIdentity(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // rax

  a1[1] = 4LL;
  *a1 = a2 + 1088;
  a1[2] = a2 + 1128;
  a1[3] = 8LL;
  *a3 = *(_QWORD *)(a2 + 2296) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
  a1[6] = a2 + 2168;
  a1[8] = a2 + 2169;
  a1[10] = a2 + 2170;
  result = 6LL;
  a1[4] = a3;
  a1[5] = 8LL;
  a1[7] = 1LL;
  a1[9] = 1LL;
  a1[11] = 1LL;
  return result;
}
