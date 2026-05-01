/*
 * XREFs of ?_HandleHide@CApplicationManager@@AEAAXPEAUHWND__@@@Z @ 0x1801966DC
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800C6BA0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CApplicationManager::_HandleHide(CApplicationManager *this, HWND a2)
{
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 67) + 64LL))(*((_QWORD *)this + 67)) )
    (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 74) + 32LL))(*((_QWORD *)this + 74), a2);
}
