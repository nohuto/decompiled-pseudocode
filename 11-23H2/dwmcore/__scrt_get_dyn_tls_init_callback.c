/*
 * XREFs of __scrt_get_dyn_tls_init_callback @ 0x18010FEBC
 * Callers:
 *     dllmain_crt_process_attach @ 0x18010F438 (dllmain_crt_process_attach.c)
 * Callees:
 *     <none>
 */

void *_scrt_get_dyn_tls_init_callback()
{
  return &_dyn_tls_init_callback;
}
