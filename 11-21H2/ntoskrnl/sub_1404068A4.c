/*
 * XREFs of sub_1404068A4 @ 0x1404068A4
 * Callers:
 *     sub_140405BF0 @ 0x140405BF0 (sub_140405BF0.c)
 *     sub_140406130 @ 0x140406130 (sub_140406130.c)
 *     sub_140406D14 @ 0x140406D14 (sub_140406D14.c)
 *     sub_1404080B0 @ 0x1404080B0 (sub_1404080B0.c)
 *     sub_140408B40 @ 0x140408B40 (sub_140408B40.c)
 *     sub_1404091C8 @ 0x1404091C8 (sub_1404091C8.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

void *__fastcall sub_1404068A4(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  void *result; // rax

  if ( a2 != a3 )
  {
    *a3 = *a2;
    return memmove(a3 + 32, a2 + 32, (*(_DWORD *)(a1 + 16) * (*(_DWORD *)(a1 + 8) & 0xFu)) << 6);
  }
  return result;
}
