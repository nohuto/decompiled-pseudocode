/*
 * XREFs of ??_ECGameEntry@@UEAAPEAXI@Z @ 0x180013C40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 */

CGameEntry *__fastcall CGameEntry::`vector deleting destructor'(CGameEntry *this, char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  *(_QWORD *)this = &CGameEntry::`vftable';
  v4 = (void *)*((_QWORD *)this + 9);
  if ( v4 )
    operator delete[](v4);
  v5 = (void *)*((_QWORD *)this + 8);
  if ( v5 )
    operator delete[](v5);
  v6 = (void *)*((_QWORD *)this + 7);
  if ( v6 )
    operator delete[](v6);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x50uLL);
  return this;
}
