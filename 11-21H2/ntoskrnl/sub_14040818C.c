/*
 * XREFs of sub_14040818C @ 0x14040818C
 * Callers:
 *     sub_140408730 @ 0x140408730 (sub_140408730.c)
 * Callees:
 *     sub_140400EB4 @ 0x140400EB4 (sub_140400EB4.c)
 *     sub_1404011D4 @ 0x1404011D4 (sub_1404011D4.c)
 *     sub_1404012B0 @ 0x1404012B0 (sub_1404012B0.c)
 *     sub_1404012E4 @ 0x1404012E4 (sub_1404012E4.c)
 */

__int64 __fastcall sub_14040818C(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  sub_140400EB4(a1, a5);
  sub_1404012E4(a1, a5);
  sub_140400EB4(a1, a7);
  sub_1404012E4(a1, a7);
  sub_1404011D4(a1, a10);
  sub_1404011D4(a1, a8);
  sub_1404012B0(a1);
  sub_1404012B0(a1);
  sub_1404012E4(a1, a5);
  sub_1404011D4(a1, a5);
  sub_1404011D4(a1, a4);
  sub_140400EB4(a1, a9);
  sub_1404011D4(a1, a10);
  sub_140400EB4(a1, a8);
  sub_1404012E4(a1, a8);
  sub_1404012B0(a1);
  if ( a3 )
    sub_1404011D4(a1, a3);
  sub_1404012B0(a1);
  return sub_1404011D4(a1, a2);
}
