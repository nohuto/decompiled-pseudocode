/*
 * XREFs of ??_GMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1806B0C6C
 * Callers:
 *     ??_EMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@WDA@EAAPEAXI@Z @ 0x1802AC3A0 (--_EMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180129368 (--1MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::~MeetAndChatManager(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
