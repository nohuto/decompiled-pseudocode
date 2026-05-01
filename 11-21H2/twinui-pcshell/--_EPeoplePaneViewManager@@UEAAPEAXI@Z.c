/*
 * XREFs of ??_EPeoplePaneViewManager@@UEAAPEAXI@Z @ 0x1803D5B28
 * Callers:
 *     ??_EPeoplePaneViewManager@@WBI@EAAPEAXI@Z @ 0x1801F93B0 (--_EPeoplePaneViewManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1PeoplePaneViewManager@@UEAA@XZ @ 0x1803D5348 (--1PeoplePaneViewManager@@UEAA@XZ.c)
 */

PeoplePaneViewManager *__fastcall PeoplePaneViewManager::`vector deleting destructor'(
        PeoplePaneViewManager *this,
        char a2)
{
  PeoplePaneViewManager::~PeoplePaneViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
