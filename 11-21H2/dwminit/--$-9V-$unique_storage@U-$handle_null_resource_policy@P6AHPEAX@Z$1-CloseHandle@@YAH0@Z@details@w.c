/*
 * XREFs of ??$?9V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x180008714
 * Callers:
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x180009258 (-Stop@CKstBase@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::operator!=<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        _QWORD *a1)
{
  return (unsigned __int64)(*a1 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL;
}
