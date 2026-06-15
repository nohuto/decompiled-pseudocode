/*
 * XREFs of __scrt_get_dyn_tls_dtor_callback @ 0x1400301B0
 * Callers:
 *     __scrt_common_main_seh @ 0x14002F3B0 (__scrt_common_main_seh.c)
 * Callees:
 *     <none>
 */

void *_scrt_get_dyn_tls_dtor_callback()
{
  return &_dyn_tls_dtor_callback;
}
