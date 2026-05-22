/*
 * XREFs of ??_GCPresentationManager@@EEAAPEAXI@Z @ 0x1801AD150
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CPresentationManager@@EEAA@XZ @ 0x1801ACF48 (--1CPresentationManager@@EEAA@XZ.c)
 */

CPresentationManager *__fastcall CPresentationManager::`scalar deleting destructor'(
        CPresentationManager *this,
        char a2)
{
  CPresentationManager::~CPresentationManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
