/*
 * XREFs of RtlIsMultiSessionSku @ 0x1407ED2A0
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1403713AC (OpenGlobalizationUserSettingsKey.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1407ED23C (SepIsImpersonationAllowedDueToCapability.c)
 *     RtlCapabilityCheck @ 0x1407ED2D0 (RtlCapabilityCheck.c)
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 *     NtSetDefaultLocale @ 0x1407FCF20 (NtSetDefaultLocale.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140843BA4 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1409BC060 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1409F8340 (NtSetSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_BYTE *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 165) + 28LL);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
