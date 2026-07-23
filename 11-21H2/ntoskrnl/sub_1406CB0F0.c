/*
 * XREFs of sub_1406CB0F0 @ 0x1406CB0F0
 * Callers:
 *     sub_1406CB09C @ 0x1406CB09C (sub_1406CB09C.c)
 * Callees:
 *     sub_1402AC180 @ 0x1402AC180 (sub_1402AC180.c)
 */

__int64 __fastcall sub_1406CB0F0(unsigned int *a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  __int64 result; // rax

  v4 = dword_140C46C20;
  v5 = a3[11]
     + 37
     * (a3[10]
      + 37
      * (a3[9]
       + 37
       * (a3[8]
        + 37
        * (a3[7]
         + 37
         * (a3[6]
          + 37 * (a3[5] + 37 * (a3[4] + 37 * (a3[3] + 37 * (a3[2] + 37 * (a3[1] + 37 * (*a3 + 37 * dword_140C46C30)))))))))));
  v6 = sub_1402AC180(a3, 0xCuLL, (unsigned int)dword_140C46C30);
  *a1 = v5 % v4;
  a1[1] = HIWORD(v5) % v4;
  result = v6 / v4;
  a1[2] = v6 % v4;
  return result;
}
