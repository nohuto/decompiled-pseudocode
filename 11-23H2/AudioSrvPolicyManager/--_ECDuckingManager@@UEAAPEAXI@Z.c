/*
 * XREFs of ??_ECDuckingManager@@UEAAPEAXI@Z @ 0x18001C240
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??1CDuckingManager@@UEAA@XZ @ 0x18001BE44 (--1CDuckingManager@@UEAA@XZ.c)
 */

CDuckingManager *__fastcall CDuckingManager::`vector deleting destructor'(CDuckingManager *this, char a2)
{
  CDuckingManager::~CDuckingManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
