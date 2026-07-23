/*
 * XREFs of sub_1403A7718 @ 0x1403A7718
 * Callers:
 *     sub_14064CD04 @ 0x14064CD04 (sub_14064CD04.c)
 *     sub_140811EB0 @ 0x140811EB0 (sub_140811EB0.c)
 *     sub_140813744 @ 0x140813744 (sub_140813744.c)
 *     sub_140A1CB84 @ 0x140A1CB84 (sub_140A1CB84.c)
 * Callees:
 *     sub_140812318 @ 0x140812318 (sub_140812318.c)
 *     sub_1408123B4 @ 0x1408123B4 (sub_1408123B4.c)
 */

__int64 __fastcall sub_1403A7718(__int64 a1, char a2)
{
  if ( a2 )
    return sub_1408123B4(a1, L"FirmwareModified", L"Description");
  else
    return sub_140812318(a1, L"FirmwareModified", L"Description");
}
