/*
 * XREFs of sub_180021D04 @ 0x180021D04
 * Callers:
 *     sub_180021FA0 @ 0x180021FA0 (sub_180021FA0.c)
 *     sub_1800220A0 @ 0x1800220A0 (sub_1800220A0.c)
 *     sub_1800221A0 @ 0x1800221A0 (sub_1800221A0.c)
 *     sub_1800222F0 @ 0x1800222F0 (sub_1800222F0.c)
 *     sub_180022590 @ 0x180022590 (sub_180022590.c)
 *     sub_1800226F0 @ 0x1800226F0 (sub_1800226F0.c)
 *     sub_180022990 @ 0x180022990 (sub_180022990.c)
 *     sub_180022CE0 @ 0x180022CE0 (sub_180022CE0.c)
 *     sub_180022E40 @ 0x180022E40 (sub_180022E40.c)
 *     sub_1800230D0 @ 0x1800230D0 (sub_1800230D0.c)
 *     sub_180023330 @ 0x180023330 (sub_180023330.c)
 *     sub_180023460 @ 0x180023460 (sub_180023460.c)
 *     sub_1800236D0 @ 0x1800236D0 (sub_1800236D0.c)
 *     sub_180023830 @ 0x180023830 (sub_180023830.c)
 *     sub_180023BA0 @ 0x180023BA0 (sub_180023BA0.c)
 *     sub_180023CD0 @ 0x180023CD0 (sub_180023CD0.c)
 *     sub_180023E70 @ 0x180023E70 (sub_180023E70.c)
 *     sub_1800242D0 @ 0x1800242D0 (sub_1800242D0.c)
 *     sub_1800243F0 @ 0x1800243F0 (sub_1800243F0.c)
 * Callees:
 *     sub_180024220 @ 0x180024220 (sub_180024220.c)
 */

_BYTE *__fastcall sub_180021D04(_BYTE *a1, volatile signed __int64 *a2)
{
  if ( a2 )
  {
    _InterlockedExchangeAdd64(a2 + 18, 0LL);
    sub_180024220((void *)a2);
  }
  else
  {
    *a1 = 0;
  }
  return a1;
}
