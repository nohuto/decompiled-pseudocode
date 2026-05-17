/*
 * XREFs of write_char_1 @ 0x1800A05CC
 * Callers:
 *     _output_s @ 0x18009FB74 (_output_s.c)
 *     write_multi_char_1 @ 0x1800A061C (write_multi_char_1.c)
 *     write_string_1 @ 0x1800A0674 (write_string_1.c)
 * Callees:
 *     _flsbuf_s @ 0x1800A2D24 (_flsbuf_s.c)
 */

__int64 __fastcall write_char_1(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 24);
  if ( (result & 0x40) == 0 || *(_QWORD *)(a2 + 16) )
  {
    if ( --*(_DWORD *)(a2 + 8) < 0 )
    {
      result = flsbuf_s((unsigned int)(char)a1, a2);
    }
    else
    {
      *(_BYTE *)(*(_QWORD *)a2)++ = a1;
      result = a1;
    }
    if ( (_DWORD)result == -1 )
      *a3 = -1;
    else
      ++*a3;
  }
  else
  {
    ++*a3;
  }
  return result;
}
