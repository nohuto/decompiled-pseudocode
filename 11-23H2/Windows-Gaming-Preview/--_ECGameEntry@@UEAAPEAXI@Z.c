/*
 * XREFs of ??_ECGameEntry@@UEAAPEAXI@Z @ 0x180048960
 * Callers:
 *     <none>
 * Callees:
 *     ??1CGameEntry@@UEAA@XZ @ 0x180048998 (--1CGameEntry@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18004C464 (--3@YAXPEAX@Z.c)
 */

CGameEntry *__fastcall CGameEntry::`vector deleting destructor'(CGameEntry *this, char a2)
{
  CGameEntry::~CGameEntry(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
