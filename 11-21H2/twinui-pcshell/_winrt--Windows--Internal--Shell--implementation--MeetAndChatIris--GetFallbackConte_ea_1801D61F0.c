/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1801D61F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$producer_ref@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x180143220 (--1-$producer_ref@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@Q.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync__ResumeCoro_1_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 96) = *(_QWORD *)(a2 + 176) + 80LL;
  winrt::impl::producer_ref<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>::~producer_ref<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>(*(_QWORD **)(a2 + 96));
}
