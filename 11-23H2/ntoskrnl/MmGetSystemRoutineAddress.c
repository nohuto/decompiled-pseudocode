/*
 * XREFs of MmGetSystemRoutineAddress @ 0x140756870
 * Callers:
 *     HalMcFinishMicrocode @ 0x1403B0E04 (HalMcFinishMicrocode.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1403B0FC0 (HalpCmciLoadThresholdConfiguration.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x14051B5D0 (HalpMcEnumerateAndSetPatchConfig.c)
 *     HalpMcGetLoadConfiguration @ 0x14051B9E4 (HalpMcGetLoadConfiguration.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140246810 (KeDelayExecutionThread.c)
 *     MiMarkKernelCfgTarget @ 0x1402F7A50 (MiMarkKernelCfgTarget.c)
 *     RtlFindExportedRoutineByName @ 0x1406AD3F0 (RtlFindExportedRoutineByName.c)
 *     RtlFreeAnsiString @ 0x140756840 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140758680 (RtlUnicodeStringToAnsiString.c)
 */

PVOID __stdcall MmGetSystemRoutineAddress(PUNICODE_STRING SystemRoutineName)
{
  NTSTATUS i; // eax
  void *ExportedRoutineByName; // rbx
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  for ( i = RtlUnicodeStringToAnsiString(&DestinationString, SystemRoutineName, 1u);
        i < 0;
        i = RtlUnicodeStringToAnsiString(&DestinationString, SystemRoutineName, 1u) )
  {
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  ExportedRoutineByName = (void *)RtlFindExportedRoutineByName(PsNtosImageBase, DestinationString.Buffer);
  if ( !ExportedRoutineByName )
    ExportedRoutineByName = (void *)RtlFindExportedRoutineByName(PsHalImageBase, DestinationString.Buffer);
  RtlFreeAnsiString(&DestinationString);
  if ( ExportedRoutineByName && (int)MiMarkKernelCfgTarget() < 0 )
    return 0LL;
  return ExportedRoutineByName;
}
