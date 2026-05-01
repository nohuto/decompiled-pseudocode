/*
 * XREFs of ?Close@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@@impl@winrt@@UEAAHXZ @ 0x1804F74D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Close@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1804F7528 (-Close@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable>::Close(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *)((a1 - 24) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::Close(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
