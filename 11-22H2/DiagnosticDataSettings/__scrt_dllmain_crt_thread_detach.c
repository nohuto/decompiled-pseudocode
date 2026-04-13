/*
 * XREFs of __scrt_dllmain_crt_thread_detach @ 0x1800050FC
 * Callers:
 *     dllmain_crt_dispatch @ 0x180004B50 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_stub_for_acrt_thread_attach @ 0x180005B68 (__scrt_stub_for_acrt_thread_attach.c)
 */

char _scrt_dllmain_crt_thread_detach()
{
  _scrt_stub_for_acrt_thread_attach();
  _scrt_stub_for_acrt_thread_attach();
  return 1;
}
