/*
 * XREFs of Win32UAFMFreeToPagedLookasideList @ 0x1C0167630
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C008AF34 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C0146494 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __fastcall Win32UAFMFreeToPagedLookasideList(char **a1, __int64 a2, unsigned int a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v5; // rcx

  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(a2, a3);
  *(_DWORD *)(a2 - 4) = 0;
  NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(v5, *a1, (struct _SLIST_ENTRY *)(a2 - 16));
}
