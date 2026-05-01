/*
 * XREFs of ??1CGameEntry@@UEAA@XZ @ 0x180048998
 * Callers:
 *     ??_ECGameEntry@@UEAAPEAXI@Z @ 0x180048960 (--_ECGameEntry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004BBC4 (--_V@YAXPEAX@Z.c)
 */

void __fastcall CGameEntry::~CGameEntry(CGameEntry *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CGameEntry::`vftable';
  v2 = (void *)*((_QWORD *)this + 9);
  if ( v2 )
    operator delete[](v2);
  operator delete[](*((void **)this + 8));
  operator delete[](*((void **)this + 7));
  *((_DWORD *)this + 3) = -1073741823;
}
