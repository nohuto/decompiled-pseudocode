/*
 * XREFs of ??_ECFullScreenManager@@UEAAPEAXI@Z @ 0x1801771EC
 * Callers:
 *     ??_ECFullScreenManager@@WBI@EAAPEAXI@Z @ 0x1801F0600 (--_ECFullScreenManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CFullScreenManager@@UEAA@XZ @ 0x180177224 (--1CFullScreenManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180188D28 (--3@YAXPEAX@Z.c)
 */

CFullScreenManager *__fastcall CFullScreenManager::`vector deleting destructor'(CFullScreenManager *this, char a2)
{
  CFullScreenManager::~CFullScreenManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
