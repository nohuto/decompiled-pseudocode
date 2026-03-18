/*
 * XREFs of ??1CParticleEmitterVisual@@UEAA@XZ @ 0x18022D634
 * Callers:
 *     ??_ECParticleEmitterVisual@@UEAAPEAXI@Z @ 0x18022DA50 (--_ECParticleEmitterVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??R?$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z @ 0x18019E624 (--R-$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z.c)
 *     ??1ParticleCollection@CParticleEmitterVisual@@QEAA@XZ @ 0x18022D6F4 (--1ParticleCollection@CParticleEmitterVisual@@QEAA@XZ.c)
 */

void __fastcall CParticleEmitterVisual::~CParticleEmitterVisual(CParticleEmitterVisual *this)
{
  __int64 v1; // rdx
  void *v3; // rcx
  void *v4; // rcx

  v1 = *((_QWORD *)this + 803);
  if ( v1 )
    std::default_delete<EmitterShapes::CSpawner>::operator()((__int64)this, v1);
  v3 = (void *)*((_QWORD *)this + 173);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 175) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 173) = 0LL;
    *((_QWORD *)this + 174) = 0LL;
    *((_QWORD *)this + 175) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 170);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, 16 * ((__int64)(*((_QWORD *)this + 172) - (_QWORD)v4) >> 4));
    *((_QWORD *)this + 170) = 0LL;
    *((_QWORD *)this + 171) = 0LL;
    *((_QWORD *)this + 172) = 0LL;
  }
  CParticleEmitterVisual::ParticleCollection::~ParticleCollection((CParticleEmitterVisual *)((char *)this + 896));
  CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::~CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>(this);
}
