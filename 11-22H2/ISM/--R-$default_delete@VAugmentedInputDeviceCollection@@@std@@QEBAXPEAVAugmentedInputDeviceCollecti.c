/*
 * XREFs of ??R?$default_delete@VAugmentedInputDeviceCollection@@@std@@QEBAXPEAVAugmentedInputDeviceCollection@@@Z @ 0x1800E2D64
 * Callers:
 *     ??1?$unique_ptr@VAugmentedInputDeviceCollection@@U?$default_delete@VAugmentedInputDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800E2CEC (--1-$unique_ptr@VAugmentedInputDeviceCollection@@U-$default_delete@VAugmentedInputDeviceCollecti.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<AugmentedInputDeviceCollection>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL))(a2, 1LL);
  return result;
}
