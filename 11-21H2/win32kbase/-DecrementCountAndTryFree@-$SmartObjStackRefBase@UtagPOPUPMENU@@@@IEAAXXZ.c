/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C0141A04
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C01418EC (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 * Callees:
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C008AF34 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 */

void __fastcall SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(
        NSInstrumentation::CLeakTrackingAllocator *a1)
{
  if ( *(_UNKNOWN **)a1 != &gSmartObjNullRef && !--*(_DWORD *)(*(_QWORD *)a1 + 8LL) )
  {
    if ( *(_BYTE *)(*(_QWORD *)a1 + 12LL) )
      NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
        a1,
        (char *)gpStackRefLookAside,
        *(struct _SLIST_ENTRY **)a1);
  }
}
