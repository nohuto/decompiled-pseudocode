/*
 * XREFs of _CDisplayDisconnectAnimatedVisual::Create_::_1_::dtor$0 @ 0x18006812D
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B4054 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CDisplayDisconnectAnimatedVisual::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CDisplayBlackCurtainAnimatedVisual::operator delete(*(void **)(a2 + 64), (const struct std::nothrow_t *)&std::nothrow);
}
