/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1801C90A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18098CB78);
  if ( hHandle )
    CloseHandle(hHandle);
}
