/*
 * XREFs of dllmain_crt_process_detach @ 0x180004CD0
 * Callers:
 *     dllmain_crt_dispatch @ 0x180004B50 (dllmain_crt_dispatch.c)
 * Callees:
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x180004FFC (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     __scrt_acquire_startup_lock @ 0x180005034 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180005188 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x1800051C0 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x180005360 (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x18000538C (__scrt_uninitialize_crt.c)
 *     __scrt_fastfail @ 0x1800053DC (__scrt_fastfail.c)
 *     _RTC_Terminate @ 0x18000557C (_RTC_Terminate.c)
 */

_BOOL8 __fastcall dllmain_crt_process_detach(char a1)
{
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rcx
  BOOL v7; // ebx
  __int64 v8; // rcx

  if ( dword_1800090D0 <= 0 )
    return 0LL;
  --dword_1800090D0;
  v4 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x180004D54LL);
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
