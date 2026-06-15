/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x18005F1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1801C2158);
  if ( hHandle )
    CloseHandle(hHandle);
}
