/*
 * XREFs of _CShellSnapComponent::PerformDelayedInitialization_::_1_::dtor$56 @ 0x18021D0E8
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall CShellSnapComponent::PerformDelayedInitialization_::_1_::dtor_56(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 312) & 0x80) != 0 )
  {
    *(_DWORD *)(a2 + 312) &= ~0x80u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)(a2 + 80));
  }
}
