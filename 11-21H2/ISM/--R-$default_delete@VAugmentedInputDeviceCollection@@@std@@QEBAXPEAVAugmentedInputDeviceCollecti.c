/*
 * XREFs of ??R?$default_delete@VAugmentedInputDeviceCollection@@@std@@QEBAXPEAVAugmentedInputDeviceCollection@@@Z @ 0x1800BAD74
 * Callers:
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18002A788 (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VAugmentedInputDeviceCollection@@U?$default_delete@VAugmentedInputDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800BACB8 (--1-$unique_ptr@VAugmentedInputDeviceCollection@@U-$default_delete@VAugmentedInputDeviceCollecti.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<AugmentedInputDeviceCollection>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL))(a2, 1LL);
  return result;
}
