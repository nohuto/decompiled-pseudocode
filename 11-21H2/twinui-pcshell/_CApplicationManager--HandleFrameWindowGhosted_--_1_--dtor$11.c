/*
 * XREFs of _CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor$11 @ 0x1802E479A
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~2u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)(a2 + 56));
  }
}
