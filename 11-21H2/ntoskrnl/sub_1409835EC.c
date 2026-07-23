/*
 * XREFs of sub_1409835EC @ 0x1409835EC
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_14098325C @ 0x14098325C (sub_14098325C.c)
 * Callees:
 *     sub_140213FA8 @ 0x140213FA8 (sub_140213FA8.c)
 *     sub_14027FCC4 @ 0x14027FCC4 (sub_14027FCC4.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403A111C @ 0x1403A111C (sub_1403A111C.c)
 *     sub_1406EBA70 @ 0x1406EBA70 (sub_1406EBA70.c)
 */

__int64 __fastcall sub_1409835EC(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi

  v4 = sub_14027FCC4(a1);
  v5 = sub_140317A10(v4);
  v6 = ((unsigned int)dword_140C4F404 + 511LL + a2) & 0xFFFFFFFFFFFFFE00uLL;
  sub_140313C70(a1);
  sub_1406EBA70();
  sub_1403A111C(a1, v6 << 12, 12);
  return sub_140213FA8((v5 >> 12) & 0xFFFFFFFFFFLL, v6);
}
