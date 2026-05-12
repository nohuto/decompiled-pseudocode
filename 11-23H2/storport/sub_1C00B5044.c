/*
 * XREFs of sub_1C00B5044 @ 0x1C00B5044
 * Callers:
 *     StorPortInitialize @ 0x1C00428F0 (StorPortInitialize.c)
 *     DriverEntry @ 0x1C00B5010 (DriverEntry.c)
 * Callees:
 *     <none>
 */

uintptr_t sub_1C00B5044()
{
  uintptr_t result; // rax

  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    __fastfail(6u);
  result = ~_security_cookie;
  qword_1C0093388 = ~_security_cookie;
  return result;
}
