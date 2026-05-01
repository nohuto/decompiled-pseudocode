/*
 * XREFs of ??_G?$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x1800CC0B8
 * Callers:
 *     ??_E?$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@WDA@EAAPEAXI@Z @ 0x18020FDD0 (--_E-$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@det.c)
 * Callees:
 *     ??1?$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1800CC644 (--1-$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@deta.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x118uLL);
  return a1;
}
