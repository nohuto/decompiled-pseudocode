/*
 * XREFs of _errno @ 0x180088DF0
 * Callers:
 *     wcstoxq @ 0x1800911D4 (wcstoxq.c)
 *     mbstowcs @ 0x180093200 (mbstowcs.c)
 *     strtoxlX @ 0x180094888 (strtoxlX.c)
 *     wcstoxlX @ 0x1800954A0 (wcstoxlX.c)
 *     wcstombs @ 0x180095770 (wcstombs.c)
 *     strtoxq @ 0x1800959A0 (strtoxq.c)
 *     write_string @ 0x180096534 (write_string.c)
 *     write_string_0 @ 0x180096F98 (write_string_0.c)
 *     _handle_qnan1 @ 0x18009804C (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x180098360 (_set_errno_from_matherr.c)
 *     _wctomb_s_l @ 0x1800994B8 (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
