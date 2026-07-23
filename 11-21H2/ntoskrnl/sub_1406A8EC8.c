/*
 * XREFs of sub_1406A8EC8 @ 0x1406A8EC8
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall sub_1406A8EC8(PVOID Object, __int64 a2)
{
  sub_140231240((__int64)Object, a2);
  return ObfDereferenceObject(Object);
}
