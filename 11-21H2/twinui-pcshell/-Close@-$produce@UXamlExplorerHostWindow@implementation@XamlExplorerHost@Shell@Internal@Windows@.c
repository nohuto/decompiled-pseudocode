/*
 * XREFs of ?Close@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@@impl@winrt@@UEAAHXZ @ 0x180421BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Close@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180421C38 (-Close@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable>::Close(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *)((a1 - 24) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::Close(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
