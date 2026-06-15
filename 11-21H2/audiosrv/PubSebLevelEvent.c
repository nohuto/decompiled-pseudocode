/*
 * XREFs of PubSebLevelEvent @ 0x18000E064
 * Callers:
 *     _lambda_66d2f619b070ae3e79e6511eef39e0b9_::_lambda_invoker_cdecl_ @ 0x18000DF70 (_lambda_66d2f619b070ae3e79e6511eef39e0b9_--_lambda_invoker_cdecl_.c)
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x180056A20 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18006A600 (_alloca_probe.c)
 */

__int64 __fastcall PubSebLevelEvent(__int64 a1, unsigned __int8 a2)
{
  _DWORD v3[1024]; // [rsp+30h] [rbp-1018h] BYREF

  v3[1] = -1;
  if ( a2 > 1u )
    v3[0] = (a2 != 0 ? 3 : 1) | (a2 << 14);
  else
    v3[0] = a2 != 0 ? 3 : 1;
  return RtlPublishWnfStateData(a1, 0LL, v3, 8LL, 0LL);
}
