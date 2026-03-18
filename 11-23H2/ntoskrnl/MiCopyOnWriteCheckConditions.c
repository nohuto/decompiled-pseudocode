/*
 * XREFs of MiCopyOnWriteCheckConditions @ 0x140666E20
 * Callers:
 *     MiCopyToUserVa @ 0x14021CBDC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14021CE44 (MiSplitPrivatePage.c)
 *     MmAccessFault @ 0x140235370 (MmAccessFault.c)
 *     MiProbeLeafPteAccess @ 0x140236C50 (MiProbeLeafPteAccess.c)
 *     MiSystemFault @ 0x1402611A0 (MiSystemFault.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiLockCode @ 0x140282330 (MiLockCode.c)
 *     MiWalkVaRange @ 0x140293D54 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140296FC0 (MmProtectPool.c)
 *     MiLockPagedAddress @ 0x1402ED4F0 (MiLockPagedAddress.c)
 *     MiLockDriverPageRange @ 0x140619E30 (MiLockDriverPageRange.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CA64 (MiSplitReducedCommitClonePage.c)
 *     MiReplaceImportEntry @ 0x14062C6B0 (MiReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406428C8 (MiPrepareImagePagesForHotPatch.c)
 *     MiLockAweVadsShared @ 0x14064B070 (MiLockAweVadsShared.c)
 *     MiMakeProtoPrivate @ 0x14064D2D4 (MiMakeProtoPrivate.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140214D94 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029C94C (LOCK_ADDRESS_SPACE.c)
 *     MiWaitForFreePage @ 0x140653A48 (MiWaitForFreePage.c)
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
          LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
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
    MiWaitForFreePage(*(_QWORD **)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a1 + 174)));
  }
}
