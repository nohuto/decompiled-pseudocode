/*
 * XREFs of ??1MULTIDEVLOCKOBJ@@QEAA@XZ @ 0x1C0076CF0
 * Callers:
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0076CBC (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0076D18 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall MULTIDEVLOCKOBJ::~MULTIDEVLOCKOBJ(MULTIDEVLOCKOBJ *this)
{
  void *v2; // rdx

  MULTIDEVLOCKOBJ::vUnlock(this);
  if ( (*(_DWORD *)this & 2) != 0 )
  {
    v2 = (void *)*((_QWORD *)this + 1);
    if ( v2 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v2);
  }
}
