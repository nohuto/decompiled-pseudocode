/*
 * XREFs of sub_1800A5994 @ 0x1800A5994
 * Callers:
 *     sub_180106F30 @ 0x180106F30 (sub_180106F30.c)
 * Callees:
 *     sub_1800A52C4 @ 0x1800A52C4 (sub_1800A52C4.c)
 */

__int64 __fastcall sub_1800A5994(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) > 0x100uLL )
    return sub_1800A52C4(*(LPVOID *)a1);
  return result;
}
