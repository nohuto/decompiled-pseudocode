/*
 * XREFs of _CRealmActivationHistory::SetActiveApp_::_1_::dtor$4 @ 0x1802BFCD2
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CRealmActivationHistory::SetActiveApp_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 40));
  }
}
