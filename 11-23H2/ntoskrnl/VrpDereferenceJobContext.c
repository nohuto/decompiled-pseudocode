/*
 * XREFs of VrpDereferenceJobContext @ 0x1407E6A1C
 * Callers:
 *     VrpOriginalKeyNameParameterCleanup @ 0x14036A9C0 (VrpOriginalKeyNameParameterCleanup.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall VrpDereferenceJobContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
