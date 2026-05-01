/*
 * XREFs of _CImmersiveMode::HandleActivationDeprecated_::_1_::dtor$6 @ 0x180220D54
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall CImmersiveMode::HandleActivationDeprecated_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 52) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 52) &= ~2u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)(a2 + 56));
  }
}
