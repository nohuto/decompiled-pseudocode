/*
 * XREFs of sub_1404294A0 @ 0x1404294A0
 * Callers:
 *     sub_140577C84 @ 0x140577C84 (sub_140577C84.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1404294A0(unsigned int a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)a2;
  __writemsr(a1, a2);
  return result;
}
