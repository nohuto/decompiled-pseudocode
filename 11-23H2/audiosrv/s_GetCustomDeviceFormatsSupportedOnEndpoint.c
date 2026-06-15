/*
 * XREFs of s_GetCustomDeviceFormatsSupportedOnEndpoint @ 0x180118ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 s_GetCustomDeviceFormatsSupportedOnEndpoint()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 304LL))(g_PolicyConfig);
}
