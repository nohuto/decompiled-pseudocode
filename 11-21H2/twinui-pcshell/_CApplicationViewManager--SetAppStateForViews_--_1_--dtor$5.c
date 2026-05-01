/*
 * XREFs of _CApplicationViewManager::SetAppStateForViews_::_1_::dtor$5 @ 0x1802205F8
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall CApplicationViewManager::SetAppStateForViews_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 184) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 184) &= ~2u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)(a2 + 56));
  }
}
