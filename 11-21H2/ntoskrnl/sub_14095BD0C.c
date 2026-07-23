/*
 * XREFs of sub_14095BD0C @ 0x14095BD0C
 * Callers:
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 * Callees:
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_14095B69C @ 0x14095B69C (sub_14095B69C.c)
 */

__int64 __fastcall sub_14095BD0C(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  char v4; // [rsp+70h] [rbp+8h] BYREF
  int v5; // [rsp+78h] [rbp+10h] BYREF
  int v6; // [rsp+80h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  v4 = 0;
  v6 = 1;
  result = sub_14077DA5C(
             *(__int64 *)&qword_140D00AC0,
             v1,
             1,
             0,
             0LL,
             (__int64)&qword_14000DFD8,
             (__int64)&v5,
             (__int64)&v4,
             1,
             (__int64)&v6,
             0);
  if ( (int)result >= 0 && v5 == 17 && v6 == 1 && v4 != -1 )
    return sub_14095B69C(a1, 0, 1);
  return result;
}
