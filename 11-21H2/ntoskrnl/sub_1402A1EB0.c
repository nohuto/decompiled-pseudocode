/*
 * XREFs of sub_1402A1EB0 @ 0x1402A1EB0
 * Callers:
 *     sub_1402A1E18 @ 0x1402A1E18 (sub_1402A1E18.c)
 *     sub_140828134 @ 0x140828134 (sub_140828134.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1402A1EB0(unsigned int *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  int v4; // r9d

  for ( result = 0LL; result < a3; *a1 = (1025 * (*a1 + v4)) ^ ((1025 * (*a1 + v4)) >> 6) )
  {
    v4 = *(unsigned __int8 *)(result + a2);
    ++result;
  }
  return result;
}
