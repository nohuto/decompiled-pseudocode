/*
 * XREFs of _flsbuf @ 0x18009A328
 * Callers:
 *     _snprintf @ 0x180094B20 (_snprintf.c)
 *     _snwprintf @ 0x180094BD0 (_snwprintf.c)
 *     swprintf @ 0x1800951E0 (swprintf.c)
 *     _vsprintf_l @ 0x18009531C (_vsprintf_l.c)
 *     _vswprintf_l @ 0x180095454 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18009551C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x1800955EC (_vsnwprintf_l.c)
 *     sprintf @ 0x180098360 (sprintf.c)
 *     write_char @ 0x18009AB8C (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
