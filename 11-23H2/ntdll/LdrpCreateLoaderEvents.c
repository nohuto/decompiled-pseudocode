/*
 * XREFs of LdrpCreateLoaderEvents @ 0x18005C97C
 * Callers:
 *     LdrpInitParallelLoadingSupport @ 0x18005C92C (LdrpInitParallelLoadingSupport.c)
 *     LdrpCompleteProcessCloning @ 0x1800E0754 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     ZwCreateEvent @ 0x1800A17B0 (ZwCreateEvent.c)
 */

int LdrpCreateLoaderEvents()
{
  int result; // eax

  result = ZwCreateEvent(&LdrpLoadCompleteEvent, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( result >= 0 )
    return ZwCreateEvent(&LdrpWorkCompleteEvent, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  return result;
}
