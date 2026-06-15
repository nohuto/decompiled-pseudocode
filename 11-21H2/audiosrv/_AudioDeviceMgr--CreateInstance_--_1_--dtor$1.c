/*
 * XREFs of _AudioDeviceMgr::CreateInstance_::_1_::dtor$1 @ 0x1800725B8
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall AudioDeviceMgr::CreateInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 64));
}
