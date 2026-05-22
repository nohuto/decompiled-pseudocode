/*
 * XREFs of ?GenerateRouterDeviceId@GameControllerRawInputProvider@@UEAAIXZ @ 0x1800B3C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GameControllerRawInputProvider::GenerateRouterDeviceId(GameControllerRawInputProvider *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3));
}
