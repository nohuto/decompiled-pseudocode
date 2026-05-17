/*
 * XREFs of LdrpCreateLoaderEvents @ 0x18005F808
 * Callers:
 *     LdrpInitParallelLoadingSupport @ 0x18005F7B8 (LdrpInitParallelLoadingSupport.c)
 *     LdrpCompleteProcessCloning @ 0x1800DF424 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     ZwCreateEvent @ 0x18009F6F0 (ZwCreateEvent.c)
 */

__int64 LdrpCreateLoaderEvents()
{
  __int64 result; // rax
  char v1; // [rsp+20h] [rbp-18h]
  int v2; // [rsp+20h] [rbp-18h]

  v1 = 0;
  result = ZwCreateEvent(&LdrpLoadCompleteEvent, 2031619LL, 0LL, 1LL, v1);
  if ( (int)result >= 0 )
  {
    LOBYTE(v2) = 0;
    return ZwCreateEvent(&LdrpWorkCompleteEvent, 2031619LL, 0LL, 1LL, v2);
  }
  return result;
}
