/*
 * XREFs of ?OnStreamGroupSensitivityToPeriodicityChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180109400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSaDeviceProxy::OnStreamGroupSensitivityToPeriodicityChanged(
        CSaDeviceProxy *this,
        struct IStreamGroupProxy *a2)
{
  CSaDeviceProxy *v2; // rbx
  char v3; // al

  v2 = (CSaDeviceProxy *)((char *)this - 8);
  v3 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 248LL))(a2);
  CSaDeviceProxy::UpdateFormatAndPeriodicitySensitivity(v2, 0, v3 != 0 ? 1 : -1, 0);
}
