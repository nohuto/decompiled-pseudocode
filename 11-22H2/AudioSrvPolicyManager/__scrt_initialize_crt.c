/*
 * XREFs of __scrt_initialize_crt @ 0x180016BD8
 * Callers:
 *     dllmain_crt_process_attach @ 0x180016428 (dllmain_crt_process_attach.c)
 * Callees:
 *     __isa_available_init @ 0x1800174EC (__isa_available_init.c)
 *     __scrt_stub_for_acrt_thread_attach @ 0x18001832C (__scrt_stub_for_acrt_thread_attach.c)
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x180018338 (__scrt_stub_for_acrt_uninitialize_critical.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al

  v1 = byte_180063350;
  if ( !a1 )
    v1 = 1;
  byte_180063350 = v1;
  _isa_available_init();
  if ( !(unsigned __int8)_scrt_stub_for_acrt_thread_attach() )
    return 0;
  if ( !(unsigned __int8)_scrt_stub_for_acrt_thread_attach() )
  {
    _scrt_stub_for_acrt_uninitialize_critical(0LL);
    return 0;
  }
  return 1;
}
