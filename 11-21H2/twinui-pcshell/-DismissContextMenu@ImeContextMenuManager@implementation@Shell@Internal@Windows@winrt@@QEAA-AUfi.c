/*
 * XREFs of ?DismissContextMenu@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x1801E8478
 * Callers:
 *     ?Dismiss@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1805E31F0 (-Dismiss@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu$_InitCoro$2 @ 0x1801E81C0 (winrt--Windows--Internal--Shell--implementation--ImeContextMenuManager--DismissContextMenu$_Init.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu(
        __int64 a1,
        _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+118h] [rbp+10h] BYREF

  v4 = operator new(0xD9uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu__InitCoro_2(
    &v6,
    (__int64)v4,
    a2,
    a1);
  return a2;
}
