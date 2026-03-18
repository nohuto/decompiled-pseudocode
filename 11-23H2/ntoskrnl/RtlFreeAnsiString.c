/*
 * XREFs of RtlFreeAnsiString @ 0x140756840
 * Callers:
 *     EtwpWriteProcessEvent @ 0x1407550DC (EtwpWriteProcessEvent.c)
 *     MmGetSystemRoutineAddress @ 0x140756870 (MmGetSystemRoutineAddress.c)
 *     EtwpTraceProcessRundown @ 0x1408207B4 (EtwpTraceProcessRundown.c)
 *     KsepGetModuleInfoByName @ 0x1409775A4 (KsepGetModuleInfoByName.c)
 *     MiLoadUserSymbols @ 0x140A30AF4 (MiLoadUserSymbols.c)
 *     ViThunkHookExportAddress @ 0x140ADBC78 (ViThunkHookExportAddress.c)
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
