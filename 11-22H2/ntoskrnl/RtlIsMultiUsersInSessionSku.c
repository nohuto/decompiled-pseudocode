/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x1409BC330
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1403713AC (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiUsersInSessionSku(void)
{
  return (MEMORY[0xFFFFF780000002F0] & 0x200) != 0;
}
