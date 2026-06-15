/*
 * XREFs of _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__s_HostedAppInteractivityManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_18005C628 = 0LL;
  dword_18005C650 = 10;
  xmmword_18005C630 = 0LL;
  xmmword_18005C640 = 0LL;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__);
}
