/*
 * XREFs of ZwDeleteKey @ 0x14041C1E0
 * Callers:
 *     BiZwDeleteKey @ 0x140374304 (BiZwDeleteKey.c)
 *     DifZwDeleteKeyWrapper @ 0x1405EF6F0 (DifZwDeleteKeyWrapper.c)
 *     VrpDestroyNamespaceNode @ 0x14077BB14 (VrpDestroyNamespaceNode.c)
 *     ExpSetPendingUILanguage @ 0x1407FC998 (ExpSetPendingUILanguage.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140863068 (_RegRtlDeleteKeyTransacted.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408659D8 (IopCopyBootLogRegistryToFile.c)
 *     NtEnableLastKnownGood @ 0x140884340 (NtEnableLastKnownGood.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E4AD4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmDeleteKeyRecursive @ 0x140A0FE68 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140A10D4C (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140A2A98C (CmpDoReDoRecord.c)
 *     PiLastGoodCopyKeyContents @ 0x140B6F58C (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x140B76340 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B95930 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
