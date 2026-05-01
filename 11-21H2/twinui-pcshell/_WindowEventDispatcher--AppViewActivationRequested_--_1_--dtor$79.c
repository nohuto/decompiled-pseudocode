/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$79 @ 0x1802197B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 */

void __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_79(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 124) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 124) &= ~8u;
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a2 + 456));
  }
}
