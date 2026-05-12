/*
 * XREFs of sub_1C00AA660 @ 0x1C00AA660
 * Callers:
 *     DllInitialize @ 0x1C0064410 (DllInitialize.c)
 * Callees:
 *     <none>
 */

__int64 sub_1C00AA660()
{
  xmmword_1C00931B4 = xmmword_1C008A0D0;
  return WheaAddErrorSourceDeviceDriverV1(0LL, &unk_1C00931B0, 1LL, 1124LL);
}
