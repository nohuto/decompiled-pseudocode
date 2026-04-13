/*
 * XREFs of ??_EAppManager@ContentManagement@@UEAAPEAXI@Z @ 0x18007EAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1AppManager@ContentManagement@@UEAA@XZ @ 0x18007DE28 (--1AppManager@ContentManagement@@UEAA@XZ.c)
 */

ContentManagement::AppManager *__fastcall ContentManagement::AppManager::`vector deleting destructor'(
        ContentManagement::AppManager *this,
        char a2)
{
  ContentManagement::AppManager::~AppManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
