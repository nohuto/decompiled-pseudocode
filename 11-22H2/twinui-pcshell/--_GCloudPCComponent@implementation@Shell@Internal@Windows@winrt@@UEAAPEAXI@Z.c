/*
 * XREFs of ??_GCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1807058D0
 * Callers:
 *     ??_ECloudPCComponent@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z @ 0x1802ACE20 (--_ECloudPCComponent@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801AFEE8 (--1CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::CloudPCComponent *__fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::CloudPCComponent::~CloudPCComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
