/*
 * XREFs of HalpHvIsReferenceTscConfigured @ 0x14037B360
 * Callers:
 *     HalpPostSleepMP @ 0x140A96E18 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

bool HalpHvIsReferenceTscConfigured()
{
  return qword_140C624A8 != 0;
}
