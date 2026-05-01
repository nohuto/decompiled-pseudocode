/*
 * XREFs of _CSwitchItemGrid::ItemRemoved_::_1_::dtor$4 @ 0x1804BED83
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5470 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CSwitchItemGrid::ItemRemoved_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 160) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 160) &= ~1u;
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 48));
  }
}
