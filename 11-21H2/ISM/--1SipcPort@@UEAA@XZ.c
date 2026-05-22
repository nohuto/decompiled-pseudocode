/*
 * XREFs of ??1SipcPort@@UEAA@XZ @ 0x1800FCD40
 * Callers:
 *     ??1AlpcPort@@UEAA@XZ @ 0x1800FCC18 (--1AlpcPort@@UEAA@XZ.c)
 *     ??_GSipcPort@@UEAAPEAXI@Z @ 0x1800FD030 (--_GSipcPort@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$NtList@USectionListEntry@SipcPort@@@@QEAAXXZ @ 0x1800FD74C (-Clear@-$NtList@USectionListEntry@SipcPort@@@@QEAAXXZ.c)
 */

void __fastcall SipcPort::~SipcPort(void **this)
{
  *this = &SipcPort::`vftable';
  NtList<SipcPort::SectionListEntry>::Clear(this + 2);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(this + 1);
}
