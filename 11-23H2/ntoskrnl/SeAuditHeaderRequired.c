/*
 * XREFs of SeAuditHeaderRequired @ 0x1402AF8C0
 * Callers:
 *     ObpAllocateObject @ 0x14072FBF0 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140C37422 || byte_140C37423 || byte_140C3743A || byte_140C3743B);
}
