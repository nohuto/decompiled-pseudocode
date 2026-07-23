/*
 * XREFs of PpmConvertTimeFrom @ 0x1403A9738
 * Callers:
 *     PopIdleWakeInitialize @ 0x1408509C8 (PopIdleWakeInitialize.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x140850ABC (PopIdleWakeConvertIntervalBucketsFrom.c)
 * Callees:
 *     PpmConvertTime @ 0x1402555D0 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmConvertTimeFrom(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, a2, PopQpcFrequency);
}
