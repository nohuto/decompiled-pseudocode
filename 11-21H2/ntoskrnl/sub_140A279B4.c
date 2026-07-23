/*
 * XREFs of sub_140A279B4 @ 0x140A279B4
 * Callers:
 *     sub_140A26F84 @ 0x140A26F84 (sub_140A26F84.c)
 *     sub_140A27790 @ 0x140A27790 (sub_140A27790.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A279B4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 496);
  if ( result )
    return sub_14042A5E0(a1, a2);
  return result;
}
