/*
 * XREFs of ?GetFallbackContentAsync@MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@56@AEAUMeetAndChatFallbackContent@3456@@Z @ 0x1801D6288
 * Callers:
 *     ?GetFallbackContentAsync@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHPEAUstruct_Windows_Internal_Shell_MeetAndChatFallbackContent@23@PEAPEAX@Z @ 0x1805CC820 (-GetFallbackContentAsync@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_InitCoro$2 @ 0x1801D5CE0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_InitC.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 a3)
{
  void *v6; // rax
  int v8; // [rsp+258h] [rbp+10h] BYREF

  v6 = operator new(0x201uLL);
  v8 = 0;
  winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync__InitCoro_2(
    &v8,
    (__int64)v6 + 112,
    a2,
    a3,
    a1);
  return a2;
}
