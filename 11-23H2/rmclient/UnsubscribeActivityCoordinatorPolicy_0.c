/*
 * XREFs of UnsubscribeActivityCoordinatorPolicy_0 @ 0x1800162F4
 * Callers:
 *     UnsubscribeActivityCoordinatorPolicy @ 0x180015FB0 (UnsubscribeActivityCoordinatorPolicy.c)
 *     sub_1800161E4 @ 0x1800161E4 (sub_1800161E4.c)
 * Callees:
 *     CrmActivityFree @ 0x1800086C0 (CrmActivityFree.c)
 *     HamFreeBuffer_0 @ 0x180009A20 (HamFreeBuffer_0.c)
 *     sub_180016120 @ 0x180016120 (sub_180016120.c)
 */

__int64 __fastcall UnsubscribeActivityCoordinatorPolicy_0(__int64 a1)
{
  void *v2; // rcx

  if ( *(_DWORD *)(a1 + 32) == GetCurrentThreadId() )
    __fastfail(0x38u);
  v2 = *(void **)(a1 + 8);
  if ( v2 )
    CrmActivityFree(v2);
  if ( *(_QWORD *)a1 )
    sub_180016120(*(void **)a1);
  HamFreeBuffer_0((void *)a1);
  return 0LL;
}
