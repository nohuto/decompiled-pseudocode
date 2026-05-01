/*
 * XREFs of _CApplicationManager::_HandleActivation2_::_1_::dtor$51 @ 0x180218D20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleActivation2_::_1_::dtor_51(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 136) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 136) &= ~2u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)(a2 + 80));
  }
}
