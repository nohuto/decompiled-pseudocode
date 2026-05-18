/*
 * XREFs of sub_180026DBC @ 0x180026DBC
 * Callers:
 *     sub_180015D28 @ 0x180015D28 (sub_180015D28.c)
 *     sub_18002634C @ 0x18002634C (sub_18002634C.c)
 *     sub_1800C30C0 @ 0x1800C30C0 (sub_1800C30C0.c)
 *     sub_1800C3268 @ 0x1800C3268 (sub_1800C3268.c)
 *     sub_1800C3410 @ 0x1800C3410 (sub_1800C3410.c)
 *     sub_1800C35B8 @ 0x1800C35B8 (sub_1800C35B8.c)
 *     sub_1800C3760 @ 0x1800C3760 (sub_1800C3760.c)
 * Callees:
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18003475C @ 0x18003475C (sub_18003475C.c)
 */

__int64 __fastcall sub_180026DBC(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx

  v3 = sub_180026618(a1);
  v4 = sub_18003475C(v3);
  sub_18002A0C4(v4, v5);
  return a2;
}
