/*
 * XREFs of ??_GControllerNavigationManager@@UEAAPEAXI@Z @ 0x180190BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1ControllerNavigationManager@@UEAA@XZ @ 0x180190A90 (--1ControllerNavigationManager@@UEAA@XZ.c)
 */

ControllerNavigationManager *__fastcall ControllerNavigationManager::`scalar deleting destructor'(
        ControllerNavigationManager *this,
        char a2)
{
  ControllerNavigationManager::~ControllerNavigationManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
