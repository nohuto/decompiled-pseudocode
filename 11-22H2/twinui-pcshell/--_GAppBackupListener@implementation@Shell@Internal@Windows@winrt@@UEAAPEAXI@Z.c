/*
 * XREFs of ??_GAppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1806F0E6C
 * Callers:
 *     ??_EAppBackupListener@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z @ 0x1802ACBA0 (--_EAppBackupListener@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180129678 (--1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::AppBackupListener *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::~AppBackupListener(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
