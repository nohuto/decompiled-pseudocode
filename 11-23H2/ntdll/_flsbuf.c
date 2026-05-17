/*
 * XREFs of _flsbuf @ 0x180095C10
 * Callers:
 *     _snprintf @ 0x1800902E0 (_snprintf.c)
 *     _snwprintf @ 0x180090390 (_snwprintf.c)
 *     swprintf @ 0x1800909B0 (swprintf.c)
 *     _vsprintf_l @ 0x180090AEC (_vsprintf_l.c)
 *     _vswprintf_l @ 0x180090C24 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x180090CEC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x180090DBC (_vsnwprintf_l.c)
 *     sprintf @ 0x180093B60 (sprintf.c)
 *     write_char @ 0x18009648C (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
