/*
 * XREFs of ?GetFallbackContentAsync@MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@56@AEAUMeetAndChatFallbackContent@3456@@Z @ 0x180256450
 * Callers:
 *     ?GetFallbackContentAsync@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHPEAUstruct_Windows_Internal_Shell_MeetAndChatFallbackContent@23@PEAPEAX@Z @ 0x1806BD9C0 (-GetFallbackContentAsync@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_InitCoro$2 @ 0x180255F2C (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_InitC.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 a3)
{
  void *v6; // rax
  int v8; // [rsp+198h] [rbp+10h] BYREF

  v6 = operator new(0x141uLL);
  v8 = 0;
  winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync__InitCoro_2(
    &v8,
    (__int64)v6 + 112,
    a2,
    a3,
    a1);
  return a2;
}
