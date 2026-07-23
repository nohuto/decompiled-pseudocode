/*
 * XREFs of sub_1403CC568 @ 0x1403CC568
 * Callers:
 *     sub_14064B24C @ 0x14064B24C (sub_14064B24C.c)
 *     sub_140844C0C @ 0x140844C0C (sub_140844C0C.c)
 * Callees:
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

__int64 sub_1403CC568()
{
  _QWORD *v0; // rax
  unsigned int v1; // r8d
  __int64 v2; // r9
  __int64 v3; // r10

  v0 = sub_140347DB0();
  return sub_140300E50(
           v0[108] + 24LL,
           *(_BYTE *)(v0[108] + 4064LL),
           0,
           0,
           v3,
           0,
           0,
           0LL,
           0LL,
           v1,
           v2,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL);
}
