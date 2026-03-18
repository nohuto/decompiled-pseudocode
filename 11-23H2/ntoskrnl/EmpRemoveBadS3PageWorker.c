/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x14093CCE0
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistBadPageToBcd @ 0x140611D90 (WheaPersistBadPageToBcd.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistBadPageToBcd((unsigned int)EmpBadS3Page);
}
