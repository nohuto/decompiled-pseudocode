/*
 * XREFs of RtlFreeAnsiString @ 0x140756A30
 * Callers:
 *     EtwpWriteProcessEvent @ 0x1407552CC (EtwpWriteProcessEvent.c)
 *     MmGetSystemRoutineAddress @ 0x140756A60 (MmGetSystemRoutineAddress.c)
 *     EtwpTraceProcessRundown @ 0x140820AB4 (EtwpTraceProcessRundown.c)
 *     KsepGetModuleInfoByName @ 0x1409777A4 (KsepGetModuleInfoByName.c)
 *     MiLoadUserSymbols @ 0x140A30DA4 (MiLoadUserSymbols.c)
 *     ViThunkHookExportAddress @ 0x140ADBC68 (ViThunkHookExportAddress.c)
 * Callees:
 *     ExFreePool @ 0x140AAECC0 (ExFreePool.c)
 */

void __stdcall RtlFreeAnsiString(PANSI_STRING AnsiString)
{
  char *Buffer; // rcx

  Buffer = AnsiString->Buffer;
  if ( Buffer )
  {
    ExFreePool(Buffer);
    *AnsiString = 0LL;
  }
}
