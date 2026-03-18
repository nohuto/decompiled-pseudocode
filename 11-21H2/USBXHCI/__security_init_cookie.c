/*
 * XREFs of __security_init_cookie @ 0x1C007B008
 * Callers:
 *     FxDriverEntry @ 0x1C0017BD0 (FxDriverEntry.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_init_cookie()
{
  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    __fastfail(6u);
  _security_cookie_complement = ~_security_cookie;
}
