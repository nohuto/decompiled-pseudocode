/*
 * XREFs of PpmConvertTimeFrom @ 0x1403A9558
 * Callers:
 *     PopIdleWakeInitialize @ 0x1408506C8 (PopIdleWakeInitialize.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x1408507BC (PopIdleWakeConvertIntervalBucketsFrom.c)
 * Callees:
 *     PpmConvertTime @ 0x140255510 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmConvertTimeFrom(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, a2, PopQpcFrequency);
}
