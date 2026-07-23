/*
 * XREFs of VfGetDmaDomain @ 0x1405CEE30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ViGetRealDmaAdapter @ 0x140AC9178 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfGetDmaDomain(int a1)
{
  __int64 RealDmaAdapter; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(RealDmaAdapter + 8) + 264LL))(RealDmaAdapter);
}
