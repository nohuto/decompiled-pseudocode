/*
 * XREFs of _CImmersiveApp::_SetApplicationWindowSynch_::_1_::dtor$4 @ 0x1803092FF
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall CImmersiveApp::_SetApplicationWindowSynch_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~2u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)(a2 + 56));
  }
}
