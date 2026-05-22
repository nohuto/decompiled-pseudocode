/*
 * XREFs of ??1SipcPort@@UEAA@XZ @ 0x180126978
 * Callers:
 *     ??1AlpcPort@@UEAA@XZ @ 0x180126838 (--1AlpcPort@@UEAA@XZ.c)
 *     ??_GSipcPort@@UEAAPEAXI@Z @ 0x180126C90 (--_GSipcPort@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$NtList@USectionListEntry@SipcPort@@@@QEAAXXZ @ 0x18012739C (-Clear@-$NtList@USectionListEntry@SipcPort@@@@QEAAXXZ.c)
 */

void __fastcall SipcPort::~SipcPort(SipcPort *this)
{
  char *v2; // rcx

  *(_QWORD *)this = &SipcPort::`vftable';
  NtList<SipcPort::SectionListEntry>::Clear((char *)this + 16);
  v2 = (char *)*((_QWORD *)this + 1);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
}
