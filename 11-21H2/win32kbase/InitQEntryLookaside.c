/*
 * XREFs of InitQEntryLookaside @ 0x1C02E364C
 * Callers:
 *     Win32UserInitialize @ 0x1C02E231C (Win32UserInitialize.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C00BC680 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

__int64 __fastcall InitQEntryLookaside(NSInstrumentation::CLeakTrackingAllocator *a1)
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rcx

  QEntryLookaside = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                      a1,
                      0xA0uLL,
                      1634497365,
                      0x6D717355u,
                      0x10u);
  if ( QEntryLookaside
    && (QLookaside = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                       v1,
                       0x1E8uLL,
                       1634497365,
                       0x75717355u,
                       0x10u)) != 0LL )
  {
    return 0LL;
  }
  else
  {
    return 3221225495LL;
  }
}
