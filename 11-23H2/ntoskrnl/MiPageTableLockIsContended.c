/*
 * XREFs of MiPageTableLockIsContended @ 0x1402E6CC0
 * Callers:
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiDispatchFault @ 0x140238000 (MiDispatchFault.c)
 *     NtUnlockVirtualMemory @ 0x1402833F0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1402A33B0 (NtLockVirtualMemory.c)
 *     MiProbePacketContended @ 0x1402E6814 (MiProbePacketContended.c)
 *     MiRemoveMappedPtes @ 0x1402E6870 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402F17EC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140631180 (MiInsertViewOfPhysicalSection.c)
 *     MiVadRangeIsIoSpace @ 0x140631C44 (MiVadRangeIsIoSpace.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632F88 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiAddPagesToEnclave @ 0x140646F60 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140647788 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647A30 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140648798 (MiProtectEnclavePages.c)
 *     MiWriteAwePtes @ 0x14064CB0C (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x14065E98C (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiGetPageTableLockBuffer @ 0x140319A68 (MiGetPageTableLockBuffer.c)
 */

__int64 __fastcall MiPageTableLockIsContended(__int64 a1, unsigned __int64 a2)
{
  char v2; // al
  char v3; // r8
  unsigned __int64 v4; // rax
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rax
  char v7; // al
  struct _KPRCB *CurrentPrcb; // rcx
  bool v9; // zf
  __int64 v10; // rcx
  _DWORD *PageTableLockBuffer; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v13; // rcx
  int v14; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  v14 = 0;
  v3 = v2 & 7;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v3 )
    {
      v7 = v2 & 7;
      if ( v7 == 7 )
      {
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = v7 == 5;
        SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        if ( !v9 )
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
      }
    }
    else
    {
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    return SelfmapLockHandle->LockQueue.Next != 0LL;
  }
  else
  {
    if ( a2 >= 0xFFFFF6FB7DBED000uLL )
    {
      if ( v3 )
      {
        if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(a1, a2, &v14);
          return (*PageTableLockBuffer >> v14 >> 1) & 1;
        }
      }
      else if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v10 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 624);
        if ( v10 )
          return (*(_DWORD *)(v10 + 4 * ((a2 >> 3) & 0x1FF)) >> 30) & 1;
      }
    }
    v4 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v4 & 1) != 0
      && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v13 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
        if ( (v13 & 0x20) != 0 )
          v4 |= 0x20uLL;
        if ( (v13 & 0x42) != 0 )
          v4 |= 0x42uLL;
      }
    }
    return (v4 >> 60) & 2;
  }
}
