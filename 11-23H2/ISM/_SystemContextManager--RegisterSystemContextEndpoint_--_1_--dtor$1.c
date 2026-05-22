/*
 * XREFs of _SystemContextManager::RegisterSystemContextEndpoint_::_1_::dtor$1 @ 0x18014FA4E
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall SystemContextManager::RegisterSystemContextEndpoint_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 112));
}
