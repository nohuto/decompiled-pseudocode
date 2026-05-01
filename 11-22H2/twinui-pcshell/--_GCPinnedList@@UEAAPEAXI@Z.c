/*
 * XREFs of ??_GCPinnedList@@UEAAPEAXI@Z @ 0x18074E850
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPinnedList@@UEAA@XZ @ 0x1801A92B0 (--1CPinnedList@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

CPinnedList *__fastcall CPinnedList::`scalar deleting destructor'(CPinnedList *this, char a2)
{
  CPinnedList::~CPinnedList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
