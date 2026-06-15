/*
 * XREFs of ??_GCConstraintModelResourceManager@@UEAAPEAXI@Z @ 0x1800FEC50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1CConstraintModelResourceManager@@UEAA@XZ @ 0x1800FE9E0 (--1CConstraintModelResourceManager@@UEAA@XZ.c)
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
