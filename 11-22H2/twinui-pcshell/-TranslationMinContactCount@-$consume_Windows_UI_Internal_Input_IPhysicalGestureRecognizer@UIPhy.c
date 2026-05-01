/*
 * XREFs of ?TranslationMinContactCount@?$consume_Windows_UI_Internal_Input_IPhysicalGestureRecognizer@UIPhysicalGestureRecognizer@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x180173EE8
 * Callers:
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x1801734F4 (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Internal_Input_IPhysicalGestureRecognizer<winrt::Windows::UI::Internal::Input::IPhysicalGestureRecognizer>::TranslationMinContactCount(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 168LL))(*a1, 3LL);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
