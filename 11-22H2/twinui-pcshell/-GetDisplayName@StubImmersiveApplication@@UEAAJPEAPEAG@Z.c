/*
 * XREFs of ?GetDisplayName@StubImmersiveApplication@@UEAAJPEAPEAG@Z @ 0x180510060
 * Callers:
 *     <none>
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800C2AB0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall StubImmersiveApplication::GetDisplayName(
        char **this,
        unsigned __int16 **a2,
        __int64 a3,
        const char *a4)
{
  unsigned __int16 *v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int16 *v8; // [rsp+30h] [rbp+8h] BYREF

  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v8,
    this[2],
    0xFFFFFFFFFFFFFFFFuLL,
    a4);
  v5 = v8;
  *a2 = v8;
  if ( v5 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x23,
    (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\StubImmersiveApplication.h",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
