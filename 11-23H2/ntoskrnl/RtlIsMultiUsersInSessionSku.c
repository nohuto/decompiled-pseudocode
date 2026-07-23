/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x1409BC480
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x140371B9C (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiUsersInSessionSku(void)
{
  return (MEMORY[0xFFFFF780000002F0] & 0x200) != 0;
}
