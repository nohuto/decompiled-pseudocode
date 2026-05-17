/*
 * XREFs of _fgetwc_nolock @ 0x18009DEC4
 * Callers:
 *     ReadString_1 @ 0x18009D018 (ReadString_1.c)
 *     _whiteout @ 0x18009D488 (_whiteout.c)
 *     _winput_s @ 0x18009D4E0 (_winput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008E6B8 (_invalid_parameter.c)
 *     _filwbuf_s @ 0x18009DFB4 (_filwbuf_s.c)
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
