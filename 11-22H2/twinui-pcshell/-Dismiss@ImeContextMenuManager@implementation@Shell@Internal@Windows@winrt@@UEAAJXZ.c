/*
 * XREFs of ?Dismiss@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1802EB6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DismissContextMenu@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x18027637C (-DismissContextMenu@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfi.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::Dismiss(
        winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *this)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu((__int64)this, &v2);
  return 0LL;
}
