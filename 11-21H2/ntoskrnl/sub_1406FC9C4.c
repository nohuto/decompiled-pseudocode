/*
 * XREFs of sub_1406FC9C4 @ 0x1406FC9C4
 * Callers:
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_1406BF9AC @ 0x1406BF9AC (sub_1406BF9AC.c)
 *     sub_1406FC8B0 @ 0x1406FC8B0 (sub_1406FC8B0.c)
 *     sub_140756F2C @ 0x140756F2C (sub_140756F2C.c)
 *     sub_1407E6C40 @ 0x1407E6C40 (sub_1407E6C40.c)
 *     sub_14096CE14 @ 0x14096CE14 (sub_14096CE14.c)
 *     sub_140978F40 @ 0x140978F40 (sub_140978F40.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1406FC9C4(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rax

  v2 = 0x7FFFFFFEFFFFLL;
  if ( a2 )
  {
    v4 = 0xFFFFFFFFFFFFFFFFuLL >> a2;
    if ( 0xFFFFFFFFFFFFFFFFuLL >> a2 > 0x7FFFFFFEFFFFLL )
      v4 = 0x7FFFFFFEFFFFLL;
    v2 = v4;
  }
  result = *(_QWORD *)(a1 + 1496) - 1LL;
  if ( v2 <= result )
    return v2;
  return result;
}
