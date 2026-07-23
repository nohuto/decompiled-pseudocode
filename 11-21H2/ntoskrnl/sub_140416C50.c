/*
 * XREFs of sub_140416C50 @ 0x140416C50
 * Callers:
 *     sub_140411030 @ 0x140411030 (sub_140411030.c)
 *     sub_140411330 @ 0x140411330 (sub_140411330.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140416C50(_QWORD *a1, _QWORD *a2, int a3, int a4)
{
  int v4; // r8d
  __int64 result; // rax

  v4 = a3 + 1;
  do
  {
    *a2 ^= a4 & (*a2 ^ *a1);
    a2[1] ^= a4 & (a2[1] ^ a1[1]);
    result = a2[2] ^ a4 & (a2[2] ^ a1[2]);
    a2[2] = result;
    a1 += 3;
    a2 += 3;
    --v4;
  }
  while ( v4 );
  return result;
}
