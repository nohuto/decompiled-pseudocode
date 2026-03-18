/*
 * XREFs of ??1CDisplayManager@@QEAA@XZ @ 0x180100444
 * Callers:
 *     _dynamic_atexit_destructor_for__g_DisplayManager__ @ 0x18010DAF0 (_dynamic_atexit_destructor_for__g_DisplayManager__.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 */

void __fastcall CDisplayManager::~CDisplayManager(CDisplayManager *this)
{
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 6);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
