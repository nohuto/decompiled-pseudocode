/*
 * XREFs of ??_EInputSiteHierarchyManager@@UEAAPEAXI@Z @ 0x18013E430
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1InputSiteHierarchyManager@@UEAA@XZ @ 0x18013E338 (--1InputSiteHierarchyManager@@UEAA@XZ.c)
 */

void **__fastcall InputSiteHierarchyManager::`vector deleting destructor'(void **this, char a2)
{
  InputSiteHierarchyManager::~InputSiteHierarchyManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
