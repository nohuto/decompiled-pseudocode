/*
 * XREFs of ?GetWaitHandles@SipcEndpoint@@QEBAXAEAPEAX00@Z @ 0x1800FEC7C
 * Callers:
 *     ?InitializeWaitHandles@EndpointListEntry@SipcServer@@QEAAJXZ @ 0x1800FED74 (-InitializeWaitHandles@EndpointListEntry@SipcServer@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SipcEndpoint::GetWaitHandles(SipcEndpoint *this, void **a2, void **a3, void **a4)
{
  *a2 = *(void **)(*((_QWORD *)this + 3) + 8LL);
  *a3 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3));
  *a4 = (void *)*((_QWORD *)this + 7);
}
