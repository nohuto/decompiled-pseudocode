/*
 * XREFs of _AudioDeviceMgr::CreateInstance_::_1_::dtor$1 @ 0x18007CE75
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall AudioDeviceMgr::CreateInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 64));
}
