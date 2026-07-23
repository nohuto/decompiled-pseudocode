/*
 * XREFs of HalpHvVpStartEnabled @ 0x1403776F0
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x1403A92C0 (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpInterruptStartProcessor @ 0x140A88D4C (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x1403787BC (HalpIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

char HalpHvVpStartEnabled()
{
  if ( qword_140C62550 )
    return qword_140C62550();
  else
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
}
