/*
 * XREFs of _HolographicPositioner::_IsPropertySetContextHolographic_::_1_::dtor$3 @ 0x1802192A6
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180181DF4 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall HolographicPositioner::_IsPropertySetContextHolographic_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 36) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 36) &= ~1u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 64));
  }
}
