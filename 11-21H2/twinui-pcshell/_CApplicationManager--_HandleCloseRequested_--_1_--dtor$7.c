/*
 * XREFs of _CApplicationManager::_HandleCloseRequested_::_1_::dtor$7 @ 0x1802E9C4A
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleCloseRequested_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~2u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)(a2 + 72));
  }
}
