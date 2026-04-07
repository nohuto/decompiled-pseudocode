/*
 * XREFs of _CAcrylicSheet::Create_::_1_::dtor$1 @ 0x18009A11F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAcrylicSheet::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAnimationComponent::operator delete(*(void **)(a2 + 32));
}
