/*
 * XREFs of _get_printf_count_output @ 0x180099498
 * Callers:
 *     _output_l @ 0x180095C20 (_output_l.c)
 *     _woutput_l @ 0x1800965C0 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1801854F0 == (_security_cookie | 1);
}
