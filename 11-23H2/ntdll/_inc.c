/*
 * XREFs of _inc @ 0x180098BA0
 * Callers:
 *     ReadString @ 0x180098868 (ReadString.c)
 *     _input_l @ 0x180098BD0 (_input_l.c)
 * Callees:
 *     _filbuf @ 0x180099668 (_filbuf.c)
 */

__int64 __fastcall inc(FILE *a1)
{
  if ( --a1->_cnt < 0 )
    return (unsigned int)filbuf(a1);
  else
    return *(unsigned __int8 *)a1->_ptr++;
}
