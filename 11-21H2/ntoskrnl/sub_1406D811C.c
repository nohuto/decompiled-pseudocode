/*
 * XREFs of sub_1406D811C @ 0x1406D811C
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_140B27E7C @ 0x140B27E7C (sub_140B27E7C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406D811C(_QWORD *a1)
{
  __int64 result; // rax

  a1[55] = 0LL;
  a1[54] = 0LL;
  result = qword_140C5AE28;
  if ( qword_140C5AE28 )
  {
    result = qword_140C5AE28 + 784;
    a1[56] = qword_140C5AE28 + 784;
  }
  return result;
}
