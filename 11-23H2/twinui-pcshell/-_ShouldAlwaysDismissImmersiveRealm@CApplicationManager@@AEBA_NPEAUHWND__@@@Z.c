/*
 * XREFs of ?_ShouldAlwaysDismissImmersiveRealm@CApplicationManager@@AEBA_NPEAUHWND__@@@Z @ 0x1803A4560
 * Callers:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x1800D0870 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CApplicationManager::_ShouldAlwaysDismissImmersiveRealm(CApplicationManager *this, HWND a2)
{
  HWND v3; // rax
  char v4; // cl

  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 94) + 24LL))(*((_QWORD *)this + 94));
  v4 = 1;
  if ( a2 != v3 )
    return a2 == (HWND)1;
  return v4;
}
