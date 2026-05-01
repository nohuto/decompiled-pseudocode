/*
 * XREFs of _HolographicPositioner::_CloseView_::_1_::dtor$9 @ 0x1804ADFC1
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall HolographicPositioner::_CloseView_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~2u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 120));
  }
}
