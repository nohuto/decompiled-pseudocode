/*
 * XREFs of ?AllocateAndCopyElements@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@KAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEBV34567@I@Z @ 0x180424A00
 * Callers:
 *     ??0?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@IE$AAA@PEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@I@Z @ 0x180424038 (--0-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@IE$AAA@PEAVXmlnsDefin.c)
 *     ?CopyToOrDetach@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@AE$AAAXPEAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEAI@Z @ 0x180424AC4 (-CopyToOrDetach@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@AE$AAAXPEAPEAVXml.c)
 * Callees:
 *     ?__abi_winrt_ptrto_string_assign@@YAPEAXPEAPEAXPE$ADVString@Platform@@@Z @ 0x180178CF4 (-__abi_winrt_ptrto_string_assign@@YAPEAXPEAPEAXPE$ADVString@Platform@@@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     __Platform_CoTaskMemAlloc @ 0x180189A6B (__Platform_CoTaskMemAlloc.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::AllocateAndCopyElements(
        Platform::Details **a1,
        unsigned int a2)
{
  __int64 v2; // rdi
  void *v4; // rbx
  __int64 v5; // r14
  HSTRING *v6; // r8
  HSTRING *v7; // rdi
  HSTRING *v8; // r8

  v2 = a2;
  if ( !a2 )
    return 0LL;
  if ( a2 > 0xFFFFFFF )
  {
    __abi_WinRTraiseInvalidCastException();
    __debugbreak();
  }
  v5 = v2;
  v4 = _Platform_CoTaskMemAlloc(16 * v2);
  if ( !v4 )
  {
    __abi_WinRTraiseOutOfMemoryException();
    __debugbreak();
  }
  memset_0(v4, 0, 16 * v2);
  if ( (_DWORD)v2 )
  {
    v7 = (HSTRING *)v4;
    do
    {
      __abi_winrt_ptrto_string_assign(v7, *a1, v6);
      __abi_winrt_ptrto_string_assign(v7 + 1, a1[1], v8);
      v7 += 2;
      a1 += 2;
      --v5;
    }
    while ( v5 );
  }
  return v4;
}
