/*
 * XREFs of ?ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA?AVImpersonationReverter@123@XZ @ 0x18012E5C8
 * Callers:
 *     ?CheckClientCapability@@YAJPEBVBamoInputObserverClientProxy@@PEBG@Z @ 0x18012E318 (-CheckClientCapability@@YAJPEBVBamoInputObserverClientProxy@@PEBG@Z.c)
 *     ?CheckCapability@ShellGesturesClientProxy@@AEAAJXZ @ 0x18014F354 (-CheckCapability@ShellGesturesClientProxy@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall Microsoft::Bamo::BaseBamoConnection::ImpersonateCaller(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 48) + 328LL))(*(_QWORD *)(v3 + 48));
  return a2;
}
