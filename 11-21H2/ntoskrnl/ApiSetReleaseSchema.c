/*
 * XREFs of ApiSetReleaseSchema @ 0x140647164
 * Callers:
 *     PspSiloLoadApiSets @ 0x1409ACAD0 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x140A0A644 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 */

char __fastcall ApiSetReleaseSchema(ULONG_PTR a1)
{
  ExFreeHeapPool(a1);
  return 1;
}
