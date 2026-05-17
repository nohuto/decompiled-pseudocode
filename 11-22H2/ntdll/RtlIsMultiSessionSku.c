/*
 * XREFs of RtlIsMultiSessionSku @ 0x180009D80
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x18000C904 (OpenGlobalizationUserSettingsKey.c)
 *     RtlCapabilityCheck @ 0x180011970 (RtlCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x180089240 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 */

char __fastcall RtlIsMultiSessionSku(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    return *((_BYTE *)NtCurrentPeb()->SharedData + 28);
  else
    return MEMORY[0x7FFE02F1] & 1;
}
