/*
 * XREFs of ?GetFallbackContentAsync@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHPEAUstruct_Windows_Internal_Shell_MeetAndChatFallbackContent@23@PEAPEAX@Z @ 0x1806BD9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFallbackContentAsync@MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@56@AEAUMeetAndChatFallbackContent@3456@@Z @ 0x180256450 (-GetFallbackContentAsync@MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$I.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::IMeetAndChatManager>::GetFallbackContentAsync(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  *a3 = 0LL;
  v5 = a1 + 280;
  if ( !a1 )
    v5 = 288LL;
  v6 = *(_QWORD *)v5;
  try
  {
    winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync(
      v6,
      (winrt::Windows::Foundation::IUnknown *)&v8,
      (__int64)a2);
    *a3 = v8;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
