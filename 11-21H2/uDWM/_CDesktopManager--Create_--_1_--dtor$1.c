/*
 * XREFs of _CDesktopManager::Create_::_1_::dtor$1 @ 0x180065DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800AFA2C (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CDesktopManager::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CDisplayBlackCurtainAnimatedVisual::operator delete(*(void **)(a2 + 80), (const struct std::nothrow_t *)&std::nothrow);
}
