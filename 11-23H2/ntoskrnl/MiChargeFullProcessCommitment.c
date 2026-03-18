/*
 * XREFs of MiChargeFullProcessCommitment @ 0x1406F7800
 * Callers:
 *     MiCopyToUserVa @ 0x14021CBDC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14021CE44 (MiSplitPrivatePage.c)
 *     MiProbeAndLockPrepare @ 0x140234DB0 (MiProbeAndLockPrepare.c)
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1402776B0 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1402A2880 (MiProtectPrivateMemory.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CA64 (MiSplitReducedCommitClonePage.c)
 *     MiCommitHotPatchTable @ 0x1406422A8 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406428C8 (MiPrepareImagePagesForHotPatch.c)
 *     MiComputeProcessUserVa @ 0x1406B3118 (MiComputeProcessUserVa.c)
 *     MiCommitPageTablesForVad @ 0x1406F9470 (MiCommitPageTablesForVad.c)
 *     MiCreateLargePageVad @ 0x140A495E8 (MiCreateLargePageVad.c)
 * Callees:
 *     PspChargeQuota @ 0x14022EBF0 (PspChargeQuota.c)
 *     MiGetProcessPartition @ 0x140275694 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x1402756D0 (MiChargeProcessCommitment.c)
 *     MiChargeCommit @ 0x1402764C0 (MiChargeCommit.c)
 *     MiReturnProcessCommitment @ 0x140656668 (MiReturnProcessCommitment.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406FABC0 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReturnProcessPageFileQuota @ 0x140744FB4 (PsReturnProcessPageFileQuota.c)
 *     MiCommitRequestFailed @ 0x140A438F4 (MiCommitRequestFailed.c)
 */

__int64 __fastcall MiChargeFullProcessCommitment(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  char v5; // bl
  unsigned __int64 ProcessPartition; // rax
  unsigned int v8; // ebp
  unsigned int v9; // r14d

  if ( (PEPROCESS)a1 == PsInitialSystemProcess || (int)PspChargeQuota(*(_QWORD *)(a1 + 1384), a1, 2, a2) >= 0 )
  {
    v5 = 1;
    if ( (unsigned int)MiChargeProcessCommitment((_QWORD *)a1, a2) )
    {
      v5 = 3;
      if ( (*(_DWORD *)(a1 + 1120) & 0x10) == 0 )
      {
LABEL_5:
        ProcessPartition = MiGetProcessPartition(a1);
        if ( (unsigned int)MiChargeCommit(ProcessPartition, a2, 0LL) )
          return 0LL;
        v9 = 4;
        goto LABEL_13;
      }
      if ( (unsigned __int8)PspChangeJobMemoryUsageByProcess(2LL, a2, a1) )
      {
        v5 = 7;
        goto LABEL_5;
      }
      v9 = 3;
    }
    else
    {
      v9 = 2;
    }
LABEL_13:
    v8 = -1073741523;
    PsReturnProcessPageFileQuota(a1, a2);
    if ( (v5 & 2) != 0 )
      MiReturnProcessCommitment(a1, a2);
    if ( (unsigned __int8)v5 >= 4u )
      PspChangeJobMemoryUsageByProcess(2LL, -(__int64)a2, a1);
    goto LABEL_17;
  }
  v8 = -1073741524;
  v9 = 1;
LABEL_17:
  MiCommitRequestFailed(a1, v4, a2, v9);
  return v8;
}
