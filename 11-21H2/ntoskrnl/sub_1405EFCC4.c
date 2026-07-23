/*
 * XREFs of sub_1405EFCC4 @ 0x1405EFCC4
 * Callers:
 *     sub_1405F0224 @ 0x1405F0224 (sub_1405F0224.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1405EFCC4(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // r10
  unsigned __int64 result; // rax

  v4 = a1 + 512;
  while ( a1 < v4 )
  {
    *a1 = a3;
    result = a3 >> 4;
    a3 = (a3 >> 4) ^ *(_QWORD *)(a4 + 8 * (a3 & 0xF));
    ++a1;
  }
  return result;
}
