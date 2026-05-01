/*
 * XREFs of _winrt::impl::root_implements_winrt::immersive_shell_component_IObjectWithSite_IServiceProvider_IImmersiveShellComponent_winrt::Windows::Foundation::IInspectable_::get_weak_winrt::Windows::Internal::Shell::implementation::MeetAndChatManager__::_1_::dtor$1 @ 0x18021E135
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180169864 (--1-$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::root_implements_winrt::immersive_shell_component_IObjectWithSite_IServiceProvider_IImmersiveShellComponent_winrt::Windows::Foundation::IInspectable_::get_weak_winrt::Windows::Internal::Shell::implementation::MeetAndChatManager__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>(*(__int64 **)(a2 + 88));
  }
  return result;
}
