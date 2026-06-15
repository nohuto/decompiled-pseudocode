/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180016E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1800612E8);
  if ( hHandle )
    CloseHandle(hHandle);
}
