/*
 * XREFs of __scrt_get_dyn_tls_init_callback @ 0x18000BACC
 * Callers:
 *     dllmain_crt_process_attach @ 0x18000AF98 (dllmain_crt_process_attach.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall **_scrt_get_dyn_tls_init_callback())()
{
  return &_dyn_tls_init_callback;
}
