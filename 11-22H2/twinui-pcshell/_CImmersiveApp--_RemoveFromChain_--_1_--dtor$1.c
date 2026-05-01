/*
 * XREFs of _CImmersiveApp::_RemoveFromChain_::_1_::dtor$1 @ 0x1802BBCE2
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801C8F8C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CImmersiveApp::_RemoveFromChain_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 64));
}
