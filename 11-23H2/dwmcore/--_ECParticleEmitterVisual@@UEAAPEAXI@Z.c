/*
 * XREFs of ??_ECParticleEmitterVisual@@UEAAPEAXI@Z @ 0x180243940
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CParticleEmitterVisual@@UEAA@XZ @ 0x180243524 (--1CParticleEmitterVisual@@UEAA@XZ.c)
 */

CParticleEmitterVisual *__fastcall CParticleEmitterVisual::`vector deleting destructor'(
        CParticleEmitterVisual *this,
        char a2)
{
  CParticleEmitterVisual::~CParticleEmitterVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
