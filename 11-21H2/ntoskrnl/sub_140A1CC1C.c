/*
 * XREFs of sub_140A1CC1C @ 0x140A1CC1C
 * Callers:
 *     sub_14099D244 @ 0x14099D244 (sub_14099D244.c)
 *     sub_140A1E354 @ 0x140A1E354 (sub_140A1E354.c)
 *     sub_140A1E590 @ 0x140A1E590 (sub_140A1E590.c)
 * Callees:
 *     sub_1403A7864 @ 0x1403A7864 (sub_1403A7864.c)
 *     sub_14064CD04 @ 0x14064CD04 (sub_14064CD04.c)
 *     sub_140803438 @ 0x140803438 (sub_140803438.c)
 *     sub_14080422C @ 0x14080422C (sub_14080422C.c)
 *     sub_1408134D8 @ 0x1408134D8 (sub_1408134D8.c)
 *     sub_14081369C @ 0x14081369C (sub_14081369C.c)
 */

NTSTATUS __fastcall sub_140A1CC1C(void *a1)
{
  char v2; // di
  NTSTATUS result; // eax
  int v4; // ebx

  v2 = sub_1403A7864((char)a1);
  result = sub_14081369C(v2);
  if ( result >= 0 )
  {
    if ( sub_140803438((__int64)a1, 0LL) )
      sub_14064CD04(a1);
    v4 = sub_14080422C((__int64)a1);
    sub_1408134D8(v2);
    return v4;
  }
  return result;
}
