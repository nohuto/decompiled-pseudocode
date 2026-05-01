/*
 * XREFs of ?add_TakeFocusRequested@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1800FBC50
 * Callers:
 *     <none>
 * Callees:
 *     ?TakeFocusRequested@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@67@@Z @ 0x1800FBA04 (-TakeFocusRequested@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@W.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::add_TakeFocusRequested(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, __int64 *, __int64 *),
        PVOID *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  PVOID v5; // [rsp+30h] [rbp+8h] BYREF
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  try
  {
    *a3 = *winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::TakeFocusRequested(
             v3,
             &v5,
             &v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
