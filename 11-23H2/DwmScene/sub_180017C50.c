/*
 * XREFs of sub_180017C50 @ 0x180017C50
 * Callers:
 *     sub_180015D28 @ 0x180015D28 (sub_180015D28.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 *     sub_1800C30C0 @ 0x1800C30C0 (sub_1800C30C0.c)
 *     sub_1800C3268 @ 0x1800C3268 (sub_1800C3268.c)
 *     sub_1800C3410 @ 0x1800C3410 (sub_1800C3410.c)
 *     sub_1800C35B8 @ 0x1800C35B8 (sub_1800C35B8.c)
 *     sub_1800C3760 @ 0x1800C3760 (sub_1800C3760.c)
 * Callees:
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 */

__int64 __fastcall sub_180017C50(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
  {
    if ( *(_BYTE *)(a1 + 8) )
      sub_18002A62C(*(_QWORD *)a1);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 8);
    *(_QWORD *)a2 = 0LL;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a1;
}
