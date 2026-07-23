/*
 * XREFs of sub_14078F124 @ 0x14078F124
 * Callers:
 *     sub_140791640 @ 0x140791640 (sub_140791640.c)
 *     sub_1408433DC @ 0x1408433DC (sub_1408433DC.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140791084 @ 0x140791084 (sub_140791084.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 */

__int64 __fastcall sub_14078F124(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned __int16 v7; // cx
  unsigned __int16 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (sub_14079499C(a1, a2) & 0xF000) == 0x3000 )
  {
    v6 = sub_140791084(a1, v4, &v9, 2LL);
    v7 = v9;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    sub_14079499C(a1, v4);
    sub_1406E0C3C(1LL, (__int64)"SdbReadWORDTag");
    return a3;
  }
}
