/*
 * XREFs of _CApplicationManager::_HandleViewEvent_::_1_::dtor$38 @ 0x1802B3CE2
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewEvent_::_1_::dtor_38(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 216) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 216) &= ~2u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 56));
  }
}
