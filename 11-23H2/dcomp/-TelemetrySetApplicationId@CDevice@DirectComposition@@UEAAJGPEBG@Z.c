/*
 * XREFs of ?TelemetrySetApplicationId@CDevice@DirectComposition@@UEAAJGPEBG@Z @ 0x180084AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?FlushKernelCommands@CDevice@DirectComposition@@AEAAX_N@Z @ 0x180030EB4 (-FlushKernelCommands@CDevice@DirectComposition@@AEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::TelemetrySetApplicationId(
        DirectComposition::CDevice *this,
        unsigned __int16 a2,
        const unsigned __int16 *a3)
{
  unsigned int v6; // ebx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (_QWORD *)((char *)this + 56);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 56));
  DirectComposition::CDevice::FlushKernelCommands((DirectComposition::CDevice *)((char *)this - 40), 0);
  if ( a2 >= 0x96u )
    a2 = 150;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, const unsigned __int16 *))(**((_QWORD **)this + 15) + 48LL))(
         *((_QWORD *)this + 15),
         2LL * a2,
         a3);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v8);
  return v6;
}
