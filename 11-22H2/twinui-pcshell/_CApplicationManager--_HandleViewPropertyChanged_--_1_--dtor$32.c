/*
 * XREFs of _CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor$32 @ 0x1802B3FCD
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor_32(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~0x20u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 88));
  }
}
