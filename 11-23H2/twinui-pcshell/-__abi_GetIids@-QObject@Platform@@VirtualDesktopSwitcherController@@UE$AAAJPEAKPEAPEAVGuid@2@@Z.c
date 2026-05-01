/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@VirtualDesktopSwitcherController@@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18078CA20
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@VirtualDesktopSwitcherController@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1802B28E0 (-__abi_GetIids@-QObject@Platform@@VirtualDesktopSwitcherController@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@VirtualDesktopSwitcherController@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1802B2900 (-__abi_GetIids@-QObject@Platform@@VirtualDesktopSwitcherController@@WBA@E$AAAJPEAKPEAPEAVGuid@2@.c)
 *     ?__abi_GetIids@?QObject@Platform@@VirtualDesktopSwitcherController@@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1802B2920 (-__abi_GetIids@-QObject@Platform@@VirtualDesktopSwitcherController@@WBI@E$AAAJPEAKPEAPEAVGuid@2@.c)
 *     ?__abi_GetIids@?QObject@Platform@@VirtualDesktopSwitcherController@@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1802B2940 (-__abi_GetIids@-QObject@Platform@@VirtualDesktopSwitcherController@@WCA@E$AAAJPEAKPEAPEAVGuid@2@.c)
 *     ?__abi_GetIids@?QObject@Platform@@VirtualDesktopSwitcherController@@WDA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1802B2960 (-__abi_GetIids@-QObject@Platform@@VirtualDesktopSwitcherController@@WDA@E$AAAJPEAKPEAPEAVGuid@2@.c)
 *     ?__abi_GetIids@?QObject@Platform@@VirtualDesktopSwitcherController@@WKA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1802B2980 (-__abi_GetIids@-QObject@Platform@@VirtualDesktopSwitcherController@@WKA@E$AAAJPEAKPEAPEAVGuid@2@.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x1801CEEAC (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall ___abi_GetIids__QObject_Platform__VirtualDesktopSwitcherController__UE_AAAJPEAKPEAPEAVGuid_2__Z(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+28h] [rbp-28h]
  int v6; // [rsp+2Ch] [rbp-24h]
  __int64 v7; // [rsp+30h] [rbp-20h]
  int v8; // [rsp+38h] [rbp-18h]
  int v9; // [rsp+3Ch] [rbp-14h]

  v5 = 24735104;
  v6 = 389879545;
  v7 = 56LL;
  v8 = 192;
  v9 = 1174405120;
  return __winRT::__getIids(
           (__winRT *)2,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x3E94E6B70353C4D9LL);
}
