/*
 * XREFs of ??_ECAnimationInstance@DirectComposition@@EEAAPEAXI@Z @ 0x180063E20
 * Callers:
 *     ?Create@CAnimationInstance@DirectComposition@@SAJPEAVCDevice@2@PEAVCAnimationBuilder@2@PEAPEAV12@@Z @ 0x180063584 (-Create@CAnimationInstance@DirectComposition@@SAJPEAVCDevice@2@PEAVCAnimationBuilder@2@PEAPEAV12.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CAnimationInstance@DirectComposition@@EEAA@XZ @ 0x180061D94 (--1CAnimationInstance@DirectComposition@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CAnimationInstance *__fastcall DirectComposition::CAnimationInstance::`vector deleting destructor'(
        DirectComposition::CAnimationInstance *this,
        char a2)
{
  DirectComposition::CAnimationInstance::~CAnimationInstance(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xD8uLL);
    else
      operator delete(this);
  }
  return this;
}
