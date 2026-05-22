/*
 * XREFs of ??1AlpcPort@@UEAA@XZ @ 0x180126838
 * Callers:
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x180126B40 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x180126B80 (--_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z.c)
 */

void __fastcall AlpcPort::~AlpcPort(AlpcPort *this)
{
  _QWORD *i; // rbx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  AlpcPort::AlpcSectionListEntry *v5; // rcx
  char *v6; // rcx

  *(_QWORD *)this = &AlpcPort::`vftable';
  for ( i = (_QWORD *)((char *)this + 64); ; --i[2] )
  {
    v3 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *i = v4;
    *(_QWORD *)(v4 + 8) = i;
    if ( v3 == i )
      break;
    v5 = (AlpcPort::AlpcSectionListEntry *)((unsigned __int64)(v3 - 1) & -(__int64)(v3 != 0LL));
    if ( v5 )
      AlpcPort::AlpcSectionListEntry::`vector deleting destructor'(v5, 1u);
  }
  v6 = (char *)*((_QWORD *)this + 7);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  SipcPort::~SipcPort(this);
}
