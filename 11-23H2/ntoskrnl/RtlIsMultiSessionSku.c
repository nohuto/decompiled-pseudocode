/*
 * XREFs of RtlIsMultiSessionSku @ 0x1407ECD20
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1403719FC (OpenGlobalizationUserSettingsKey.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1407ECCBC (SepIsImpersonationAllowedDueToCapability.c)
 *     RtlCapabilityCheck @ 0x1407ECD50 (RtlCapabilityCheck.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     NtSetDefaultLocale @ 0x1407FC870 (NtSetDefaultLocale.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140841E14 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1409BBFB0 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1409F8290 (NtSetSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287470 (PsIsCurrentThreadInServerSilo.c)
 */

char RtlIsMultiSessionSku()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_BYTE *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 165) + 28LL);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
