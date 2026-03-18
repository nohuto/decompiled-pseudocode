/*
 * XREFs of VfJoinDmaDomain @ 0x1405CE8F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     ViGetRealDmaAdapter @ 0x140AC9188 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfJoinDmaDomain(int a1, __int64 a2)
{
  __int64 RealDmaAdapter; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(RealDmaAdapter + 8) + 248LL))(RealDmaAdapter, a2);
}
