/*
 * XREFs of ??_GCInputObserverManager@@EEAAPEAXI@Z @ 0x180155CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1CInputObserverManager@@EEAA@XZ @ 0x180155C68 (--1CInputObserverManager@@EEAA@XZ.c)
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
