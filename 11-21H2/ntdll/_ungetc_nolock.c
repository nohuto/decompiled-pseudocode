/*
 * XREFs of _ungetc_nolock @ 0x18009DD34
 * Callers:
 *     ReadString @ 0x18009CF54 (ReadString.c)
 *     _input_l @ 0x18009D2A0 (_input_l.c)
 *     ReadString_0 @ 0x1800A06E8 (ReadString_0.c)
 *     _input_s @ 0x1800A0A30 (_input_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 *     _getbuf @ 0x18009DDEC (_getbuf.c)
 */

int __cdecl ungetc_nolock(int Character, FILE *Stream)
{
  unsigned __int8 v3; // di
  int result; // eax
  int flag; // eax
  char *base; // rax
  char *ptr; // rdx
  int v8; // ecx
  char *v9; // r8

  v3 = Character;
  if ( !Stream )
  {
    invalid_parameter();
    return -1;
  }
  if ( Character == -1 )
    return -1;
  flag = Stream->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  base = Stream->_base;
  if ( !base )
  {
    getbuf(Stream);
    base = Stream->_base;
  }
  ptr = Stream->_ptr;
  if ( Stream->_ptr == base )
  {
    if ( Stream->_cnt )
      return -1;
    ++ptr;
  }
  v8 = Stream->_flag;
  v9 = ptr - 1;
  Stream->_ptr = ptr - 1;
  if ( (v8 & 0x40) != 0 )
  {
    if ( *v9 != v3 )
    {
      Stream->_ptr = ptr;
      return -1;
    }
  }
  else
  {
    *v9 = v3;
    v8 = Stream->_flag;
  }
  ++Stream->_cnt;
  result = v3;
  Stream->_flag = v8 & 0xFFFFFFEE | 1;
  return result;
}
