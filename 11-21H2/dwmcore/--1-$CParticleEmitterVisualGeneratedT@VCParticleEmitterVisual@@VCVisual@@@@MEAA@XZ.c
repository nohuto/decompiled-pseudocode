/*
 * XREFs of ??1?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAA@XZ @ 0x18022D550
 * Callers:
 *     ??1CParticleEmitterVisual@@UEAA@XZ @ 0x18022D634 (--1CParticleEmitterVisual@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x18019A7F4 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 */

void __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::~CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>(
        CVisual *this)
{
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 103));
  *((_QWORD *)this + 103) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 104));
  *((_QWORD *)this + 104) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 105));
  *((_QWORD *)this + 105) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 106));
  *((_QWORD *)this + 106) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 107));
  *((_QWORD *)this + 107) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 108));
  *((_QWORD *)this + 108) = 0LL;
  CResource::UnRegisterNotifiers<CSceneComponent>(this, (struct CResource ***)this + 109);
  if ( *((_QWORD *)this + 109) )
  {
    std::_Deallocate<16,0>(
      *((void **)this + 109),
      (*((_QWORD *)this + 111) - *((_QWORD *)this + 109)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 109) = 0LL;
    *((_QWORD *)this + 110) = 0LL;
    *((_QWORD *)this + 111) = 0LL;
  }
  CVisual::~CVisual(this);
}
