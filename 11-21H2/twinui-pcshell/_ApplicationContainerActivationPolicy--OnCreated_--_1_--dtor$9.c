/*
 * XREFs of _ApplicationContainerActivationPolicy::OnCreated_::_1_::dtor$9 @ 0x180573649
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall ApplicationContainerActivationPolicy::OnCreated_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~2u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)(a2 + 104));
  }
}
