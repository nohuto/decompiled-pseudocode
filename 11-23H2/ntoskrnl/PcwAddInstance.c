/*
 * XREFs of PcwAddInstance @ 0x14086D920
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x14086DDE0 (ExProcessorCounterSetCallback.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14093ED4C (FsRtlAddDiskIOCounterInstance.c)
 *     FsRtlDiskIOCounterSetCallback @ 0x14093EE20 (FsRtlDiskIOCounterSetCallback.c)
 *     KiSynchCounterSetCallback @ 0x140974080 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1409741A0 (KiSynchNumaCounterSetCallback.c)
 *     PoThermalCounterSetCallback @ 0x14098ADE0 (PoThermalCounterSetCallback.c)
 *     ExProcessCounterSetCallback @ 0x1409F6060 (ExProcessCounterSetCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A76B80 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402FA6D0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA700 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExpPcwDisabledStatus @ 0x140A01A48 (ExpPcwDisabledStatus.c)
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
