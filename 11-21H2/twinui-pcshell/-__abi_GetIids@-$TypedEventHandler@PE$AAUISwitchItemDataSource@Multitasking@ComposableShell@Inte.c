/*
 * XREFs of ?__abi_GetIids@?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Foundation@Windows@@UE$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x18043A5D0
 * Callers:
 *     ?__abi_GetIids@?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@@Foundation@Windows@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1801FFD40 (-__abi_GetIids@-$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windo.c)
 *     ?__abi_GetIids@?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@@Foundation@Windows@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1801FFD60 (-__abi_GetIids@-$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@I_ea_1801FFD60.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18018E68C (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs __gc *>::__abi_GetIids(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  int v6; // [rsp+2Ch] [rbp-14h]

  v5 = -1457987196;
  v6 = 1069923333;
  return __winRT::__getIids(
           (__winRT *)1,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x11E06AE19DE1C534LL);
}
