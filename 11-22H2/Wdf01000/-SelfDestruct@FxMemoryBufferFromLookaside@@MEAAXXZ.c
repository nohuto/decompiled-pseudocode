/*
 * XREFs of ?SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ @ 0x1C000E590
 * Callers:
 *     ?SelfDestruct@FxMemoryBufferFromPoolLookaside@@MEAAXXZ @ 0x1C000E600 (-SelfDestruct@FxMemoryBufferFromPoolLookaside@@MEAAXXZ.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004920 (--1FxObject@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxMemoryBufferFromLookaside::SelfDestruct(
        FxMemoryBufferFromLookaside *this,
        unsigned int a2,
        unsigned int a3)
{
  FxLookasideList *m_pLookaside; // rbx

  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this, a2, a3);
  m_pLookaside = this->m_pLookaside;
  m_pLookaside->Reclaim(m_pLookaside, this);
  m_pLookaside->Release(
    m_pLookaside,
    this,
    237,
    "minkernel\\wdf\\framework\\shared\\core\\fxmemorybufferfromlookaside.cpp");
}
