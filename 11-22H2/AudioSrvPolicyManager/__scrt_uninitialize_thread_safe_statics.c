/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180017000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_180063368);
  if ( hHandle )
    CloseHandle(hHandle);
}
