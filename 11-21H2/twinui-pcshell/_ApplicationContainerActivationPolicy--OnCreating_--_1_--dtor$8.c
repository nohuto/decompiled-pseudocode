/*
 * XREFs of _ApplicationContainerActivationPolicy::OnCreating_::_1_::dtor$8 @ 0x180573A2E
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall ApplicationContainerActivationPolicy::OnCreating_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)(a2 + 64));
  }
}
