/*
 * XREFs of ??_GCLegacyAnimationTrigger@@UEAAPEAXI@Z @ 0x1801C2C70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CLegacyAnimationTrigger@@UEAA@XZ @ 0x1801C1A7C (--1CLegacyAnimationTrigger@@UEAA@XZ.c)
 */

CLegacyAnimationTrigger *__fastcall CLegacyAnimationTrigger::`scalar deleting destructor'(
        CLegacyAnimationTrigger *this,
        char a2)
{
  CLegacyAnimationTrigger::~CLegacyAnimationTrigger(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
