/*
 * XREFs of MiInitSystem @ 0x140B44518
 * Callers:
 *     MmInitSystem @ 0x140B443B4 (MmInitSystem.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiLockPagableImageSection @ 0x14025AA70 (MiLockPagableImageSection.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiSetPageTablePfnBuddy @ 0x1402927AC (MiSetPageTablePfnBuddy.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     PsSetPagePriorityThread @ 0x1402C19D8 (PsSetPagePriorityThread.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     MiAcquireNonPagedResources @ 0x1402E45A4 (MiAcquireNonPagedResources.c)
 *     ExGenRandom @ 0x140317860 (ExGenRandom.c)
 *     ExInitializePagedHeaps @ 0x140388BA4 (ExInitializePagedHeaps.c)
 *     KeFlushCurrentTbOnly @ 0x14038CA20 (KeFlushCurrentTbOnly.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403AF1FC (MiInitializeWorkingSetManagerParameters.c)
 *     MiInitializeBootKernelShadowStacks @ 0x1403B61CC (MiInitializeBootKernelShadowStacks.c)
 *     MiSetSlabAllocatorPolicy @ 0x1403B6408 (MiSetSlabAllocatorPolicy.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     VslInitializeSecurePool @ 0x14054BCD0 (VslInitializeSecurePool.c)
 *     KdSetDbgPrintBufferSize @ 0x140568204 (KdSetDbgPrintBufferSize.c)
 *     MmLockPagableDataSection @ 0x1406AD5E0 (MmLockPagableDataSection.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407A9DB8 (MiInitializeSystemWorkingSetList.c)
 *     PsCreateSystemThread @ 0x1407B83E0 (PsCreateSystemThread.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x1407EB2C8 (MmConfigurePrefetchSeekThreshold.c)
 *     MiInitializeMemoryEvents @ 0x14081C068 (MiInitializeMemoryEvents.c)
 *     MiWriteProtectSystemImages @ 0x14081CF08 (MiWriteProtectSystemImages.c)
 *     MiGenerateSecureCookie @ 0x1408636F0 (MiGenerateSecureCookie.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1408656D4 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiInitializeBootProcess @ 0x140B43C94 (MiInitializeBootProcess.c)
 *     MiInitializeHotPatches @ 0x140B44AF8 (MiInitializeHotPatches.c)
 *     MiAddLoaderHalIoMappings @ 0x140B44B90 (MiAddLoaderHalIoMappings.c)
 *     MiAllocateDummyPage @ 0x140B44E78 (MiAllocateDummyPage.c)
 *     MiInitializeRetpoline @ 0x140B44F88 (MiInitializeRetpoline.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140B44FE4 (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140B45044 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiInitializeSystemSpaceMap @ 0x140B453A0 (MiInitializeSystemSpaceMap.c)
 *     MiCreateEnclaveRegions @ 0x140B45444 (MiCreateEnclaveRegions.c)
 *     MiInitializeApiSets @ 0x140B45520 (MiInitializeApiSets.c)
 *     MiInitializeCfg @ 0x140B455F8 (MiInitializeCfg.c)
 *     MiInitializeMirroring @ 0x140B45F30 (MiInitializeMirroring.c)
 *     MiInitializeDriverImages @ 0x140B460A0 (MiInitializeDriverImages.c)
 *     PsInitializeQuotaSystem @ 0x140B5479C (PsInitializeQuotaSystem.c)
 *     MiInitializeTbFlushing @ 0x140B5C038 (MiInitializeTbFlushing.c)
 *     MiUnlockBootPageSections @ 0x140B5EBFC (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140B5EC88 (MiEnablePagingTheExecutive.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B5EFB4 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiInitializeCacheFlushing @ 0x140B6A51C (MiInitializeCacheFlushing.c)
 *     MiInitializeSharedUserData @ 0x140B6BC64 (MiInitializeSharedUserData.c)
 *     MiSectionInitialization @ 0x140B70508 (MiSectionInitialization.c)
 *     MiInitializeRelocations @ 0x140B70C98 (MiInitializeRelocations.c)
 *     MiInitializeSessionIds @ 0x140B7356C (MiInitializeSessionIds.c)
 *     MiInitializeModifiedWriterParameters @ 0x140B7574C (MiInitializeModifiedWriterParameters.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B75990 (MiFlushStrongCodeDriverLoadFailures.c)
 */

char __fastcall MiInitSystem(int a1, __int64 a2)
{
  _KPROCESS *Process; // rbx
  ULONG_PTR v4; // rax
  unsigned int v5; // r14d
  PKSTART_ROUTINE *v6; // r15
  char *AnyMultiplexedVm; // rax
  unsigned int v9; // eax
  int v10; // edx
  __int64 v11; // rax
  ULONG_PTR v12; // rax
  HANDLE ThreadHandle; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v14[4]; // [rsp+48h] [rbp-40h] BYREF

  v14[0] = KeBalanceSetManager;
  v14[1] = KeSwapProcessOrStack;
  v14[2] = MiRebuildLargePagesThread;
  v14[3] = MiZeroPageThread;
  ThreadHandle = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      MiSetPageTablePfnBuddy(48 * (Process->DirectoryTableBase >> 12) - 0x220000000000LL, (__int64)Process, 0);
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x400u);
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
      *(_DWORD *)(MmWriteableSharedUserData + 580) = 0x200000;
      if ( (MiFlags & 0x4000) != 0 && (int)VslInitializeSecurePool(qword_140C6A598) < 0 )
      {
        byte_140C67F42 = 100;
      }
      else if ( (unsigned int)MiSectionInitialization() )
      {
        if ( (int)MiInitializeCfg() < 0 )
        {
          byte_140C67F42 = 107;
        }
        else if ( (unsigned int)MiCreateEnclaveRegions(a2) )
        {
          qword_140C67248 = 0LL;
          MiInitializeSessionIds();
          v4 = MiReservePtes((__int64)&qword_140C69940, 4u);
          if ( v4 )
          {
            qword_140C696E8 = v4;
            MiInitializeCacheFlushing();
            if ( MiInitializeMemoryEvents(MiSystemPartition) )
            {
              if ( (int)MiAcquireNonPagedResources((unsigned __int64)MiSystemPartition, 0x20uLL, 0LL, 6u) < 0 )
              {
                byte_140C67F42 = 0x80;
              }
              else
              {
                dword_140C6B444 |= 4u;
                MiInitializeModifiedWriterParameters();
                MiComputeMemoryNodeProcessorAssignments();
                LOWORD(stru_140C672E8.Header.Lock) = 0;
                qword_140C69808 = (__int64)&qword_140C69800;
                qword_140C69800 = &qword_140C69800;
                stru_140C672E8.Header.Size = 6;
                stru_140C672E8.Header.WaitListHead.Blink = &stru_140C672E8.Header.WaitListHead;
                stru_140C672E8.Header.WaitListHead.Flink = &stru_140C672E8.Header.WaitListHead;
                MxDeferredBootAddMemoryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))MiHotAddBootDeferredDescriptors;
                stru_140C672E8.Header.SignalState = 0;
                MxDeferredBootAddMemoryWorkItem.Parameter = 0LL;
                MxDeferredBootAddMemoryWorkItem.List.Flink = 0LL;
                ExQueueWorkItem(&MxDeferredBootAddMemoryWorkItem, NormalWorkQueue);
                v5 = 0;
                v6 = (PKSTART_ROUTINE *)v14;
                do
                {
                  if ( PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *v6, MiSystemPartition) < 0 )
                  {
                    byte_140C67F42 = -120;
                    return 0;
                  }
                  ObCloseHandle(ThreadHandle, 0);
                  ++v5;
                  ++v6;
                }
                while ( v5 < 4 );
                if ( (unsigned int)MiInitializeMirroring() )
                {
                  qword_140C659E0 = 0LL;
                  MiWriteProtectSystemImages();
                  _InterlockedDecrement(&dword_140C697C8);
                  if ( (int)MiInitializeApiSets(a2) < 0 )
                  {
                    byte_140C67F42 = -112;
                  }
                  else
                  {
                    if ( (unsigned int)MiInitializeHotPatches(a2, 1LL) )
                      return 1;
                    byte_140C67F42 = -108;
                  }
                }
                else
                {
                  byte_140C67F42 = -117;
                }
              }
            }
            else
            {
              byte_140C67F42 = 123;
            }
          }
          else
          {
            byte_140C67F42 = 116;
          }
        }
        else
        {
          byte_140C67F42 = 32;
        }
      }
      else
      {
        byte_140C67F42 = 104;
      }
      return 0;
    }
    if ( a1 == 2 )
    {
      qword_140C69808 = (__int64)&qword_140C69800;
      qword_140C69800 = &qword_140C69800;
      MiUnlockBootPageSections();
      MiFlushStrongCodeDriverLoadFailures();
      MiFlushDeferredRetpolineImageLoadEvents();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    qword_140C67EB0 = MiReservePtes((__int64)&qword_140C69940, 0x20u);
    _InterlockedIncrement(&dword_140C697C8);
    if ( (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)MiSystemPartition) )
    {
      if ( (int)ExInitializePagedHeaps() < 0 )
      {
        byte_140C67F42 = 52;
      }
      else
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        if ( (unsigned int)MiInitializeSystemWorkingSetList(
                             (__int64)MiSystemPartition,
                             (__int64)AnyMultiplexedVm,
                             4,
                             0LL) )
        {
          if ( (unsigned __int8)PsInitializeQuotaSystem(0LL) )
          {
            qword_140C65A40 = MiGenerateSecureCookie();
            Seed = 305419896;
            if ( (unsigned int)MiInitializeSharedUserData() )
            {
              if ( (int)MiInitializeBootProcess() < 0 )
              {
                byte_140C67F42 = 68;
              }
              else
              {
                KeFlushCurrentTbOnly(3u);
                MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
                MiAddLoaderHalIoMappings(qword_140C6A5B8, qword_140C6A5B8 + 0x7FFFFFFFFFLL);
                if ( KdPrintBufferAllocateSize )
                  KdSetDbgPrintBufferSize(KdPrintBufferAllocateSize);
                MiSetSlabAllocatorPolicy((__int64)MiSystemPartition);
                if ( (unsigned int)MiInitializeHotPatches(a2, 0LL) )
                {
                  if ( (int)MiInitializeRetpoline() < 0 )
                  {
                    byte_140C67F42 = 75;
                  }
                  else
                  {
                    v9 = ExGenRandom(1);
                    qword_140C66CF0 = v9;
                    dword_140C66CF8 = 8 * (v9 & 3) + 8;
                    qword_140D81828 = KeQueryPerformanceCounter(0LL).QuadPart;
                    if ( (unsigned int)dword_140D1D228 > 2 )
                      dword_140D1D228 = 0;
                    if ( (MiFlags & 4) != 0 && (int)MiCreateSlabAllocationsFromKernelHal() < 0 )
                    {
                      byte_140C67F42 = 80;
                    }
                    else if ( (int)MiCreateSlabAllocationsFromLoaderBlock(a2) < 0 )
                    {
                      byte_140C67F42 = 84;
                    }
                    else
                    {
                      MiInitializeSystemSpaceMap();
                      qword_140C65730 = 0LL;
                      qword_140C67268 = 0LL;
                      qword_140C67278 = 0LL;
                      qword_140D81830 = KeQueryPerformanceCounter(0LL).QuadPart;
                      MiInitializeBootKernelShadowStacks(a2);
                      if ( (unsigned int)MiInitializeDriverImages(a2) )
                      {
                        qword_140D81838 = KeQueryPerformanceCounter(0LL).QuadPart;
                        v10 = -1;
                        v11 = MmWriteableSharedUserData;
                        if ( qword_140C6F6D0 <= 0xFFFFFFFF )
                          v10 = qword_140C6F6D0;
                        *(_DWORD *)(MmWriteableSharedUserData + 744) = v10;
                        *(_DWORD *)(v11 + 580) = 0;
                        LODWORD(MiFlags) = MiFlags | 0x800000;
                        qword_140C6B878[0] = 0LL;
                        MmConfigurePrefetchSeekThreshold(32);
                        PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
                        MiEnablePagingTheExecutive();
                        ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
                        MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
                        qword_140C69700 = MiAllocateDummyPage();
                        qword_140C69708 = 0xAAAAAAAAAAAAAAABuLL * ((qword_140C69700 + 0x220000000000LL) >> 4);
                        v12 = MiReservePtes((__int64)&qword_140C69940, 1u);
                        MmBadPointer = (PVOID)v12;
                        if ( v12 )
                        {
                          MmBadPointer = (PVOID)((__int64)(v12 << 25) >> 16);
                          if ( (unsigned int)MiInitializeRelocations() )
                          {
                            qword_140D81848 = KeQueryPerformanceCounter(0LL).QuadPart;
                            MiInitializeTbFlushing();
                            qword_140D81850 = KeQueryPerformanceCounter(0LL).QuadPart;
                            qword_140C69908 = (__int64)&qword_140C69900;
                            qword_140C69900 = (__int64)&qword_140C69900;
                            return 1;
                          }
                          byte_140C67F42 = 96;
                        }
                        else
                        {
                          byte_140C67F42 = 91;
                        }
                      }
                      else
                      {
                        byte_140C67F42 = 88;
                      }
                    }
                  }
                }
                else
                {
                  byte_140C67F42 = 72;
                }
              }
            }
            else
            {
              byte_140C67F42 = 64;
            }
          }
          else
          {
            byte_140C67F42 = 59;
          }
        }
        else
        {
          byte_140C67F42 = 56;
        }
      }
    }
    else
    {
      byte_140C67F42 = 48;
    }
  }
  return 0;
}
