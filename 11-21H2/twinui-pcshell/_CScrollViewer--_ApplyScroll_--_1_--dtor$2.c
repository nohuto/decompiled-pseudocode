/*
 * XREFs of _CScrollViewer::_ApplyScroll_::_1_::dtor$2 @ 0x1804D5C14
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5470 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CScrollViewer::_ApplyScroll_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 52) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 52) &= ~2u;
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 72));
  }
}
