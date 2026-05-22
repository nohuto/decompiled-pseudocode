/*
 * XREFs of ??R?$default_delete@VSystemControlDeviceCollection@@@std@@QEBAXPEAVSystemControlDeviceCollection@@@Z @ 0x1800C6BD0
 * Callers:
 *     ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18002AB0C (-Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 *     ??1?$unique_ptr@VSystemControlDeviceCollection@@U?$default_delete@VSystemControlDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800C6B34 (--1-$unique_ptr@VSystemControlDeviceCollection@@U-$default_delete@VSystemControlDeviceCollection.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<SystemControlDeviceCollection>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL))(a2, 1LL);
  return result;
}
