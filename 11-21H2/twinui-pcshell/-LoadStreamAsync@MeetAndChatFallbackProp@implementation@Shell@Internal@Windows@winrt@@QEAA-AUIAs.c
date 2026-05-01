/*
 * XREFs of ?LoadStreamAsync@MeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@XZ @ 0x1801D6BD8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x1801D5E10 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resum.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync$_InitCoro$2 @ 0x1801D6750 (winrt--Windows--Internal--Shell--implementation--MeetAndChatFallbackProp--LoadStreamAsync$_InitC.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  void *v4; // rax
  int v6; // [rsp+268h] [rbp+10h] BYREF

  v4 = operator new(0x229uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync__InitCoro_2(
    &v6,
    (__int64)v4 + 96,
    a2,
    a1);
  return a2;
}
