/*
 * XREFs of ?ToString@?$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@UE$AAAPE$AAVString@3@XZ @ 0x180766A8C
 * Callers:
 *     ?ToString@?$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@WBA@E$AAAPE$AAVString@3@XZ @ 0x1802ADFD0 (-ToString@-$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@WBA@E$AAAPE$AAVString@3@XZ.c)
 *     ?__abi_Platform_Details_IPrintable____abi_ToString@?QIPrintable@Details@Platform@@?$CustomBox@VSize@Foundation@Windows@@@23@UE$AAAJPEAPE$AAVString@3@@Z @ 0x180766E98 (-__abi_Platform_Details_IPrintable____abi_ToString@-QIPrintable@Details@Platform@@-_ea_180766E98.c)
 * Callees:
 *     ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x18018AFC4 (-__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z.c)
 *     WindowsDeleteString_0 @ 0x1801C7BDB (WindowsDeleteString_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Platform::Details::CustomBox<Windows::Foundation::Size>::ToString(__int64 a1)
{
  Platform::Details *v1; // rbx
  __int64 v2; // rdx
  HSTRING *v3; // r8
  Platform::Details *v4; // rdi
  __int64 v5; // rdx
  HSTRING *v6; // r8
  __int64 v7; // rbx

  v1 = (Platform::Details *)__abi_details::__abi_ObjectToString(a1, 0LL);
  v4 = (Platform::Details *)__abi_winrt_ptrto_string_ctor(v1, v2, v3);
  WindowsDeleteString_0((HSTRING)v1);
  v7 = __abi_winrt_ptrto_string_ctor(v4, v5, v6);
  WindowsDeleteString_0((HSTRING)v4);
  return v7;
}
