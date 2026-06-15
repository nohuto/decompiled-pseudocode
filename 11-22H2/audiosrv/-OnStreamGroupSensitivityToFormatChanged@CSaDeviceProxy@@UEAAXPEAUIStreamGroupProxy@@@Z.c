/*
 * XREFs of ?OnStreamGroupSensitivityToFormatChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180109400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSaDeviceProxy::OnStreamGroupSensitivityToFormatChanged(
        CSaDeviceProxy *this,
        struct IStreamGroupProxy *a2)
{
  CSaDeviceProxy *v2; // rbx
  char v3; // al

  v2 = (CSaDeviceProxy *)((char *)this - 8);
  v3 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 256LL))(a2);
  CSaDeviceProxy::UpdateFormatAndPeriodicitySensitivity(v2, v3 != 0 ? 1 : -1, 0, 0);
}
