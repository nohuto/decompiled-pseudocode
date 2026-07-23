/*
 * XREFs of SeAuditHeaderRequired @ 0x1402AFB50
 * Callers:
 *     ObpAllocateObject @ 0x14072FDE0 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140C37402 || byte_140C37403 || byte_140C3741A || byte_140C3741B);
}
