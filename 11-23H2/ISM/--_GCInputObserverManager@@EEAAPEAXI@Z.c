/*
 * XREFs of ??_GCInputObserverManager@@EEAAPEAXI@Z @ 0x1801479E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1CInputObserverManager@@EEAA@XZ @ 0x180147988 (--1CInputObserverManager@@EEAA@XZ.c)
 */

CInputObserverManager *__fastcall CInputObserverManager::`scalar deleting destructor'(
        CInputObserverManager *this,
        char a2)
{
  CInputObserverManager::~CInputObserverManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
