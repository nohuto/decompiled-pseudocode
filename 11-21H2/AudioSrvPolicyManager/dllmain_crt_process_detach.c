/*
 * XREFs of dllmain_crt_process_detach @ 0x1800021F0
 * Callers:
 *     dllmain_crt_dispatch @ 0x180002070 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x1800026E0 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180002834 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x18000286C (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x180002A0C (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x180002A38 (__scrt_uninitialize_crt.c)
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x180002F48 (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     __scrt_fastfail @ 0x180002FA0 (__scrt_fastfail.c)
 *     _RTC_Terminate @ 0x180003140 (_RTC_Terminate.c)
 */

_BOOL8 __fastcall dllmain_crt_process_detach(char a1)
{
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rcx
  BOOL v7; // ebx
  __int64 v8; // rcx

  if ( dword_18005BC90 <= 0 )
    return 0LL;
  --dword_18005BC90;
  v4 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x180002274LL);
  }
  _scrt_dllmain_uninitialize_c(v3);
  __scrt_uninitialize_type_info();
  RTC_Terminate();
  _scrt_current_native_startup_state = 0;
  LOBYTE(v5) = v4;
  _scrt_release_startup_lock(v5);
  LOBYTE(v6) = a1;
  v7 = (unsigned __int8)_scrt_uninitialize_crt(v6, 0LL) != 0;
  _scrt_dllmain_uninitialize_critical(v8);
  return v7;
}
