/*
 * XREFs of ??_EIsGameManager@@UEAAPEAXI@Z @ 0x18019B610
 * Callers:
 *     <none>
 * Callees:
 *     ??1IsGameManager@@UEAA@XZ @ 0x18019B64C (--1IsGameManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

IsGameManager *__fastcall IsGameManager::`vector deleting destructor'(IsGameManager *this, char a2)
{
  IsGameManager::~IsGameManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x70uLL);
  return this;
}
