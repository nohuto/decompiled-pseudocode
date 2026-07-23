/*
 * XREFs of PsDetachSiloFromCurrentThread @ 0x14031CF20
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140305590 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x14035B110 (IopLoadDriverImage.c)
 *     MmUnloadSystemImage @ 0x140696020 (MmUnloadSystemImage.c)
 *     ObpIncrementHandleCountEx @ 0x1406E7090 (ObpIncrementHandleCountEx.c)
 *     ObpCloseHandle @ 0x1406E76B0 (ObpCloseHandle.c)
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 *     ExpWnfLookupPermanentName @ 0x140710B7C (ExpWnfLookupPermanentName.c)
 *     ObpDecrementHandleCount @ 0x140740144 (ObpDecrementHandleCount.c)
 *     EtwpLogger @ 0x1407732F0 (EtwpLogger.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14077D394 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DB48 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwpEnableGuid @ 0x14077FEF0 (EtwpEnableGuid.c)
 *     SepRmCommandServerThread @ 0x14082BA80 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14082BCDC (SepRmLsaConnectRequest.c)
 *     EtwpInitializeSiloState @ 0x14083B664 (EtwpInitializeSiloState.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EE98 (ExpRefreshTimeZoneInformation.c)
 *     IopUnloadDriver @ 0x140857B78 (IopUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14085B8D8 (EtwpUpdateFileInfoDriverRegistration.c)
 *     DbgkInitializeServerSilo @ 0x140936E80 (DbgkInitializeServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ACFB8 (PspDeleteExternalServerSiloState.c)
 *     PspShutdownCsrProcess @ 0x1409AD4A8 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1409AD7E0 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeIsStateSeparationEnabled @ 0x1409AD844 (PspSiloInitializeIsStateSeparationEnabled.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD98C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1409ADAB8 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1409ADBF0 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x1409C8FF0 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1409D0110 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F5874 (EtwpTrackGuidEntryRegistrations.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8348 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1409F8420 (ExpTimeZoneWork.c)
 *     ExpNlsInitSiloState @ 0x1409FB7EC (ExpNlsInitSiloState.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140A7271C (VrpHandleIoctlGetVirtualRootKey.c)
 *     ObCreateSiloRootDirectory @ 0x140A73DB0 (ObCreateSiloRootDirectory.c)
 *     IovpUnloadDriver @ 0x140AC1EA8 (IovpUnloadDriver.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PsDetachSiloFromCurrentThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  result[1].WaitBlock[3].WaitListEntry.Blink = a1;
  return result;
}
