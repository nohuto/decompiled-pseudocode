/*
 * XREFs of ApiSetReleaseSchema @ 0x140614720
 * Callers:
 *     PspSiloLoadApiSets @ 0x1409ADAA0 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x140A09E6C (ApiSetLoadSchemaWithExtensions.c)
 *     ApiSetpLoadSchemaExtension @ 0x140A0A070 (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

char __fastcall ApiSetReleaseSchema(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return 1;
}
