/*
 * XREFs of ??_GCPlaceModeButtonAcc@@MEAAPEAXI@Z @ 0x18053AEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180188D28 (--3@YAXPEAX@Z.c)
 *     ??1CPlaceModeButtonAcc@@MEAA@XZ @ 0x18053AD94 (--1CPlaceModeButtonAcc@@MEAA@XZ.c)
 */

CPlaceModeButtonAcc *__fastcall CPlaceModeButtonAcc::`scalar deleting destructor'(CPlaceModeButtonAcc *this, char a2)
{
  CPlaceModeButtonAcc::~CPlaceModeButtonAcc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
