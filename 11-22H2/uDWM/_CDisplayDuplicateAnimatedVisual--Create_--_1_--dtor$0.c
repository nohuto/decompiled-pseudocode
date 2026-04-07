/*
 * XREFs of _CDisplayDuplicateAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BD0BD
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B4054 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CDisplayDuplicateAnimatedVisual::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CDisplayBlackCurtainAnimatedVisual::operator delete(*(void **)(a2 + 64), (const struct std::nothrow_t *)&std::nothrow);
}
