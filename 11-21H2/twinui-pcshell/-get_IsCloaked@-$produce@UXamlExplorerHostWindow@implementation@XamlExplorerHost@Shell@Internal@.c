/*
 * XREFs of ?get_IsCloaked@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180422160
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18001F600 (-FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Inte.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::get_IsCloaked(
        unsigned __int64 a1,
        bool *a2)
{
  HWND *v3; // rbx
  HRESULT WindowAttribute; // eax
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  v3 = (HWND *)((a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64));
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::FailFastIfNotOnCreationThread((winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *)v3);
  WindowAttribute = DwmGetWindowAttribute(v3[4], 0xDu, &pvAttribute, 4u);
  try
  {
    if ( WindowAttribute < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xDE,
        (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostislandwindow.cpp",
        (const char *)(unsigned int)WindowAttribute,
        v6);
    *a2 = pvAttribute != 0;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&pvAttribute);
  }
  return result;
}
