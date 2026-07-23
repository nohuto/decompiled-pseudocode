/*
 * XREFs of sub_140AAD3E0 @ 0x140AAD3E0
 * Callers:
 *     sub_1403A7CAC @ 0x1403A7CAC (sub_1403A7CAC.c)
 *     sub_1403A7F70 @ 0x1403A7F70 (sub_1403A7F70.c)
 *     sub_1403A8000 @ 0x1403A8000 (sub_1403A8000.c)
 *     sub_1403DD848 @ 0x1403DD848 (sub_1403DD848.c)
 *     sub_1403DD8CC @ 0x1403DD8CC (sub_1403DD8CC.c)
 *     sub_140AAB07C @ 0x140AAB07C (sub_140AAB07C.c)
 *     sub_140AABA70 @ 0x140AABA70 (sub_140AABA70.c)
 *     sub_140AABCD8 @ 0x140AABCD8 (sub_140AABCD8.c)
 *     sub_140AABE28 @ 0x140AABE28 (sub_140AABE28.c)
 *     sub_140AAC1BC @ 0x140AAC1BC (sub_140AAC1BC.c)
 *     sub_140AAC868 @ 0x140AAC868 (sub_140AAC868.c)
 *     sub_140AACA74 @ 0x140AACA74 (sub_140AACA74.c)
 *     sub_140AAD1C4 @ 0x140AAD1C4 (sub_140AAD1C4.c)
 *     sub_140AAD338 @ 0x140AAD338 (sub_140AAD338.c)
 *     sub_140AAEAF4 @ 0x140AAEAF4 (sub_140AAEAF4.c)
 *     sub_140AB14B4 @ 0x140AB14B4 (sub_140AB14B4.c)
 *     sub_140AB17C4 @ 0x140AB17C4 (sub_140AB17C4.c)
 *     sub_140AB1844 @ 0x140AB1844 (sub_140AB1844.c)
 * Callees:
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 */

__int64 __fastcall sub_140AAD3E0(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    sub_1403A8CB4(a1);
  return 0LL;
}
