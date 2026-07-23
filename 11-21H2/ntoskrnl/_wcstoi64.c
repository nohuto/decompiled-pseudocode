/*
 * XREFs of _wcstoi64 @ 0x1403E3A1C
 * Callers:
 *     sub_1406E1D34 @ 0x1406E1D34 (sub_1406E1D34.c)
 * Callees:
 *     sub_1403E3A4C @ 0x1403E3A4C (sub_1403E3A4C.c)
 */

__int64 __cdecl wcstoi64(const __int16 *_String, __int16 **_EndPtr, int _Radix)
{
  return sub_1403E3A4C((unsigned int)&off_1400067F8, (_DWORD)_String, (_DWORD)_EndPtr, _Radix, 0, 0LL);
}
