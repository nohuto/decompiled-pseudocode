/*
 * XREFs of sub_18000DFD4 @ 0x18000DFD4
 * Callers:
 *     sub_18000CB44 @ 0x18000CB44 (sub_18000CB44.c)
 *     sub_18000CBC8 @ 0x18000CBC8 (sub_18000CBC8.c)
 *     sub_18000E040 @ 0x18000E040 (sub_18000E040.c)
 * Callees:
 *     sub_18000CCD8 @ 0x18000CCD8 (sub_18000CCD8.c)
 */

DWORD __fastcall sub_18000DFD4(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  DWORD result; // eax

  result = GetLastError();
  if ( !result )
  {
    sub_18000CCD8(a1, a2, a3, 0LL, 0LL, a6, 0x8007029C);
    return 668;
  }
  return result;
}
