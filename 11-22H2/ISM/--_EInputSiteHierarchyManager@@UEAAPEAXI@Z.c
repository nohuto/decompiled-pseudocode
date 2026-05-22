/*
 * XREFs of ??_EInputSiteHierarchyManager@@UEAAPEAXI@Z @ 0x18014C360
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1InputSiteHierarchyManager@@UEAA@XZ @ 0x18014C268 (--1InputSiteHierarchyManager@@UEAA@XZ.c)
 */

void **__fastcall InputSiteHierarchyManager::`vector deleting destructor'(void **this, char a2)
{
  InputSiteHierarchyManager::~InputSiteHierarchyManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
