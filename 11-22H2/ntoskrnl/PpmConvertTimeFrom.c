/*
 * XREFs of PpmConvertTimeFrom @ 0x1403A8E68
 * Callers:
 *     PopIdleWakeInitialize @ 0x1408515D8 (PopIdleWakeInitialize.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x1408516CC (PopIdleWakeConvertIntervalBucketsFrom.c)
 * Callees:
 *     PpmConvertTime @ 0x1402553F0 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmConvertTimeFrom(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, a2, PopQpcFrequency);
}
