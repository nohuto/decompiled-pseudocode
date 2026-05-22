/*
 * XREFs of ?GetTokenSynchronizationId@CDevice@DirectComposition@@QEAAJPEA_K@Z @ 0x1800F1F24
 * Callers:
 *     ?Present@CDeviceTextureManager@DirectComposition@@QEAAJXZ @ 0x180098D6C (-Present@CDeviceTextureManager@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::GetTokenSynchronizationId(
        DirectComposition::CDevice *this,
        unsigned __int64 *a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // rbx

  result = 0LL;
  v3 = (unsigned __int64 *)((char *)this + 640);
  if ( !*((_QWORD *)this + 80) )
    result = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 20) + 72LL))(
               *((_QWORD *)this + 20),
               v3);
  *a2 = *v3;
  return result;
}
