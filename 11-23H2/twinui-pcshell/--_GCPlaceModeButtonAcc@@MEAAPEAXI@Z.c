/*
 * XREFs of ??_GCPlaceModeButtonAcc@@MEAAPEAXI@Z @ 0x1805F5C90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 *     ??1CPlaceModeButtonAcc@@MEAA@XZ @ 0x1805F5B34 (--1CPlaceModeButtonAcc@@MEAA@XZ.c)
 */

CPlaceModeButtonAcc *__fastcall CPlaceModeButtonAcc::`scalar deleting destructor'(CPlaceModeButtonAcc *this, char a2)
{
  CPlaceModeButtonAcc::~CPlaceModeButtonAcc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
