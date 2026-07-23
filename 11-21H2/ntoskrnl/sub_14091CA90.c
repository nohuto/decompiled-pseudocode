/*
 * XREFs of sub_14091CA90 @ 0x14091CA90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14069F904 @ 0x14069F904 (sub_14069F904.c)
 */

__int64 __fastcall sub_14091CA90(__int64 a1)
{
  sub_14069F904(*(_QWORD *)(a1 + 32));
  if ( *(_QWORD *)a1 == 1LL )
    *(_WORD *)(a1 + 8) |= 0x20u;
  return 0LL;
}
