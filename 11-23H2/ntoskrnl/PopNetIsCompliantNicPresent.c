/*
 * XREFs of PopNetIsCompliantNicPresent @ 0x14087896C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C7F00 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

bool PopNetIsCompliantNicPresent()
{
  return PopNetCompliantNicCount != 0;
}
