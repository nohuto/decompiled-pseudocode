/*
 * XREFs of ?ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA?AVImpersonationReverter@123@XZ @ 0x18004CE0C
 * Callers:
 *     ?CheckCapability@ShellGesturesClientProxy@@AEAAJXZ @ 0x18004C9BC (-CheckCapability@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?OnConnected@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180071AC0 (-OnConnected@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 *     ?CheckClientCapability@@YAJPEBVBamoInputObserverClientProxy@@PEBG@Z @ 0x180156CC8 (-CheckClientCapability@@YAJPEBVBamoInputObserverClientProxy@@PEBG@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall Microsoft::Bamo::BaseBamoConnection::ImpersonateCaller(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  *a2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 48) + 328LL))(*(_QWORD *)(v3 + 48));
  return a2;
}
