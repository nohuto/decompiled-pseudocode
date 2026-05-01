/*
 * XREFs of _CShellSnapComponent::PerformDelayedInitialization_::_1_::dtor$52 @ 0x18021D0B5
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall CShellSnapComponent::PerformDelayedInitialization_::_1_::dtor_52(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 312) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 312) &= ~0x20u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)(a2 + 80));
  }
}
