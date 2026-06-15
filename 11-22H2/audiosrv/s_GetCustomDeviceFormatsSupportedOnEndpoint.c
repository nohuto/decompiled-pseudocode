/*
 * XREFs of s_GetCustomDeviceFormatsSupportedOnEndpoint @ 0x180118F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 s_GetCustomDeviceFormatsSupportedOnEndpoint()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 304LL))(g_PolicyConfig);
}
