/*
 * XREFs of sub_14068B198 @ 0x14068B198
 * Callers:
 *     sub_14068B144 @ 0x14068B144 (sub_14068B144.c)
 *     sub_14080B5A8 @ 0x14080B5A8 (sub_14080B5A8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 sub_14068B198()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // rcx

  result = qword_140D06CB8;
  if ( !byte_140D3CA07 )
  {
    result = qword_140D06CB8;
    if ( qword_140D06CB8 != qword_140D3CC70 )
    {
      v1 = 0xFFFFFFFFLL;
      if ( qword_140D06CB8 / 3uLL <= 0xFFFFFFFF )
      {
        v1 = qword_140D06CB8 / 3uLL;
        if ( qword_140D06CB8 / 3uLL < 0x1000000 )
          v1 = 0x1000000LL;
      }
      qword_140D3B068 = v1;
      qword_140D3B200 = v1;
      qword_140D3CC70 = qword_140D06CB8;
      result = 95 * (v1 / 0x64);
      qword_140D3B1F8 = result;
    }
  }
  return result;
}
