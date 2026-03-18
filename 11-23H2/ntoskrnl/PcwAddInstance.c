/*
 * XREFs of PcwAddInstance @ 0x14086D6E0
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x14086DBA0 (ExProcessorCounterSetCallback.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14093EB4C (FsRtlAddDiskIOCounterInstance.c)
 *     FsRtlDiskIOCounterSetCallback @ 0x14093EC20 (FsRtlDiskIOCounterSetCallback.c)
 *     KiSynchCounterSetCallback @ 0x140973E80 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140973FA0 (KiSynchNumaCounterSetCallback.c)
 *     PoThermalCounterSetCallback @ 0x14098ABE0 (PoThermalCounterSetCallback.c)
 *     ExProcessCounterSetCallback @ 0x1409F5DD0 (ExProcessCounterSetCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A768D0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA470 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     ExpPcwDisabledStatus @ 0x140A017B8 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwAddInstance(PPCW_BUFFER Buffer, PCUNICODE_STRING Name, ULONG Id, ULONG Count, PPCW_DATA Data)
{
  unsigned __int64 ExtensionTable; // rax
  NTSTATUS v10; // ebx

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( !ExtensionTable )
    return ExpPcwDisabledStatus();
  v10 = (*(__int64 (__fastcall **)(PPCW_BUFFER, PCUNICODE_STRING, _QWORD, _QWORD, PPCW_DATA))(ExtensionTable + 32))(
          Buffer,
          Name,
          Id,
          Count,
          Data);
  ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  return v10;
}
