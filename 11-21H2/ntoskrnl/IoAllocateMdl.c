/*
 * XREFs of IoAllocateMdl @ 0x14029C7F0
 * Callers:
 *     sub_140233930 @ 0x140233930 (sub_140233930.c)
 *     sub_1402459E8 @ 0x1402459E8 (sub_1402459E8.c)
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     sub_14029BAD0 @ 0x14029BAD0 (sub_14029BAD0.c)
 *     sub_14029C34C @ 0x14029C34C (sub_14029C34C.c)
 *     sub_1403428E0 @ 0x1403428E0 (sub_1403428E0.c)
 *     sub_1404183E0 @ 0x1404183E0 (sub_1404183E0.c)
 *     sub_140503D4C @ 0x140503D4C (sub_140503D4C.c)
 *     sub_140511220 @ 0x140511220 (sub_140511220.c)
 *     sub_14053A460 @ 0x14053A460 (sub_14053A460.c)
 *     sub_140543148 @ 0x140543148 (sub_140543148.c)
 *     MmAllocateMdlForIoSpace @ 0x140585AD0 (MmAllocateMdlForIoSpace.c)
 *     sub_1405A1D20 @ 0x1405A1D20 (sub_1405A1D20.c)
 *     sub_1405A3818 @ 0x1405A3818 (sub_1405A3818.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     sub_1406E0358 @ 0x1406E0358 (sub_1406E0358.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     sub_1407084B0 @ 0x1407084B0 (sub_1407084B0.c)
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 *     sub_1407563A0 @ 0x1407563A0 (sub_1407563A0.c)
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 *     sub_1407F5914 @ 0x1407F5914 (sub_1407F5914.c)
 *     sub_140845A60 @ 0x140845A60 (sub_140845A60.c)
 *     sub_140845F30 @ 0x140845F30 (sub_140845F30.c)
 *     sub_140931378 @ 0x140931378 (sub_140931378.c)
 *     sub_140933A9C @ 0x140933A9C (sub_140933A9C.c)
 *     sub_140935320 @ 0x140935320 (sub_140935320.c)
 *     sub_140935790 @ 0x140935790 (sub_140935790.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 *     sub_14093C164 @ 0x14093C164 (sub_14093C164.c)
 *     sub_1409525B4 @ 0x1409525B4 (sub_1409525B4.c)
 *     sub_140970AB4 @ 0x140970AB4 (sub_140970AB4.c)
 *     sub_140971B68 @ 0x140971B68 (sub_140971B68.c)
 *     sub_140976140 @ 0x140976140 (sub_140976140.c)
 *     sub_14097D9E0 @ 0x14097D9E0 (sub_14097D9E0.c)
 *     sub_14098F634 @ 0x14098F634 (sub_14098F634.c)
 *     sub_1409EC8CC @ 0x1409EC8CC (sub_1409EC8CC.c)
 *     sub_1409ED100 @ 0x1409ED100 (sub_1409ED100.c)
 *     sub_140A07780 @ 0x140A07780 (sub_140A07780.c)
 *     sub_140A0EC90 @ 0x140A0EC90 (sub_140A0EC90.c)
 *     sub_140A7FF00 @ 0x140A7FF00 (sub_140A7FF00.c)
 *     sub_140A849F0 @ 0x140A849F0 (sub_140A849F0.c)
 *     sub_140A872C8 @ 0x140A872C8 (sub_140A872C8.c)
 *     sub_140A8A840 @ 0x140A8A840 (sub_140A8A840.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

PMDL __stdcall IoAllocateMdl(
        PVOID VirtualAddress,
        ULONG Length,
        BOOLEAN SecondaryBuffer,
        BOOLEAN ChargeQuota,
        PIRP Irp)
{
  __int16 v5; // si
  CSHORT v8; // r15
  unsigned __int64 v9; // rbx
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v11; // rbp
  PMDL result; // rax
  int LockArray_high; // ecx
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  PMDL MdlAddress; // rcx
  struct _MDL *i; // rdx

  v5 = (__int16)VirtualAddress;
  v8 = 0;
  v9 = (((unsigned __int16)VirtualAddress & 0xFFF) + (unsigned __int64)Length + 4095) >> 12;
  if ( (unsigned int)v9 > 0x11 )
  {
    v17 = 8 * v9 + 48;
  }
  else
  {
    v8 = 8;
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = *((_QWORD *)CurrentPrcb + 262);
    ++*(_DWORD *)(v11 + 20);
    result = (PMDL)ExpInterlockedPopEntrySList((PSLIST_HEADER)v11);
    if ( result )
      goto LABEL_3;
    ++*(_DWORD *)(v11 + 24);
    v14 = *((_QWORD *)CurrentPrcb + 263);
    ++*(_DWORD *)(v14 + 20);
    result = (PMDL)ExpInterlockedPopEntrySList((PSLIST_HEADER)v14);
    if ( result
      || (v15 = *(unsigned int *)(v14 + 44),
          v16 = *(unsigned int *)(v14 + 36),
          ++*(_DWORD *)(v14 + 24),
          (result = (PMDL)sub_14042A5E0(v16, v15)) != 0LL) )
    {
LABEL_3:
      LODWORD(result->Next) = *((_DWORD *)CurrentPrcb + 9);
    }
    if ( result )
    {
      LOWORD(LockArray_high) = result->Next;
      goto LABEL_6;
    }
    v17 = 184;
  }
  result = (PMDL)ExAllocatePool2(64LL, v17, 543974477LL);
  if ( !result )
    return result;
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
LABEL_6:
  *(&result->MdlFlags + 1) = LockArray_high;
  result->Next = 0LL;
  result->Size = 8 * (v9 + 6);
  result->StartVa = (PVOID)((unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL);
  result->ByteOffset = v5 & 0xFFF;
  result->ByteCount = Length;
  result->MdlFlags = v8;
  if ( Irp )
  {
    if ( SecondaryBuffer )
    {
      MdlAddress = Irp->MdlAddress;
      for ( i = MdlAddress->Next; i; i = i->Next )
        MdlAddress = i;
      MdlAddress->Next = result;
    }
    else
    {
      Irp->MdlAddress = result;
    }
  }
  return result;
}
