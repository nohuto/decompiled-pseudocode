/*
 * XREFs of ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C011AC34
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00F6EF4 (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     UmfdSessionUninitialize @ 0x1C011D640 (UmfdSessionUninitialize.c)
 *     ??1?$CAutoDestroy@VCMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C02DC8CC (--1-$CAutoDestroy@VCMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 * Callees:
 *     ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1C011AC74 (-Destroy@CEventPool@@SAXQEAV1@@Z.c)
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C011ACCC (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 */

void __fastcall CMultipleConsumerWorkQueue::Destroy(void **pv)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *pv;
  if ( v2 )
    CWorkItemQueue::Destroy(v2);
  v3 = pv[1];
  if ( v3 )
    CEventPool::Destroy(v3);
  EngFreeMem(pv);
}
