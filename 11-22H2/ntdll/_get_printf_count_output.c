/*
 * XREFs of _get_printf_count_output @ 0x180098C98
 * Callers:
 *     _output_l @ 0x180095420 (_output_l.c)
 *     _woutput_l @ 0x180095DC0 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1801824B0 == (_security_cookie | 1);
}
