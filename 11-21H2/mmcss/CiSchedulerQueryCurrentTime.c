/*
 * XREFs of CiSchedulerQueryCurrentTime @ 0x1C00015E0
 * Callers:
 *     CiSchedulerSleep @ 0x1C0001220 (CiSchedulerSleep.c)
 *     CiSchedulerProcessDeadlines @ 0x1C00013B0 (CiSchedulerProcessDeadlines.c)
 * Callees:
 *     <none>
 */

__int64 CiSchedulerQueryCurrentTime()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( CiSchedulerWaitStatus == 257 )
    return KeQueryInterruptTimePrecise(&v1);
  else
    return MEMORY[0xFFFFF78000000008];
}
