/*
 * XREFs of ?__abi_GetIids@RoutedEventHandler@Xaml@UI@Windows@@UE$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x18043AEF0
 * Callers:
 *     ?__abi_GetIids@RoutedEventHandler@Xaml@UI@Windows@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1802004C0 (-__abi_GetIids@RoutedEventHandler@Xaml@UI@Windows@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z.c)
 *     ?__abi_GetIids@RoutedEventHandler@Xaml@UI@Windows@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1802004E0 (-__abi_GetIids@RoutedEventHandler@Xaml@UI@Windows@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18018E68C (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall Windows::UI::Xaml::RoutedEventHandler::__abi_GetIids(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  int v6; // [rsp+2Ch] [rbp-14h]

  v5 = -1608800069;
  v6 = -1244381074;
  return __winRT::__getIids(
           (__winRT *)1,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x4BC3B0B6A856E674LL);
}
