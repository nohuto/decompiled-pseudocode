/*
 * XREFs of ?ShowContextMenu@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x18027666C
 * Callers:
 *     ?Show@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x180700C70 (-Show@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu$_InitCoro$2 @ 0x1802763E0 (winrt--Windows--Internal--Shell--implementation--ImeContextMenuManager--ShowContextMenu$_InitCor.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu(
        __int64 a1,
        _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+98h] [rbp+10h] BYREF

  v4 = operator new(0x52uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu__InitCoro_2(
    &v6,
    (__int64)v4,
    a2,
    a1);
  return a2;
}
