/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180067220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1801CF638);
  if ( hHandle )
    CloseHandle(hHandle);
}
