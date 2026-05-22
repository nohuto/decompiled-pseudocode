/*
 * XREFs of _AnimationDataProvider::SetBootstrapProxy_::_1_::dtor$1 @ 0x1800586C6
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall AnimationDataProvider::SetBootstrapProxy_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 80));
}
