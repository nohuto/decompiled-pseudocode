/*
 * XREFs of ??_E?$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805C0C4C
 * Callers:
 *     ??_E?$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@W7EAAPEAXI@Z @ 0x18020FDF0 (--_E-$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805C07D0 (--1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl

  v4 = a2;
  winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::~MeetAndChatIris(a1, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(a1);
  return a1;
}
