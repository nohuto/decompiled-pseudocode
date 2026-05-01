/*
 * XREFs of _CApplicationManager::HandleInitialPosition_::_1_::dtor$10 @ 0x1802B3D62
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::HandleInitialPosition_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 128) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 128) &= ~2u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 48));
  }
}
