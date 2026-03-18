/*
 * XREFs of VfLeaveDmaDomain @ 0x1405CE930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     ViGetRealDmaAdapter @ 0x140AC9188 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfLeaveDmaDomain(int a1)
{
  __int64 RealDmaAdapter; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(RealDmaAdapter + 8) + 256LL))(RealDmaAdapter);
}
