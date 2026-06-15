/*
 * XREFs of s_GetCustomDeviceFormatsSupportedOnEndpoint @ 0x1800ECC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 s_GetCustomDeviceFormatsSupportedOnEndpoint()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 304LL))(g_PolicyConfig);
}
