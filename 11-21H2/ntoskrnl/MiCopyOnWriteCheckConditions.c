/*
 * XREFs of MiCopyOnWriteCheckConditions @ 0x1405BCAF8
 * Callers:
 *     MiMakeProtoPrivate @ 0x1402011DC (MiMakeProtoPrivate.c)
 *     MiLockPagedAddress @ 0x140245DF4 (MiLockPagedAddress.c)
 *     MiSystemFault @ 0x140279590 (MiSystemFault.c)
 *     MiCopyToUserVa @ 0x14028DF40 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14028E238 (MiSplitPrivatePage.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiProbeLeafPteAccess @ 0x14031C290 (MiProbeLeafPteAccess.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiWalkVaRange @ 0x14033E5D0 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MiLockDriverPageRange @ 0x140581D58 (MiLockDriverPageRange.c)
 *     MiSplitReducedCommitClonePage @ 0x1405845D4 (MiSplitReducedCommitClonePage.c)
 *     MiReplaceImportEntry @ 0x1405905F0 (MiReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405A3818 (MiPrepareImagePagesForHotPatch.c)
 *     MiLockAweVadsShared @ 0x1405AB9F0 (MiLockAweVadsShared.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140281A58 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     MiWaitForFreePage @ 0x1405B8348 (MiWaitForFreePage.c)
 */

void __fastcall MiCopyOnWriteCheckConditions(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // rdi
  struct _KTHREAD *v4; // rax

  if ( a2 == -1073740748 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      Process = (__int64)CurrentThread->ApcState.Process;
      v4 = *(struct _KTHREAD **)(Process + 1248);
      if ( v4 )
      {
        if ( v4 != CurrentThread )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx(Process + 1224, 0LL);
          LOBYTE(CurrentThread[1].Queue) |= 1u;
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
        }
      }
    }
  }
  else if ( a2 == -1073741801
         && KeGetCurrentIrql() < 2u
         && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0
         && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0xC) == 0 )
  {
    MiWaitForFreePage(*(_QWORD **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)));
  }
}
