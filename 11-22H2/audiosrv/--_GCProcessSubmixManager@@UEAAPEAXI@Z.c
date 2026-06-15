/*
 * XREFs of ??_GCProcessSubmixManager@@UEAAPEAXI@Z @ 0x1800D16B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1CProcessSubmixManager@@UEAA@XZ @ 0x1800D158C (--1CProcessSubmixManager@@UEAA@XZ.c)
 */

CProcessSubmixManager *__fastcall CProcessSubmixManager::`scalar deleting destructor'(
        CProcessSubmixManager *this,
        char a2)
{
  CProcessSubmixManager::~CProcessSubmixManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
