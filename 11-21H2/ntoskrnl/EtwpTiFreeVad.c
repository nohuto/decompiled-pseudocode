/*
 * XREFs of EtwpTiFreeVad @ 0x1406D98D8
 * Callers:
 *     EtwpTiVadQueryEventWriteCallback @ 0x1406D97E0 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTiFreeVad(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 56);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
