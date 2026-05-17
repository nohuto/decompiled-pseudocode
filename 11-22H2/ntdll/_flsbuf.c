/*
 * XREFs of _flsbuf @ 0x180095410
 * Callers:
 *     _snprintf @ 0x18008FAE0 (_snprintf.c)
 *     _snwprintf @ 0x18008FB90 (_snwprintf.c)
 *     swprintf @ 0x1800901B0 (swprintf.c)
 *     _vsprintf_l @ 0x1800902EC (_vsprintf_l.c)
 *     _vswprintf_l @ 0x180090424 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x1800904EC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x1800905BC (_vsnwprintf_l.c)
 *     sprintf @ 0x180093360 (sprintf.c)
 *     write_char @ 0x180095C8C (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
