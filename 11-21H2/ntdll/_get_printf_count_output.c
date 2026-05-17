/*
 * XREFs of _get_printf_count_output @ 0x18009DB58
 * Callers:
 *     _output_l @ 0x18009A340 (_output_l.c)
 *     _woutput_l @ 0x18009ACC0 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_180178450 == (_security_cookie | 1);
}
