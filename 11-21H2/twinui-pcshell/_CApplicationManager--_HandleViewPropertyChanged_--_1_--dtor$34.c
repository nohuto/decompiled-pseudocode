/*
 * XREFs of _CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor$34 @ 0x180215526
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor_34(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~0x20u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)(a2 + 80));
  }
}
