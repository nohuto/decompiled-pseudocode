/*
 * XREFs of ??_GCAnimationLoggingManager@@UEAAPEAXI@Z @ 0x1800F7ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??1CAnimationLoggingManager@@UEAA@XZ @ 0x1800F7F14 (--1CAnimationLoggingManager@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
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
