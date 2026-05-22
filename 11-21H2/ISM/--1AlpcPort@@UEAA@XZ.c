/*
 * XREFs of ??1AlpcPort@@UEAA@XZ @ 0x1800FCC18
 * Callers:
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x1800FCEE0 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x1800B3850 (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x1800FCF20 (--_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z.c)
 */

void __fastcall AlpcPort::~AlpcPort(void **this)
{
  _QWORD *i; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rcx

  *this = &AlpcPort::`vftable';
  for ( i = this + 8; ; --i[2] )
  {
    v3 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *i = v4;
    *(_QWORD *)(v4 + 8) = i;
    if ( v3 == i )
      break;
    if ( v3 != (_QWORD *)8 )
      AlpcPort::AlpcSectionListEntry::`vector deleting destructor'((AlpcPort::AlpcSectionListEntry *)(v3 - 1), 1u);
  }
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(this + 7);
  SipcPort::~SipcPort((SipcPort *)this);
}
