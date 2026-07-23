/*
 * XREFs of RtlFreeOemString @ 0x1408621F0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x140AAECC0 (ExFreePool.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    ExFreePool(Buffer);
}
