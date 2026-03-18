/*
 * XREFs of MiPageTableLockIsContended @ 0x140274C80
 * Callers:
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140200D20 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140213398 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiProbePacketContended @ 0x140274818 (MiProbePacketContended.c)
 *     MiRemoveMappedPtes @ 0x140274860 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     NtUnlockVirtualMemory @ 0x1402CD9C0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiDispatchFault @ 0x14031E200 (MiDispatchFault.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403D5614 (MiInsertViewOfPhysicalSection.c)
 *     MiVadRangeIsIoSpace @ 0x1405941C0 (MiVadRangeIsIoSpace.c)
 *     MiAddPagesToEnclave @ 0x1405A7D28 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405A8748 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1405A9744 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x1405AAA4C (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x1405C4FB8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiGetPageTableLockBuffer @ 0x14020DAE8 (MiGetPageTableLockBuffer.c)
 */

__int64 __fastcall MiPageTableLockIsContended(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8
  char v3; // r8
  unsigned __int64 v4; // rax
  struct _KPRCB *CurrentPrcb; // rax
  char v7; // r8
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rax
  __int64 v9; // rcx
  char *PageTableLockBuffer; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v12; // rcx
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  v13 = 0;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = v2 & 7;
    if ( v7 )
    {
      if ( v7 == 7 )
      {
        SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[1];
      }
      else if ( v7 == 5 )
      {
        SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
      }
      else
      {
        SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
      }
    }
    else
    {
      SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[2];
    }
    return SelfmapLockHandle->LockQueue.Next != 0;
  }
  v3 = v2 & 7;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL )
  {
    if ( !v3 )
    {
      if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v9 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 592);
        if ( v9 )
          return (*(_DWORD *)(v9 + 4 * ((a2 >> 3) & 0x1FF)) >> 30) & 1;
      }
      goto LABEL_3;
    }
    if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      PageTableLockBuffer = MiGetPageTableLockBuffer(a1, a2, &v13);
      return ((*(_DWORD *)PageTableLockBuffer >> v13) & 2) != 0;
    }
  }
LABEL_3:
  v4 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v12 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      if ( (v12 & 0x20) != 0 )
        v4 |= 0x20uLL;
      if ( (v12 & 0x42) != 0 )
        v4 |= 0x42uLL;
    }
  }
  return (v4 >> 60) & 2;
}
