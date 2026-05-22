/*
 * XREFs of ??$ReleaseInterface@VCSharedAllocation@DirectComposition@@@@YAXAEAPEAVCSharedAllocation@DirectComposition@@@Z @ 0x180064104
 * Callers:
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 *     ?Reset@CAnimationData@DirectComposition@@QEAAXXZ @ 0x18006409C (-Reset@CAnimationData@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseResources@KeyFrameAnimator@Composition@UI@Windows@@AEAAXXZ @ 0x18016110C (-ReleaseResources@KeyFrameAnimator@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?Destroy@InjectionAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x18019B810 (-Destroy@InjectionAnimator@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?RuntimeClassInitialize@InjectionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVInjectionAnimation@234@@Z @ 0x18019B838 (-RuntimeClassInitialize@InjectionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVIn.c)
 *     ?ReleaseResources@ExpressionAnimator@Composition@UI@Windows@@AEAAXXZ @ 0x18019BAE0 (-ReleaseResources@ExpressionAnimator@Composition@UI@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<DirectComposition::CSharedAllocation>(
        DirectComposition::CDelayedDestructionObject **a1)
{
  DirectComposition::CDelayedDestructionObject *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = DirectComposition::CDelayedDestructionObject::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
