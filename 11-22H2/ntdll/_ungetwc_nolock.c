/*
 * XREFs of _ungetwc_nolock @ 0x18009DF10
 * Callers:
 *     ReadString_1 @ 0x18009D018 (ReadString_1.c)
 *     _winput_s @ 0x18009D4E0 (_winput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008E6B8 (_invalid_parameter.c)
 */

wint_t __cdecl ungetwc_nolock(wint_t Character, FILE *Stream)
{
  int flag; // r9d
  char *ptr; // rax
  wint_t *v5; // r10
  int v6; // eax

  if ( !Stream )
  {
    invalid_parameter();
    return -1;
  }
  if ( Character == 0xFFFF )
    return -1;
  flag = Stream->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  ptr = Stream->_ptr;
  if ( Stream->_ptr < Stream->_base + 2 )
  {
    if ( Stream->_cnt || Stream->_bufsiz < 2u )
      return -1;
    ptr = Stream->_base + 2;
  }
  v5 = (wint_t *)(ptr - 2);
  Stream->_ptr = ptr - 2;
  if ( (flag & 0x40) != 0 )
  {
    if ( *v5 != Character )
    {
      Stream->_ptr = ptr;
      return -1;
    }
  }
  else
  {
    *v5 = Character;
  }
  v6 = Stream->_flag;
  Stream->_cnt += 2;
  Stream->_flag = v6 & 0xFFFFFFEE | 1;
  return Character;
}
