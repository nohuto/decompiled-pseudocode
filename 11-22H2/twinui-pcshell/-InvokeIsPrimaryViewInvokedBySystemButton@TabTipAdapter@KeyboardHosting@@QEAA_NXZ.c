/*
 * XREFs of ?InvokeIsPrimaryViewInvokedBySystemButton@TabTipAdapter@KeyboardHosting@@QEAA_NXZ @ 0x180524DC8
 * Callers:
 *     ?UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18051B9E8 (-UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180526850 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapter::InvokeIsPrimaryViewInvokedBySystemButton(
        KeyboardHosting::TabTipAdapter *this)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 16) + 232LL))(*((_QWORD *)this + 16), &v2);
  return v2 != 0;
}
