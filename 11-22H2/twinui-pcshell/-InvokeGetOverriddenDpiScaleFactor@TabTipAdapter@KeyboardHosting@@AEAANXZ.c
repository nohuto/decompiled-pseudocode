/*
 * XREFs of ?InvokeGetOverriddenDpiScaleFactor@TabTipAdapter@KeyboardHosting@@AEAANXZ @ 0x18014B5FC
 * Callers:
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18014B4E8 (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

double __fastcall KeyboardHosting::TabTipAdapter::InvokeGetOverriddenDpiScaleFactor(
        KeyboardHosting::TabTipAdapter *this)
{
  double v2; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, double *))(**((_QWORD **)this + 16) + 280LL))(*((_QWORD *)this + 16), &v2);
  return v2;
}
