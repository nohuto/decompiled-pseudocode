/*
 * XREFs of ?EnableImplicitAnimations@CompositionObject@Composition@UI@Windows@@UEAAXH@Z @ 0x18008F880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::CompositionObject::EnableImplicitAnimations(
        Windows::UI::Composition::CompositionObject *this,
        int a2)
{
  *((_DWORD *)this + 31) ^= (*((_DWORD *)this + 31) ^ a2) & 1;
}
