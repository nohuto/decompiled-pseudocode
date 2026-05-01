/*
 * XREFs of ??$make_event_array@U?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x180183930
 * Callers:
 *     ?add@?$event@U?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@2@@Z @ 0x1801837A0 (-add@-$event@U-$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@W.c)
 *     ?remove@?$event@U?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1804F8154 (-remove@-$event@U-$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Interna.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>>(
        _QWORD *a1,
        unsigned int a2)
{
  unsigned int v2; // ebp
  _DWORD *v4; // rax
  _DWORD *v5; // rsi
  winrt::Windows::Foundation::IUnknown *v6; // rbx
  _QWORD *result; // rax

  v2 = a2;
  v4 = operator new(8LL * a2 + 8);
  v5 = v4;
  *v4 = 1;
  v4[1] = v2;
  if ( v2 )
  {
    v6 = (winrt::Windows::Foundation::IUnknown *)(v4 + 2);
    do
    {
      *(_QWORD *)v6 = 0LL;
      winrt::Windows::Foundation::IUnknown::add_ref(v6);
      v6 = (winrt::Windows::Foundation::IUnknown *)((char *)v6 + 8);
      --v2;
    }
    while ( v2 );
  }
  result = a1;
  *a1 = v5;
  return result;
}
