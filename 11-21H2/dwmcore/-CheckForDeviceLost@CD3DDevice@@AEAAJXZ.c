/*
 * XREFs of ?CheckForDeviceLost@CD3DDevice@@AEAAJXZ @ 0x1800808A0
 * Callers:
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x18007F3E4 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::CheckForDeviceLost(CD3DDevice *this)
{
  if ( *((int *)this + 272) >= 0
    && (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 69) + 312LL))(*((_QWORD *)this + 69)) < 0 )
  {
    *((_DWORD *)this + 272) = -2003304307;
  }
  return *((unsigned int *)this + 272);
}
