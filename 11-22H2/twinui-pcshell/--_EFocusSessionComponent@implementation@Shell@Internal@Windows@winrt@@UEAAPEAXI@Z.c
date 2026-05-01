/*
 * XREFs of ??_EFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x180391924
 * Callers:
 *     ??_EFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z @ 0x18028E2B0 (--_EFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x1800DA4A8 (--1immersive_shell_component@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::FocusSessionComponent *__fastcall winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::FocusSessionComponent *this,
        char a2)
{
  winrt::Windows::Foundation::IUnknown *v4; // rcx

  v4 = (winrt::Windows::Internal::Shell::implementation::FocusSessionComponent *)((char *)this + 96);
  if ( *(_QWORD *)v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v4);
  winrt::immersive_shell_component::~immersive_shell_component(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
