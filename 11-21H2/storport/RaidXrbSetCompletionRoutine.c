/*
 * XREFs of RaidXrbSetCompletionRoutine @ 0x1C001592C
 * Callers:
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0085B00 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0085E24 (RaidAdapterFreeMiniportDumpInfo.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C0086400 (StorGetNVMeIdentifyInfo.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0086F64 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0089714 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C008BED4 (RaidAdapterDiagnosticIoctl.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidXrbSetCompletionRoutine(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 656) = a2;
}
