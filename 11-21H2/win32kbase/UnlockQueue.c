/*
 * XREFs of UnlockQueue @ 0x1C0141DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C008AF34 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 */

void __fastcall UnlockQueue(NSInstrumentation::CLeakTrackingAllocator *a1)
{
  if ( (*((_DWORD *)a1 + 98))-- == 1 && (*((_DWORD *)a1 + 97) & 0x4000000) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
      a1,
      (char *)QLookaside,
      (struct _SLIST_ENTRY *)a1);
}
