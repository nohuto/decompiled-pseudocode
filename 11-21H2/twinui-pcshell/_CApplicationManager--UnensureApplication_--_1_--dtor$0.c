/*
 * XREFs of _CApplicationManager::UnensureApplication_::_1_::dtor$0 @ 0x1802E90EE
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::UnensureApplication_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 88) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 88) &= ~1u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)(a2 + 96));
  }
}
