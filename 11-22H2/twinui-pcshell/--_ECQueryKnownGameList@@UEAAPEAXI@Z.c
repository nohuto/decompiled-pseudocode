/*
 * XREFs of ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x1800BFC00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CQueryKnownGameList@@UEAA@XZ @ 0x1800BFC3C (--1CQueryKnownGameList@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CQueryKnownGameList *__fastcall CQueryKnownGameList::`vector deleting destructor'(CQueryKnownGameList *this, char a2)
{
  CQueryKnownGameList::~CQueryKnownGameList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x328uLL);
  return this;
}
