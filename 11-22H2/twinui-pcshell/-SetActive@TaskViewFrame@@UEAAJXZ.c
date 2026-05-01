/*
 * XREFs of ?SetActive@TaskViewFrame@@UEAAJXZ @ 0x180072290
 * Callers:
 *     <none>
 * Callees:
 *     ?TryActivate@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800722B4 (-TryActivate@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExp.c)
 */

__int64 __fastcall TaskViewFrame::SetActive(TaskViewFrame *this)
{
  const char *v1; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::TryActivate();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xEB,
                           (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
                           v1);
  }
  return result;
}
