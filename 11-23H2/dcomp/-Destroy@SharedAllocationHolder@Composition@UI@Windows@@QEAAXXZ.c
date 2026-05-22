/*
 * XREFs of ?Destroy@SharedAllocationHolder@Composition@UI@Windows@@QEAAXXZ @ 0x1800191D0
 * Callers:
 *     ?Destroy@CompositionEffectFactory@Composition@UI@Windows@@UEAAXXZ @ 0x180019160 (-Destroy@CompositionEffectFactory@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?MarshalEffectDescription@CompositionEffectFactory@Composition@UI@Windows@@AEAAJXZ @ 0x18001A5B4 (-MarshalEffectDescription@CompositionEffectFactory@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?Set@SharedAllocationHolder@Composition@UI@Windows@@QEAAXPEAVCSharedAllocation@DirectComposition@@@Z @ 0x180176BD0 (-Set@SharedAllocationHolder@Composition@UI@Windows@@QEAAXPEAVCSharedAllocation@DirectComposition.c)
 *     ?Destroy@SharedSectionWrapper@Composition@UI@Windows@@UEAAXXZ @ 0x18018BDE0 (-Destroy@SharedSectionWrapper@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?MarshalSharedData@SharedSectionWrapper@Composition@UI@Windows@@AEAAJPEAVCompositor@234@V?$span@E$0?0@gsl@@@Z @ 0x18018BE08 (-MarshalSharedData@SharedSectionWrapper@Composition@UI@Windows@@AEAAJPEAVCompositor@234@V-$span@.c)
 * Callees:
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::SharedAllocationHolder::Destroy(
        DirectComposition::CDelayedDestructionObject **this)
{
  DirectComposition::CDelayedDestructionObject *v2; // rcx
  DirectComposition::CDelayedDestructionObject *v3; // rcx

  v2 = *this;
  if ( v2 )
  {
    DirectComposition::CDelayedDestructionObject::Release(v2);
    v3 = this[1];
    *this = 0LL;
    (*(void (__fastcall **)(DirectComposition::CDelayedDestructionObject *))(*(_QWORD *)v3 + 16LL))(v3);
    this[1] = 0LL;
  }
}
