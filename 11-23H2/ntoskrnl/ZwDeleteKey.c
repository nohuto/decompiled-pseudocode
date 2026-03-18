/*
 * XREFs of ZwDeleteKey @ 0x14041C8A0
 * Callers:
 *     BiZwDeleteKey @ 0x140373CB0 (BiZwDeleteKey.c)
 *     DifZwDeleteKeyWrapper @ 0x1405EF660 (DifZwDeleteKeyWrapper.c)
 *     VrpDestroyNamespaceNode @ 0x14077B604 (VrpDestroyNamespaceNode.c)
 *     ExpSetPendingUILanguage @ 0x1407FC2E8 (ExpSetPendingUILanguage.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140862E48 (_RegRtlDeleteKeyTransacted.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408655B8 (IopCopyBootLogRegistryToFile.c)
 *     NtEnableLastKnownGood @ 0x140883E70 (NtEnableLastKnownGood.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E4A24 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmDeleteKeyRecursive @ 0x140A0FDB8 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140A10C9C (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140A2A8DC (CmpDoReDoRecord.c)
 *     PiLastGoodCopyKeyContents @ 0x140B6E120 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x140B75414 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B94930 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1);
}
