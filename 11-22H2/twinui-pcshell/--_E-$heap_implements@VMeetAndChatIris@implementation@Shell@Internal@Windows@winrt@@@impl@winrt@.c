/*
 * XREFs of ??_E?$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801AB130
 * Callers:
 *     ??_E?$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@W7EAAPEAXI@Z @ 0x1802AC380 (--_E-$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@_ea_1802AC380.c)
 * Callees:
 *     ??1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801AB16C (--1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::~MeetAndChatIris(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x98uLL);
  return a1;
}
