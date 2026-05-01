/*
 * XREFs of _CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor$25 @ 0x180218205
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor_25(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 192) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 192) &= ~8u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)(a2 + 48));
  }
}
