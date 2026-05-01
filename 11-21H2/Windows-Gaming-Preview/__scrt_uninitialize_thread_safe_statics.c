/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x18004AEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_180062AE8);
  if ( hObject )
    CloseHandle(hObject);
}
