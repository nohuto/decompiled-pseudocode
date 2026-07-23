/*
 * XREFs of VfFlushDmaBuffer @ 0x1405CEDE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ViGetRealDmaAdapter @ 0x140AC9178 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfFlushDmaBuffer(int a1, __int64 a2, char a3)
{
  __int64 RealDmaAdapter; // rax
  __int64 v6; // r8

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  LOBYTE(v6) = a3;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(RealDmaAdapter + 8) + 240LL))(
           RealDmaAdapter,
           a2,
           v6);
}
