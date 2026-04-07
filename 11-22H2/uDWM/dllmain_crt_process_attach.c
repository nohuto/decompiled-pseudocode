/*
 * XREFs of dllmain_crt_process_attach @ 0x18005E0F8
 * Callers:
 *     dllmain_crt_dispatch @ 0x18005E0A0 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18005C610 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x18005C650 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_before_initialize_c @ 0x18005C68C (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_crt @ 0x18005C7B8 (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x18005C89C (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x18005C93C (__scrt_release_startup_lock.c)
 *     __scrt_fastfail @ 0x18005D060 (__scrt_fastfail.c)
 *     ?__scrt_initialize_type_info@@YAXXZ @ 0x18005E4FC (-__scrt_initialize_type_info@@YAXXZ.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18005E524 (__scrt_initialize_default_local_stdio_options.c)
 *     __scrt_get_dyn_tls_init_callback @ 0x18005E548 (__scrt_get_dyn_tls_init_callback.c)
 *     _RTC_Initialize @ 0x18005E558 (_RTC_Initialize.c)
 *     _initterm_0 @ 0x18005E5F0 (_initterm_0.c)
 *     _initterm_e_0 @ 0x18005E5FC (_initterm_e_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 dllmain_crt_process_attach()
{
  char v0; // bl
  char v1; // di
  _QWORD *dyn_tls_init_callback; // rax

  if ( !_scrt_initialize_crt(0) )
    return 0LL;
  v0 = _scrt_acquire_startup_lock();
  v1 = 1;
  if ( _scrt_current_native_startup_state )
  {
    _scrt_fastfail(7u);
    __debugbreak();
    JUMPOUT(0x18005E218LL);
  }
  _scrt_current_native_startup_state = 1;
  if ( _scrt_dllmain_before_initialize_c() )
  {
    RTC_Initialize();
    __scrt_initialize_type_info();
    _scrt_initialize_default_local_stdio_options();
    if ( !initterm_e_0((_PIFV *)&_xi_a, (_PIFV *)&_xi_z) )
    {
      if ( _scrt_dllmain_after_initialize_c() )
      {
        initterm_0((_PVFV *)&_xc_a, (_PVFV *)&_xc_z);
        _scrt_current_native_startup_state = 2;
        v1 = 0;
      }
    }
  }
  _scrt_release_startup_lock(v0);
  if ( v1 )
    return 0LL;
  dyn_tls_init_callback = (_QWORD *)_scrt_get_dyn_tls_init_callback();
  if ( *dyn_tls_init_callback )
  {
    if ( _scrt_is_nonwritable_in_current_image((__int64)dyn_tls_init_callback) )
      _guard_xfg_dispatch_icall_fptr();
  }
  ++dword_180148290;
  return 1LL;
}
