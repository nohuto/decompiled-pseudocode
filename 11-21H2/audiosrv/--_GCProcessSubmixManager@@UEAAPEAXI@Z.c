/*
 * XREFs of ??_GCProcessSubmixManager@@UEAAPEAXI@Z @ 0x1801072F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CProcessSubmixManager@@UEAA@XZ @ 0x1801071D8 (--1CProcessSubmixManager@@UEAA@XZ.c)
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
