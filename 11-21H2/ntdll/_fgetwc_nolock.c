/*
 * XREFs of _fgetwc_nolock @ 0x1800A2D40
 * Callers:
 *     ReadString_1 @ 0x1800A1E98 (ReadString_1.c)
 *     _whiteout @ 0x1800A22FC (_whiteout.c)
 *     _winput_s @ 0x1800A2354 (_winput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 *     _filwbuf_s @ 0x1800A2E30 (_filwbuf_s.c)
 */

wint_t __cdecl fgetwc_nolock(FILE *Stream)
{
  wint_t result; // ax
  bool v3; // sf
  char *ptr; // rcx

  if ( Stream )
  {
    v3 = Stream->_cnt - 2 < 0;
    Stream->_cnt -= 2;
    if ( v3 )
    {
      return filwbuf_s(Stream, Stream);
    }
    else
    {
      ptr = Stream->_ptr;
      result = *(_WORD *)ptr;
      Stream->_ptr = ptr + 2;
    }
  }
  else
  {
    invalid_parameter();
    return -1;
  }
  return result;
}
