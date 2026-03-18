/*
 * XREFs of _flsbuf @ 0x1403DC370
 * Callers:
 *     _vsnwprintf_l @ 0x1403D89D0 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1403D8AF0 (_vsnprintf_l.c)
 *     _snprintf @ 0x1403D9550 (_snprintf.c)
 *     _snwprintf @ 0x1403D9610 (_snwprintf.c)
 *     swprintf @ 0x1403D98A0 (swprintf.c)
 *     _vswprintf_l @ 0x1403D998C (_vswprintf_l.c)
 *     sprintf @ 0x1403DAC60 (sprintf.c)
 *     _vsprintf_l @ 0x1403DB7E8 (_vsprintf_l.c)
 *     write_char_0 @ 0x1403DD648 (write_char_0.c)
 *     _soutput_s @ 0x1403E0A84 (_soutput_s.c)
 *     _swoutput_s @ 0x1403E0B78 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
