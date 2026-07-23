/*
 * XREFs of sub_1409EA280 @ 0x1409EA280
 * Callers:
 *     sub_14078FCF8 @ 0x14078FCF8 (sub_14078FCF8.c)
 * Callees:
 *     sub_140790CA8 @ 0x140790CA8 (sub_140790CA8.c)
 *     sub_14081AA90 @ 0x14081AA90 (sub_14081AA90.c)
 */

__int64 __fastcall sub_1409EA280(__int64 *a1, int a2)
{
  __int64 result; // rax

  result = sub_140790CA8((__int64)&stru_14000E5E8, 0x80u);
  if ( (int)result >= 0 )
  {
    result = sub_14081AA90(*a1, a2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
