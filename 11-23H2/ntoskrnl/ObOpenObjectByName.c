/*
 * XREFs of ObOpenObjectByName @ 0x14068C9D0
 * Callers:
 *     NtOpenMutant @ 0x14068A010 (NtOpenMutant.c)
 *     IopReferenceDriverObjectByName @ 0x14068C668 (IopReferenceDriverObjectByName.c)
 *     NtOpenSemaphore @ 0x14068C730 (NtOpenSemaphore.c)
 *     NtOpenEvent @ 0x14068C7E0 (NtOpenEvent.c)
 *     NtOpenSection @ 0x14068C8B0 (NtOpenSection.c)
 *     NtOpenDirectoryObject @ 0x14068C940 (NtOpenDirectoryObject.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     IopLoadDriver @ 0x1407947C8 (IopLoadDriver.c)
 *     ExCreateCallback @ 0x1407DC600 (ExCreateCallback.c)
 *     NtOpenSession @ 0x1407E33E0 (NtOpenSession.c)
 *     NtOpenJobObject @ 0x1407EA2C0 (NtOpenJobObject.c)
 *     IopUnloadDriver @ 0x140857B78 (IopUnloadDriver.c)
 *     CmpCreatePredefined @ 0x14085D618 (CmpCreatePredefined.c)
 *     NtOpenPartition @ 0x140861BD0 (NtOpenPartition.c)
 *     NtOpenIoCompletion @ 0x140947E30 (NtOpenIoCompletion.c)
 *     NtOpenCpuPartition @ 0x1409B0720 (NtOpenCpuPartition.c)
 *     NtOpenTimer @ 0x1409FB8F0 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x140A04C20 (NtOpenKeyedEvent.c)
 *     NtOpenRegistryTransaction @ 0x140A0DB90 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x140A2AE84 (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x140B3626C (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14022E310 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1406ED010 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v12; // r8

  CurrentSilo = PsGetCurrentSilo();
  LOBYTE(v12) = a3;
  return ObOpenObjectByNameEx(a1, a2, v12, a4, a5, a6, CurrentSilo, a7);
}
