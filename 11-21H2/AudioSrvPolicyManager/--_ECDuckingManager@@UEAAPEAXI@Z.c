/*
 * XREFs of ??_ECDuckingManager@@UEAAPEAXI@Z @ 0x180009210
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??1CDuckingManager@@UEAA@XZ @ 0x180008BF0 (--1CDuckingManager@@UEAA@XZ.c)
 */

CDuckingManager *__fastcall CDuckingManager::`vector deleting destructor'(CDuckingManager *this, char a2)
{
  CDuckingManager::~CDuckingManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
