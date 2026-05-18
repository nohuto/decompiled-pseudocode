/*
 * XREFs of sub_18001FF9C @ 0x18001FF9C
 * Callers:
 *     sub_1800A8FEC @ 0x1800A8FEC (sub_1800A8FEC.c)
 *     sub_1800AB580 @ 0x1800AB580 (sub_1800AB580.c)
 *     sub_1800AC6B4 @ 0x1800AC6B4 (sub_1800AC6B4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001FF9C(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 i; // r8
  __int64 v4; // rax

  v2 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v2 < a2; i = 0x100000001B3LL * (v4 ^ i) )
  {
    v4 = *(unsigned __int8 *)(v2 + a1);
    ++v2;
  }
  return i;
}
