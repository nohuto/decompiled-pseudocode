/*
 * XREFs of ??_GCConstraintModelResourceManager@@UEAAPEAXI@Z @ 0x180109E90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CConstraintModelResourceManager@@UEAA@XZ @ 0x180109C38 (--1CConstraintModelResourceManager@@UEAA@XZ.c)
 */

CConstraintModelResourceManager *__fastcall CConstraintModelResourceManager::`scalar deleting destructor'(
        CConstraintModelResourceManager *this,
        char a2)
{
  CConstraintModelResourceManager::~CConstraintModelResourceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
