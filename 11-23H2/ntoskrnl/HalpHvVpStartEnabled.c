/*
 * XREFs of HalpHvVpStartEnabled @ 0x140377550
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x1403A90E0 (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpInterruptStartProcessor @ 0x140A88D4C (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x14037861C (HalpIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

char HalpHvVpStartEnabled()
{
  if ( qword_140C62550 )
    return qword_140C62550();
  else
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
}
