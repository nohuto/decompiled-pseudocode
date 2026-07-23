/*
 * XREFs of _get_printf_count_output @ 0x1403DE02C
 * Callers:
 *     _woutput_l @ 0x1403DC560 (_woutput_l.c)
 *     _output_l @ 0x1403DCFD0 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140C0DFC0 == (_security_cookie | 1);
}
