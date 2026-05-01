/*
 * XREFs of ?_OnKeyUp@CMultitaskingViewFrame@@AEAA_NI@Z @ 0x1804B28EC
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802337B0 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetModifierKeyState@ElementHelpers@@YA?AW4ModifierKeys@@XZ @ 0x1804C5234 (-GetModifierKeyState@ElementHelpers@@YA-AW4ModifierKeys@@XZ.c)
 */

bool __fastcall CMultitaskingViewFrame::_OnKeyUp(CMultitaskingViewFrame *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD, _QWORD); // rbx
  unsigned int ModifierKeyState; // eax

  v2 = *((_QWORD *)this + 315);
  if ( !v2 )
    return 0;
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 248LL);
  ModifierKeyState = ElementHelpers::GetModifierKeyState();
  return v4(v2, a2, ModifierKeyState);
}
