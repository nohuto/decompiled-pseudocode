/*
 * XREFs of sub_140AD62E8 @ 0x140AD62E8
 * Callers:
 *     HalInitSystem @ 0x140A56BD0 (HalInitSystem.c)
 * Callees:
 *     <none>
 */

uintptr_t sub_140AD62E8()
{
  uintptr_t result; // rax

  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    __fastfail(6u);
  result = ~_security_cookie;
  qword_140C0CA18 = ~_security_cookie;
  return result;
}
