/*
 * XREFs of sub_1403B6CE8 @ 0x1403B6CE8
 * Callers:
 *     sub_14038D164 @ 0x14038D164 (sub_14038D164.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     <none>
 */

__int64 sub_1403B6CE8()
{
  __int64 result; // rax

  if ( dword_140D06C1C )
  {
    if ( _bittest64(&qword_140D068D8, 0x2Cu) )
    {
      result = (unsigned int)dword_140D06C1C;
      __writemsr(0xC91u, (unsigned int)dword_140D06C1C);
    }
  }
  return result;
}
