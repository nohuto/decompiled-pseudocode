/*
 * XREFs of sub_140401210 @ 0x140401210
 * Callers:
 *     sub_140407B90 @ 0x140407B90 (sub_140407B90.c)
 *     sub_140407E00 @ 0x140407E00 (sub_140407E00.c)
 *     sub_140409F50 @ 0x140409F50 (sub_140409F50.c)
 *     sub_14040A200 @ 0x14040A200 (sub_14040A200.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140401210(_DWORD *a1)
{
  return (*(__int64 (__fastcall **)(_DWORD *))((char *)&off_140006940 + (*a1 & 0x380)))(a1);
}
