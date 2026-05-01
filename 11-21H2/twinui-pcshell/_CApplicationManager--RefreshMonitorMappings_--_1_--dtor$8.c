/*
 * XREFs of _CApplicationManager::RefreshMonitorMappings_::_1_::dtor$8 @ 0x1802E6AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::RefreshMonitorMappings_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 144) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 144) &= ~2u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)(a2 + 152));
  }
}
