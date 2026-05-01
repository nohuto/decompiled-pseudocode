/*
 * XREFs of _CApplicationManager::_PerformDesktopActivationCallouts_::_1_::dtor$3 @ 0x1802206CD
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5470 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_PerformDesktopActivationCallouts_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((void *)(a2 + 80));
  }
}
