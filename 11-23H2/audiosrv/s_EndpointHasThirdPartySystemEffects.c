/*
 * XREFs of s_EndpointHasThirdPartySystemEffects @ 0x180118E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall s_EndpointHasThirdPartySystemEffects(__int64 a1, __int64 a2, _DWORD *a3)
{
  *a3 = (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 312LL))(g_PolicyConfig);
  return 0LL;
}
