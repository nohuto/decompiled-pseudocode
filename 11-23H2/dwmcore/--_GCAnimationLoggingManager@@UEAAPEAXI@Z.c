/*
 * XREFs of ??_GCAnimationLoggingManager@@UEAAPEAXI@Z @ 0x180093D50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ??1CAnimationLoggingManager@@UEAA@XZ @ 0x180093DC4 (--1CAnimationLoggingManager@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CAnimationLoggingManager *__fastcall CAnimationLoggingManager::`scalar deleting destructor'(
        CAnimationLoggingManager *this,
        char a2)
{
  CAnimationLoggingManager::~CAnimationLoggingManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xC8uLL);
    else
      operator delete(this);
  }
  return this;
}
