/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x18025636E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1806C7548 (--1-$vector@UIAsyncAction@Foundation@Windows@winrt@@V-$allocator@UIAsyncAction@Foundation@Window.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync__ResumeCoro_1_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 176) + 48LL;
  return std::vector<winrt::Windows::Foundation::IAsyncAction>::~vector<winrt::Windows::Foundation::IAsyncAction>(*(_QWORD *)(a2 + 80));
}
