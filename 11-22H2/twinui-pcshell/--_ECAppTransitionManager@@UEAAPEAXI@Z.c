/*
 * XREFs of ??_ECAppTransitionManager@@UEAAPEAXI@Z @ 0x1801B0D80
 * Callers:
 *     ??_ECAppTransitionManager@@WBI@EAAPEAXI@Z @ 0x1802A4DA0 (--_ECAppTransitionManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAppTransitionManager@@UEAA@XZ @ 0x1801B0DB8 (--1CAppTransitionManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

CAppTransitionManager *__fastcall CAppTransitionManager::`vector deleting destructor'(
        CAppTransitionManager *this,
        char a2)
{
  CAppTransitionManager::~CAppTransitionManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
