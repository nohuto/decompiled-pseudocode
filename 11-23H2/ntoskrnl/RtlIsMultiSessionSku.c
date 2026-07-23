/*
 * XREFs of RtlIsMultiSessionSku @ 0x1407ECFF0
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x140371B9C (OpenGlobalizationUserSettingsKey.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1407ECF8C (SepIsImpersonationAllowedDueToCapability.c)
 *     RtlCapabilityCheck @ 0x1407ED020 (RtlCapabilityCheck.c)
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 *     NtSetDefaultLocale @ 0x1407FCB40 (NtSetDefaultLocale.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140842114 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1409BC1B0 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1409F8520 (NtSetSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_BYTE *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 165) + 28LL);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
