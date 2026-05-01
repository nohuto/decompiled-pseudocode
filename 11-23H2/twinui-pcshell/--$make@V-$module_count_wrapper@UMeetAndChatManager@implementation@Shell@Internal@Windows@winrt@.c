/*
 * XREFs of ??$make@V?$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x18008828C
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087D60 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UMeetAndChatManager@implementation@Shell@Inter.c)
 * Callees:
 *     ??0?$heap_implements@V?$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180088874 (--0-$heap_implements@V-$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@W.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>,>(
        __int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  void *v5; // [rsp+40h] [rbp+8h]

  v2 = 0LL;
  v5 = operator new(0x128uLL);
  memset_0(v5, 0, 0x128uLL);
  v3 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>>(v5);
  if ( v3 )
    v2 = v3 + 8;
  *a1 = v2;
  return a1;
}
