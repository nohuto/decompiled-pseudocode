/*
 * XREFs of sub_1405735F0 @ 0x1405735F0
 * Callers:
 *     sub_140554090 @ 0x140554090 (sub_140554090.c)
 *     sub_140578BB4 @ 0x140578BB4 (sub_140578BB4.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

__int64 sub_1405735F0()
{
  unsigned int v0; // edi
  unsigned int i; // ebx
  __int64 v2; // rax

  v0 = 0;
  for ( i = 0; i < (unsigned int)dword_140D06884; ++i )
  {
    v2 = sub_140348800(i);
    if ( v2 && (*(_DWORD *)(v2 + 11656) & 0xF) == 2 )
      ++v0;
  }
  return v0;
}
