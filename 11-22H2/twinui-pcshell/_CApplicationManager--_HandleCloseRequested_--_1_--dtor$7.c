/*
 * XREFs of _CApplicationManager::_HandleCloseRequested_::_1_::dtor$7 @ 0x1803A290E
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleCloseRequested_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~2u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 72));
  }
}
