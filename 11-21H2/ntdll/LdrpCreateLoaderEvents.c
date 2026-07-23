/*
 * XREFs of LdrpCreateLoaderEvents @ 0x1800851E0
 * Callers:
 *     LdrpInitParallelLoadingSupport @ 0x180085190 (LdrpInitParallelLoadingSupport.c)
 *     LdrpCompleteProcessCloning @ 0x1800E0BE8 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     ZwCreateEvent @ 0x1800A4970 (ZwCreateEvent.c)
 */

int LdrpCreateLoaderEvents()
{
  int result; // eax

  result = ZwCreateEvent(&LdrpLoadCompleteEvent, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( result >= 0 )
    return ZwCreateEvent(&LdrpWorkCompleteEvent, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  return result;
}
