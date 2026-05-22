/*
 * XREFs of ??0?$com_ptr_t@VPenDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVPenDeviceManager@@@Z @ 0x1800F3814
 * Callers:
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800F3990 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800F3B20 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800F3C20 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z @ 0x1801B5454 (-UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<PenDeviceManager,wil::err_returncode_policy>::com_ptr_t<PenDeviceManager,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (**(void (__fastcall ***)(__int64))(a2 + 16))(a2 + 16);
  return a1;
}
