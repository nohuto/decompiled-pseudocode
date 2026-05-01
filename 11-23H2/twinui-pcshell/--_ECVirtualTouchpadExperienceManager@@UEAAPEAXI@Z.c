/*
 * XREFs of ??_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z @ 0x1801BE470
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x18012D1A0 (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CVirtualTouchpadExperienceManager *__fastcall CVirtualTouchpadExperienceManager::`vector deleting destructor'(
        CVirtualTouchpadExperienceManager *this,
        char a2)
{
  CVirtualTouchpadExperienceManager::~CVirtualTouchpadExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x368uLL);
  return this;
}
