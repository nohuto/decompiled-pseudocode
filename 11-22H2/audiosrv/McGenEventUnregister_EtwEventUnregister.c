/*
 * XREFs of McGenEventUnregister_EtwEventUnregister @ 0x1801581E4
 * Callers:
 *     ?MyServiceTerminate@@YAXXZ @ 0x180157F48 (-MyServiceTerminate@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventUnregister_EtwEventUnregister()
{
  __int64 result; // rax

  if ( !AUDIO_EVENT_PROVIDER_Context )
    return 0LL;
  result = EtwEventUnregister(AUDIO_EVENT_PROVIDER_Context);
  AUDIO_EVENT_PROVIDER_Context = 0LL;
  return result;
}
