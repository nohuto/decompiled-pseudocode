/*
 * XREFs of sub_1406BCC00 @ 0x1406BCC00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall sub_1406BCC00(__int64 a1, _DWORD *a2)
{
  *a2 = 0;
  return ObfDereferenceObject(a2);
}
