/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@XamlSnapAssistViewController@@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180611F80
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@XamlSnapAssistViewController@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180211D80 (-__abi_GetIids@-QObject@Platform@@XamlSnapAssistViewController@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlSnapAssistViewController@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180211DA0 (-__abi_GetIids@-QObject@Platform@@XamlSnapAssistViewController@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlSnapAssistViewController@@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180211DC0 (-__abi_GetIids@-QObject@Platform@@XamlSnapAssistViewController@@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlSnapAssistViewController@@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180211DE0 (-__abi_GetIids@-QObject@Platform@@XamlSnapAssistViewController@@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlSnapAssistViewController@@WDA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180211E00 (-__abi_GetIids@-QObject@Platform@@XamlSnapAssistViewController@@WDA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlSnapAssistViewController@@WKA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180211E20 (-__abi_GetIids@-QObject@Platform@@XamlSnapAssistViewController@@WKA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18018E68C (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall ___abi_GetIids__QObject_Platform__XamlSnapAssistViewController__UE_AAAJPEAKPEAPEAVGuid_2__Z(
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

  v5 = 7145656;
  v6 = -1248502767;
  v7 = 56LL;
  v8 = 192;
  v9 = 1174405120;
  return __winRT::__getIids(
           (__winRT *)2,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x36D67473F7304F24LL);
}
