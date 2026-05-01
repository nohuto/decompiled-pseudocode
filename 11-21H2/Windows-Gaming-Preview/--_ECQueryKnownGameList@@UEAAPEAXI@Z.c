/*
 * XREFs of ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x180045310
 * Callers:
 *     <none>
 * Callees:
 *     ??1CQueryKnownGameList@@UEAA@XZ @ 0x180045348 (--1CQueryKnownGameList@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18004B574 (--3@YAXPEAX@Z.c)
 */

CQueryKnownGameList *__fastcall CQueryKnownGameList::`vector deleting destructor'(CQueryKnownGameList *this, char a2)
{
  CQueryKnownGameList::~CQueryKnownGameList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
