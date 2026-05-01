/*
 * XREFs of _WindowEventDispatcher::OnShellHookMessage_::_1_::dtor$61 @ 0x180219CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 */

void __fastcall WindowEventDispatcher::OnShellHookMessage_::_1_::dtor_61(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 168) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 168) &= ~8u;
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 176));
  }
}
