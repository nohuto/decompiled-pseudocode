/*
 * XREFs of ??_GCClassicWindowManager@@MEAAPEAXI@Z @ 0x180073450
 * Callers:
 *     <none>
 * Callees:
 *     ??1CClassicWindowManager@@MEAA@XZ @ 0x180028E38 (--1CClassicWindowManager@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CClassicWindowManager *__fastcall CClassicWindowManager::`scalar deleting destructor'(
        CClassicWindowManager *this,
        char a2)
{
  CClassicWindowManager::~CClassicWindowManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x120uLL);
  return this;
}
