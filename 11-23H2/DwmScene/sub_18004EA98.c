/*
 * XREFs of sub_18004EA98 @ 0x18004EA98
 * Callers:
 *     sub_18004D5EC @ 0x18004D5EC (sub_18004D5EC.c)
 *     sub_18004D6B4 @ 0x18004D6B4 (sub_18004D6B4.c)
 *     sub_180062BB4 @ 0x180062BB4 (sub_180062BB4.c)
 * Callees:
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 */

__int64 __fastcall sub_18004EA98(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011B24(v2 + 32);
  return sub_1800259F4(a1);
}
