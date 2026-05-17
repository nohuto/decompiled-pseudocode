/*
 * XREFs of _errno @ 0x18008D010
 * Callers:
 *     wcstoxq @ 0x1800959F4 (wcstoxq.c)
 *     mbstowcs @ 0x180097A00 (mbstowcs.c)
 *     strtoxlX @ 0x180098FD8 (strtoxlX.c)
 *     wcstoxlX @ 0x180099BD0 (wcstoxlX.c)
 *     wcstombs @ 0x180099E90 (wcstombs.c)
 *     strtoxq @ 0x18009A0C0 (strtoxq.c)
 *     write_string @ 0x18009AC34 (write_string.c)
 *     write_string_0 @ 0x18009B67C (write_string_0.c)
 *     _handle_qnan1 @ 0x18009C75C (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x18009CA74 (_set_errno_from_matherr.c)
 *     _wctomb_s_l @ 0x18009DB78 (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
