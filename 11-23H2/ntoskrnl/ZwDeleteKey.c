/*
 * XREFs of ZwDeleteKey @ 0x14041CC30
 * Callers:
 *     BiZwDeleteKey @ 0x140373E50 (BiZwDeleteKey.c)
 *     DifZwDeleteKeyWrapper @ 0x1405EFBD0 (DifZwDeleteKeyWrapper.c)
 *     VrpDestroyNamespaceNode @ 0x14077B7F4 (VrpDestroyNamespaceNode.c)
 *     ExpSetPendingUILanguage @ 0x1407FC5B8 (ExpSetPendingUILanguage.c)
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140863088 (_RegRtlDeleteKeyTransacted.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408657F8 (IopCopyBootLogRegistryToFile.c)
 *     NtEnableLastKnownGood @ 0x1408840B0 (NtEnableLastKnownGood.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E4CB4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmDeleteKeyRecursive @ 0x140A10068 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140A10F4C (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140A2AB8C (CmpDoReDoRecord.c)
 *     PiLastGoodCopyKeyContents @ 0x140B6E120 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x140B75414 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B94930 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
