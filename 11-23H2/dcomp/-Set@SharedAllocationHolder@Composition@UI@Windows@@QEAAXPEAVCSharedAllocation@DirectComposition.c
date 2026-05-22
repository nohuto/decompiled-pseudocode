/*
 * XREFs of ?Set@SharedAllocationHolder@Composition@UI@Windows@@QEAAXPEAVCSharedAllocation@DirectComposition@@@Z @ 0x180176BD0
 * Callers:
 *     ?MarshalSharedData@SharedSectionWrapper@Composition@UI@Windows@@AEAAJPEAVCompositor@234@V?$span@E$0?0@gsl@@@Z @ 0x18018BE08 (-MarshalSharedData@SharedSectionWrapper@Composition@UI@Windows@@AEAAJPEAVCompositor@234@V-$span@.c)
 * Callees:
 *     ?Destroy@SharedAllocationHolder@Composition@UI@Windows@@QEAAXXZ @ 0x1800191D0 (-Destroy@SharedAllocationHolder@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::SharedAllocationHolder::Set(
        DirectComposition::CDelayedDestructionObject **this,
        struct DirectComposition::CSharedAllocation *a2)
{
  DirectComposition::CDelayedDestructionObject *v4; // rcx

  Windows::UI::Composition::SharedAllocationHolder::Destroy(this);
  *this = a2;
  if ( a2 )
  {
    CMILRefCountImpl::AddReference((struct DirectComposition::CSharedAllocation *)((char *)a2 + 8));
    v4 = *(DirectComposition::CDelayedDestructionObject **)(*((_QWORD *)*this + 6) + 24LL);
    this[1] = v4;
    (*(void (__fastcall **)(DirectComposition::CDelayedDestructionObject *))(*(_QWORD *)v4 + 8LL))(v4);
  }
}
