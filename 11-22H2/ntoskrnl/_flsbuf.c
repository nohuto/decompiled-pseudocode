/*
 * XREFs of _flsbuf @ 0x1403DBD10
 * Callers:
 *     _vsnwprintf_l @ 0x1403D8370 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1403D8490 (_vsnprintf_l.c)
 *     _snprintf @ 0x1403D8EF0 (_snprintf.c)
 *     _snwprintf @ 0x1403D8FB0 (_snwprintf.c)
 *     swprintf @ 0x1403D9240 (swprintf.c)
 *     _vswprintf_l @ 0x1403D932C (_vswprintf_l.c)
 *     sprintf @ 0x1403DA600 (sprintf.c)
 *     _vsprintf_l @ 0x1403DB188 (_vsprintf_l.c)
 *     write_char_0 @ 0x1403DCFE8 (write_char_0.c)
 *     _soutput_s @ 0x1403E0424 (_soutput_s.c)
 *     _swoutput_s @ 0x1403E0518 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
