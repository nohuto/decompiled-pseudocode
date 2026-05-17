/*
 * XREFs of RtlIsMultiSessionSku @ 0x180009B60
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x18000C6F4 (OpenGlobalizationUserSettingsKey.c)
 *     RtlCapabilityCheck @ 0x180011760 (RtlCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x180089A40 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 */

char __fastcall RtlIsMultiSessionSku(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    return *((_BYTE *)NtCurrentPeb()->SharedData + 28);
  else
    return MEMORY[0x7FFE02F1] & 1;
}
