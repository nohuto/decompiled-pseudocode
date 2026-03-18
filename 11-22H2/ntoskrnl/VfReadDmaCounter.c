/*
 * XREFs of VfReadDmaCounter @ 0x140AC8810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140AC572C (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140AC9E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140ACA158 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfReadDmaCounter(int a1)
{
  __int64 RealDmaAdapter; // rax

  if ( ViGetAdapterInformationInternal(a1) )
    VF_ASSERT_MAX_IRQL();
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(RealDmaAdapter + 8) + 80LL))(RealDmaAdapter);
}
