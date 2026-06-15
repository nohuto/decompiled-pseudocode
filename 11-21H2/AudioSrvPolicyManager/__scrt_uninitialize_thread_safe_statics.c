/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180002CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18005C268);
  if ( hHandle )
    CloseHandle(hHandle);
}
