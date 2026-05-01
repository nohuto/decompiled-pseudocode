/*
 * XREFs of ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x18014B884
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x18014B738 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 *     ?GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z @ 0x18014B7D0 (-GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z.c)
 *     ?ToString@?$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@UE$AAAPE$AAVString@3@XZ @ 0x180425788 (-ToString@-$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@UE$AAAPE$AAVString@3@XZ.c)
 *     ?GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z @ 0x180443820 (-GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z.c)
 *     ?get@Name@IVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVString@Platform@@XZ @ 0x180447694 (-get@Name@IVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVString@Plat.c)
 * Callees:
 *     WindowsDuplicateString_0 @ 0x18018A07B (WindowsDuplicateString_0.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

HSTRING __fastcall __abi_winrt_ptrto_string_ctor(HSTRING a1)
{
  HRESULT v1; // eax
  HSTRING newString; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  v1 = WindowsDuplicateString_0(a1, &newString);
  if ( v1 < 0 )
  {
    __abi_WinRTraiseException(v1);
    __debugbreak();
  }
  return newString;
}
