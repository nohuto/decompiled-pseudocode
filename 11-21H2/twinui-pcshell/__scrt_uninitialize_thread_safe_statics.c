/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1801897C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1807B2F40);
  if ( hHandle )
    CloseHandle(hHandle);
}
