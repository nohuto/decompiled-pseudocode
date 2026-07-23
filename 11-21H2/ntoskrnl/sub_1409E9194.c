/*
 * XREFs of sub_1409E9194 @ 0x1409E9194
 * Callers:
 *     sub_1409E8E6C @ 0x1409E8E6C (sub_1409E8E6C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1409E9194(_DWORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0xB0uLL);
  *a1 = 176;
  a1[11] = 0x20000;
  result = (unsigned __int16)dword_140C16200;
  if ( !dword_140C16200 )
    result = 0xFFFFLL;
  *((_WORD *)a1 + 4) = result;
  return result;
}
