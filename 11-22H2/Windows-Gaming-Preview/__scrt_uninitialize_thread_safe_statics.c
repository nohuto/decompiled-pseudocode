/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x18004BDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_180064AE8);
  if ( hObject )
    CloseHandle(hObject);
}
