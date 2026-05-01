/*
 * XREFs of ?Context@?$consume_WindowsUdk_UI_Shell_IDismissShellViewOptions@UIDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBUhstring@param@3@@Z @ 0x18049A410
 * Callers:
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1::operator() @ 0x1801B1B90 (_lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewOptions<winrt::WindowsUdk::UI::Shell::IDismissShellViewOptions>::Context(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 72LL))(*a1, *a2);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
