/*
 * XREFs of ?second@?$__compressed_pair@PEAUtagPOINTER_DEVICE_INFO@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAAEAU?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@XZ @ 0x1801A2324
 * Callers:
 *     GetSidStringFromToken @ 0x1800F199C (GetSidStringFromToken.c)
 *     ?GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z @ 0x1804FF440 (-GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__compressed_pair<tagPOINTER_DEVICE_INFO *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::second(
        __int64 a1)
{
  return wistd::__compressed_pair_elem<wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>,1,1>::__get(a1 + 8);
}
