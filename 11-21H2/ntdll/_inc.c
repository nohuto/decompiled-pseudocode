/*
 * XREFs of _inc @ 0x18009D270
 * Callers:
 *     ReadString @ 0x18009CF54 (ReadString.c)
 *     _input_l @ 0x18009D2A0 (_input_l.c)
 * Callees:
 *     _filbuf @ 0x18009DD28 (_filbuf.c)
 */

__int64 __fastcall inc(FILE *a1)
{
  if ( --a1->_cnt < 0 )
    return (unsigned int)filbuf(a1);
  else
    return *(unsigned __int8 *)a1->_ptr++;
}
