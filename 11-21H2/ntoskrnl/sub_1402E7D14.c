/*
 * XREFs of sub_1402E7D14 @ 0x1402E7D14
 * Callers:
 *     sub_140226AE0 @ 0x140226AE0 (sub_140226AE0.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_1405A0B10 @ 0x1405A0B10 (sub_1405A0B10.c)
 *     sub_1405B4024 @ 0x1405B4024 (sub_1405B4024.c)
 *     sub_1405BA864 @ 0x1405BA864 (sub_1405BA864.c)
 *     sub_1405C4C94 @ 0x1405C4C94 (sub_1405C4C94.c)
 * Callees:
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 */

__int64 __fastcall sub_1402E7D14(__int64 a1, __int64 a2)
{
  if ( qword_140C50780 )
  {
    if ( (a1 & 0x10) != 0 )
      a1 &= ~0x10uLL;
    else
      a1 &= ~qword_140C50780;
  }
  return sub_1402CCC50((a1 ^ (a2 << 12)) & 0xFFFFFFFFFF000LL ^ a1);
}
