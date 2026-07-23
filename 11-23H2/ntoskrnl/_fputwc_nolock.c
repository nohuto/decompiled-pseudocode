/*
 * XREFs of _fputwc_nolock @ 0x1403DE04C
 * Callers:
 *     write_char @ 0x1403DCEB0 (write_char.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036E560 (xHalTimerWatchdogStop.c)
 *     _flswbuf @ 0x1403DE550 (_flswbuf.c)
 */

wint_t __cdecl fputwc_nolock(wchar_t Ch, FILE *File)
{
  wint_t result; // ax
  bool v3; // sf

  if ( File )
  {
    v3 = File->_cnt - 2 < 0;
    File->_cnt -= 2;
    if ( v3 )
    {
      return flswbuf(Ch);
    }
    else
    {
      *(_WORD *)File->_ptr = Ch;
      result = Ch;
      File->_ptr += 2;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
  return result;
}
