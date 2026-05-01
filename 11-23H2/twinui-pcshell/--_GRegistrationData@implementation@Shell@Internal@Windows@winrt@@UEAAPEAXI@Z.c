/*
 * XREFs of ??_GRegistrationData@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1807057B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1RegistrationData@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1807053D8 (--1RegistrationData@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

volatile signed __int32 **__fastcall winrt::Windows::Internal::Shell::implementation::RegistrationData::`scalar deleting destructor'(
        volatile signed __int32 **this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::RegistrationData::~RegistrationData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
