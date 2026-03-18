/*
 * XREFs of ?ReleaseAllReferences@CNaturalAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0234340
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000B260 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CNaturalAnimationMarshaler::ReleaseAllReferences(
        DirectComposition::CNaturalAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  char *v4; // rdx

  v4 = (char *)*((_QWORD *)this + 24);
  if ( v4 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v4);
    *((_QWORD *)this + 24) = 0LL;
  }
  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(this, a2);
}
