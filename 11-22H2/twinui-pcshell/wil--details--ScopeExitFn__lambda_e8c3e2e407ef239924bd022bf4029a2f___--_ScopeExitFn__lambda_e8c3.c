/*
 * XREFs of wil::details::ScopeExitFn__lambda_e8c3e2e407ef239924bd022bf4029a2f___::_ScopeExitFn__lambda_e8c3e2e407ef239924bd022bf4029a2f___ @ 0x180572914
 * Callers:
 *     _CSwitchItemElement::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1802E34E1 (_CSwitchItemElement--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _SwitchItemThumbnailElement::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1802E5733 (_SwitchItemThumbnailElement--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CSwitchItemGrid::SetItems_::_1_::dtor$1 @ 0x18057A58E (_CSwitchItemGrid--SetItems_--_1_--dtor$1.c)
 *     _CMultitaskingViewFrameElement::RuntimeClassInitialize_::_1_::dtor$6 @ 0x18057E3EE (_CMultitaskingViewFrameElement--RuntimeClassInitialize_--_1_--dtor$6.c)
 *     _CVirtualDesktopBarElement::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180581B7C (_CVirtualDesktopBarElement--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CScrollButtonContainer::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18058BA9D (_CScrollButtonContainer--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CVirtualDesktopContainerElement::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180592C4E (_CVirtualDesktopContainerElement--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_e8c3e2e407ef239924bd022bf4029a2f___::_ScopeExitFn__lambda_e8c3e2e407ef239924bd022bf4029a2f___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 80LL))(*(_QWORD *)a1);
  }
  return result;
}
