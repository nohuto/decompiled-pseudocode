/*
 * XREFs of HalpHvIsReferenceTscConfigured @ 0x14037B1C0
 * Callers:
 *     HalpPostSleepMP @ 0x140A96FA8 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

bool HalpHvIsReferenceTscConfigured()
{
  return qword_140C624A8 != 0;
}
