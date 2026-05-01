/*
 * XREFs of wil::details::ScopeExitFn__lambda_33e1c56ebc0f688b14996b627787f4f7___::_ScopeExitFn__lambda_33e1c56ebc0f688b14996b627787f4f7___ @ 0x1801E8CA4
 * Callers:
 *     _XamlAltTabViewHost::DisplayAltTab_::_1_::dtor$0 @ 0x1801E8DA8 (_XamlAltTabViewHost--DisplayAltTab_--_1_--dtor$0.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180231AB0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x1805FC948 (-Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_33e1c56ebc0f688b14996b627787f4f7___::_ScopeExitFn__lambda_33e1c56ebc0f688b14996b627787f4f7___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    XamlSwitcherTelemetry::ShowAltTab::Stop((XamlSwitcherTelemetry::ShowAltTab *)(*(_QWORD *)a1 + 184LL), 0);
    return CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(*(_QWORD *)a1);
  }
  return result;
}
