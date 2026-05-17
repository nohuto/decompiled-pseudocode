/*
 * XREFs of _errno @ 0x1800885F0
 * Callers:
 *     wcstoxq @ 0x1800909D4 (wcstoxq.c)
 *     mbstowcs @ 0x180092A00 (mbstowcs.c)
 *     strtoxlX @ 0x180094088 (strtoxlX.c)
 *     wcstoxlX @ 0x180094CA0 (wcstoxlX.c)
 *     wcstombs @ 0x180094F70 (wcstombs.c)
 *     strtoxq @ 0x1800951A0 (strtoxq.c)
 *     write_string @ 0x180095D34 (write_string.c)
 *     write_string_0 @ 0x180096798 (write_string_0.c)
 *     _handle_qnan1 @ 0x18009784C (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x180097B60 (_set_errno_from_matherr.c)
 *     _wctomb_s_l @ 0x180098CB8 (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
