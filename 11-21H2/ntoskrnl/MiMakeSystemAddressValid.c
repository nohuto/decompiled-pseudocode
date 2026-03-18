/*
 * XREFs of MiMakeSystemAddressValid @ 0x14032CE60
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140213398 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiFillHyperPtes @ 0x140236274 (MiFillHyperPtes.c)
 *     MiMakeProtoLeafValid @ 0x140240C38 (MiMakeProtoLeafValid.c)
 *     MiLockPagedAddress @ 0x140245DF4 (MiLockPagedAddress.c)
 *     MiSoftFaultMappedView @ 0x140270A00 (MiSoftFaultMappedView.c)
 *     MiCopyToUserVa @ 0x14028DF40 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14028E238 (MiSplitPrivatePage.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MiCaptureDeleteHierarchy @ 0x14032CB70 (MiCaptureDeleteHierarchy.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14032EA60 (MiProtectPrivateMemory.c)
 *     MiSetReadOnlyOnSectionView @ 0x14033A030 (MiSetReadOnlyOnSectionView.c)
 *     MiLockPageTableRange @ 0x140386DC4 (MiLockPageTableRange.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403D5614 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140593E88 (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x1405941C0 (MiVadRangeIsIoSpace.c)
 *     MiCommitHotPatchTable @ 0x1405A3418 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405A3818 (MiPrepareImagePagesForHotPatch.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1405A6840 (MiWorkingSetInfoCheckPageTable.c)
 *     MiAddPagesToEnclave @ 0x1405A7D28 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405A8748 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1405A9744 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1405AA07C (MiWriteEnclavePte.c)
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
 *     MiUpdateForkMaps @ 0x1405BBD5C (MiUpdateForkMaps.c)
 *     MiMapUserLargePages @ 0x1405C2A4C (MiMapUserLargePages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiPerformSafePdeWrite @ 0x14025D6C0 (MiPerformSafePdeWrite.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MmIsAddressValidEx @ 0x14028FBF0 (MmIsAddressValidEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x14031D9B0 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x14058DCA8 (MiFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiMakeSystemAddressValid(ULONG_PTR a1, __int64 a2, int a3, __int64 a4, char a5)
{
  ULONG_PTR BugCheckParameter4; // rdi
  _KPROCESS *Process; // r13
  char *AnyMultiplexedVm; // r15
  int v9; // r14d
  unsigned __int64 v10; // rbx
  BOOL v11; // r12d
  int v12; // esi
  int v13; // eax
  unsigned __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 i; // rbp
  unsigned __int64 v19; // rdi
  signed __int64 v20; // r8
  bool v21; // zf
  int v22; // eax
  ULONG_PTR v23; // rbp
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  volatile LONG *SharedVm; // rdi
  unsigned __int64 v29; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v30; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v31; // [rsp+40h] [rbp-C8h]
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v33; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v34; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v35; // [rsp+60h] [rbp-A8h]
  __int64 v36; // [rsp+68h] [rbp-A0h]
  _BYTE v37[32]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v38; // [rsp+90h] [rbp-78h]
  __int128 v39; // [rsp+A0h] [rbp-68h]
  __int128 v40; // [rsp+B0h] [rbp-58h]
  __int128 v41; // [rsp+C0h] [rbp-48h]
  unsigned __int8 v44; // [rsp+128h] [rbp+20h]
  int v45; // [rsp+130h] [rbp+28h]

  v44 = a4;
  BugCheckParameter4 = a1;
  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  BugCheckParameter3 = (ULONG_PTR)Process;
  if ( (a5 & 4) != 0 )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  else
    AnyMultiplexedVm = (char *)&Process[1].ActiveProcessors.StaticBitmap[26];
  v9 = a5 & 8;
  DWORD2(v38) = a3;
  v45 = v9;
  v37[0] = (v9 != 0) + 7;
  v10 = (__int64)(BugCheckParameter4 << 25) >> 16;
  v31 = v10;
  v11 = v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL;
  v12 = a5 & 1;
  do
  {
    if ( v12 )
    {
      if ( MmIsAddressValidEx(BugCheckParameter4) )
        return 0LL;
    }
    else
    {
      if ( v11 )
      {
        v13 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v10, 0);
        if ( v13 )
        {
          if ( v13 == 1 )
            return 0LL;
          v24 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          while ( v13 != 1LL )
            v24 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v24);
        }
      }
      v30 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v33 = v30;
      v34 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v35 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v36 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v15 = 0xFFFFF6FB7DBEDF68uLL;
      MiLockPageTableInternal((__int64)AnyMultiplexedVm, 0xFFFFF6FB7DBEDF68uLL, 0LL, a4);
      for ( i = 2LL; ; --i )
      {
        v19 = *(&v33 + i);
        v20 = *(_QWORD *)v19;
        if ( v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          v16 = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(v16 + 912) != 1 && (v20 & 1) != 0 && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
          {
            v16 = (__int64)KeGetCurrentThread()->ApcState.Process;
            v25 = *(_QWORD *)(v16 + 1928);
            if ( v25 )
            {
              v26 = *(_QWORD *)(v25 + 8 * ((v19 >> 3) & 0x1FF));
              v27 = v20 | 0x20;
              v16 = (unsigned __int8)v26;
              LOBYTE(v16) = v26 & 0x20;
              if ( (v26 & 0x20) == 0 )
                v27 = *(_QWORD *)v19;
              v20 = v27;
              if ( (v26 & 0x42) != 0 )
                v20 = v27 | 0x42;
            }
          }
        }
        if ( (v20 & 0x81) != 1 )
          break;
        if ( (v20 & 0x20) == 0 )
          MiPerformSafePdeWrite(v16, (volatile signed __int64 *)*(&v33 + i), v20, 1);
        if ( v19 != v15 )
        {
          MiLockPageTableInternal((__int64)AnyMultiplexedVm, v19, 0LL, v17);
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v15);
          v15 = v19;
        }
        if ( !i )
          break;
      }
      v21 = v15 == v30;
      v10 = v31;
      v9 = v45;
      v29 = v15;
      Process = (_KPROCESS *)BugCheckParameter3;
      if ( v21 )
        return 0LL;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v29);
      BugCheckParameter4 = a1;
    }
    if ( a2 )
      MiFlushTbList(a2);
    if ( v12 )
      MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v44);
    else
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v44);
    v22 = MmAccessFault(2uLL, BugCheckParameter4, 0, (ULONG_PTR)&v37[1]);
    v23 = v22;
    if ( v22 < 0 && !v9 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v23, (ULONG_PTR)Process, BugCheckParameter4);
    }
    if ( v12 )
    {
      SharedVm = (volatile LONG *)MiGetSharedVm((__int64)AnyMultiplexedVm);
      ExAcquireSpinLockExclusive(SharedVm);
      *((_DWORD *)SharedVm + 1) = 0;
      BugCheckParameter4 = a1;
    }
    else
    {
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    }
  }
  while ( !v9 || (v23 & 0x80000000) == 0LL );
  return (unsigned int)v23;
}
