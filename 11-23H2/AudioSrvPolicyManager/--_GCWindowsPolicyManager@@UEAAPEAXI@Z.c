/*
 * XREFs of ??_GCWindowsPolicyManager@@UEAAPEAXI@Z @ 0x18001C2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??1CWindowsPolicyManager@@UEAA@XZ @ 0x18001BF94 (--1CWindowsPolicyManager@@UEAA@XZ.c)
 */

CWindowsPolicyManager *__fastcall CWindowsPolicyManager::`scalar deleting destructor'(
        CWindowsPolicyManager *this,
        char a2)
{
  CWindowsPolicyManager::~CWindowsPolicyManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
