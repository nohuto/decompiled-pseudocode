/*
 * XREFs of ?LoadStreamAsync@MeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@XZ @ 0x180256C64
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x180256050 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resum.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync$_InitCoro$2 @ 0x1802568A8 (winrt--Windows--Internal--Shell--implementation--MeetAndChatFallbackProp--LoadStreamAsync$_InitC.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  void *v4; // rax
  int v6; // [rsp+118h] [rbp+10h] BYREF

  v4 = operator new(0xD9uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync__InitCoro_2(
    &v6,
    (__int64)v4 + 96,
    a2,
    a1);
  return a2;
}
