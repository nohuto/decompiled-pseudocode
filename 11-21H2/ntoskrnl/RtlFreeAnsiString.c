/*
 * XREFs of RtlFreeAnsiString @ 0x14070AFC0
 * Callers:
 *     sub_14070AE08 @ 0x14070AE08 (sub_14070AE08.c)
 *     MmGetSystemRoutineAddress @ 0x140759130 (MmGetSystemRoutineAddress.c)
 *     sub_1408149AC @ 0x1408149AC (sub_1408149AC.c)
 *     sub_140964D68 @ 0x140964D68 (sub_140964D68.c)
 *     sub_14096CCF8 @ 0x14096CCF8 (sub_14096CCF8.c)
 *     sub_140A94030 @ 0x140A94030 (sub_140A94030.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall RtlFreeAnsiString(PANSI_STRING AnsiString)
{
  ULONG v1; // edx
  char *Buffer; // rcx

  Buffer = AnsiString->Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, v1);
    *AnsiString = 0LL;
  }
}
