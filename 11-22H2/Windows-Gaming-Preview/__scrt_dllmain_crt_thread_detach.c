/*
 * XREFs of __scrt_dllmain_crt_thread_detach @ 0x18004B848
 * Callers:
 *     dllmain_crt_dispatch @ 0x18004B110 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_stub_for_acrt_thread_attach @ 0x18004CCC8 (__scrt_stub_for_acrt_thread_attach.c)
 */

char _scrt_dllmain_crt_thread_detach()
{
  _scrt_stub_for_acrt_thread_attach();
  _scrt_stub_for_acrt_thread_attach();
  return 1;
}
