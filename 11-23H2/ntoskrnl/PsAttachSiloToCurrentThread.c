/*
 * XREFs of PsAttachSiloToCurrentThread @ 0x14031CCB0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x14035AF70 (IopLoadDriverImage.c)
 *     MmUnloadSystemImage @ 0x140696020 (MmUnloadSystemImage.c)
 *     ObpIncrementHandleCountEx @ 0x1406E7060 (ObpIncrementHandleCountEx.c)
 *     ObpCloseHandle @ 0x1406E7680 (ObpCloseHandle.c)
 *     MmLoadSystemImageEx @ 0x140703DC0 (MmLoadSystemImageEx.c)
 *     ExpWnfLookupPermanentName @ 0x14071096C (ExpWnfLookupPermanentName.c)
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     ObpDecrementHandleCount @ 0x14073FF54 (ObpDecrementHandleCount.c)
 *     PspExitThread @ 0x14076DA2C (PspExitThread.c)
 *     EtwpLogger @ 0x140773100 (EtwpLogger.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14077D1A4 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077D958 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwpEnableGuid @ 0x14077FD00 (EtwpEnableGuid.c)
 *     SepRmCommandServerThread @ 0x14082B780 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14082B9DC (SepRmLsaConnectRequest.c)
 *     EtwpInitializeSiloState @ 0x14083B364 (EtwpInitializeSiloState.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EB98 (ExpRefreshTimeZoneInformation.c)
 *     IopUnloadDriver @ 0x140857938 (IopUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14085B698 (EtwpUpdateFileInfoDriverRegistration.c)
 *     DbgkInitializeServerSilo @ 0x140936C80 (DbgkInitializeServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ACDB8 (PspDeleteExternalServerSiloState.c)
 *     PspShutdownCsrProcess @ 0x1409AD2A8 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1409AD5E0 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeIsStateSeparationEnabled @ 0x1409AD644 (PspSiloInitializeIsStateSeparationEnabled.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD78C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1409AD8B8 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1409AD9F0 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x1409C8DF0 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1409CFF10 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F55E4 (EtwpTrackGuidEntryRegistrations.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F80B8 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1409F8190 (ExpTimeZoneWork.c)
 *     ExpNlsInitSiloState @ 0x1409FB55C (ExpNlsInitSiloState.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140A7246C (VrpHandleIoctlGetVirtualRootKey.c)
 *     ObCreateSiloRootDirectory @ 0x140A73B00 (ObCreateSiloRootDirectory.c)
 *     IovpUnloadDriver @ 0x140AC1EB8 (IovpUnloadDriver.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall PsAttachSiloToCurrentThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = a1;
  return result;
}
