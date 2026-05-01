/*
 * XREFs of ??_GCTaskbandPin@@UEAAPEAXI@Z @ 0x1801A9270
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPinnedList@@UEAA@XZ @ 0x1801A92B0 (--1CPinnedList@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

CTaskbandPin *__fastcall CTaskbandPin::`scalar deleting destructor'(CTaskbandPin *this, char a2)
{
  *((_DWORD *)this + 31) = -1073741823;
  CPinnedList::~CPinnedList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
