/*
 * XREFs of __scrt_dllmain_uninitialize_critical @ 0x1800051C0
 * Callers:
 *     dllmain_crt_process_detach @ 0x180004CD0 (dllmain_crt_process_detach.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x180005B74 (__scrt_stub_for_acrt_uninitialize_critical.c)
 */

__int64 _scrt_dllmain_uninitialize_critical()
{
  __int64 v0; // rcx

  _scrt_stub_for_acrt_uninitialize_critical(0LL);
  return _scrt_stub_for_acrt_uninitialize_critical(v0);
}
