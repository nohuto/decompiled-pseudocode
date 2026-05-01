/*
 * XREFs of ?InitializeAsync@FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801CF800
 * Callers:
 *     ?perform_delayed_initialization@FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801BD480 (-perform_delayed_initialization@FocusSessionComponent@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_InitCoro$2 @ 0x1801CF54C (winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--InitializeAsync$_InitCor.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync(
        __int64 a1,
        _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+88h] [rbp+10h] BYREF

  v4 = operator new(0x4AuLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync__InitCoro_2(
    &v6,
    (__int64)v4,
    a2,
    a1);
  return a2;
}
