/*
 * XREFs of _fgetwc_nolock @ 0x1403E2BD8
 * Callers:
 *     ReadString_0 @ 0x1403E1CAC (ReadString_0.c)
 *     _whiteout @ 0x1403E211C (_whiteout.c)
 *     _winput_s @ 0x1403E2174 (_winput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036DD70 (xHalTimerWatchdogStop.c)
 *     _filwbuf_s @ 0x140410D54 (_filwbuf_s.c)
 */

wint_t __cdecl fgetwc_nolock(FILE *File)
{
  wint_t result; // ax
  bool v3; // sf
  char *ptr; // rcx

  if ( File )
  {
    v3 = File->_cnt - 2 < 0;
    File->_cnt -= 2;
    if ( v3 )
    {
      return filwbuf_s(File, File);
    }
    else
    {
      ptr = File->_ptr;
      result = *(_WORD *)ptr;
      File->_ptr = ptr + 2;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
  return result;
}
