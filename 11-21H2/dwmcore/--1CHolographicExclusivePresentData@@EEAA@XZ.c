/*
 * XREFs of ??1CHolographicExclusivePresentData@@EEAA@XZ @ 0x18029FD24
 * Callers:
 *     ??_GCHolographicExclusivePresentData@@EEAAPEAXI@Z @ 0x18029FD68 (--_GCHolographicExclusivePresentData@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 */

void __fastcall CHolographicExclusivePresentData::~CHolographicExclusivePresentData(
        CHolographicExclusivePresentData *this)
{
  *(_QWORD *)this = &CHolographicExclusivePresentData::`vftable'{for `IHolographicExclusivePresentData'};
  *((_QWORD *)this + 1) = &CHolographicExclusivePresentData::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 6);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 5);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 4);
}
