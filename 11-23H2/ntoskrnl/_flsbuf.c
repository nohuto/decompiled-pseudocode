/*
 * XREFs of _flsbuf @ 0x1403DC550
 * Callers:
 *     _vsnwprintf_l @ 0x1403D8BB0 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1403D8CD0 (_vsnprintf_l.c)
 *     _snprintf @ 0x1403D9730 (_snprintf.c)
 *     _snwprintf @ 0x1403D97F0 (_snwprintf.c)
 *     swprintf @ 0x1403D9A80 (swprintf.c)
 *     _vswprintf_l @ 0x1403D9B6C (_vswprintf_l.c)
 *     sprintf @ 0x1403DAE40 (sprintf.c)
 *     _vsprintf_l @ 0x1403DB9C8 (_vsprintf_l.c)
 *     write_char_0 @ 0x1403DD828 (write_char_0.c)
 *     _soutput_s @ 0x1403E0C64 (_soutput_s.c)
 *     _swoutput_s @ 0x1403E0D58 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
