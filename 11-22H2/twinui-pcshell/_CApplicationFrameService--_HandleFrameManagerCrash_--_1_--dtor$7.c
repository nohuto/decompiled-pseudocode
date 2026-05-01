/*
 * XREFs of _CApplicationFrameService::_HandleFrameManagerCrash_::_1_::dtor$7 @ 0x1803BD193
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CApplicationFrameService::_HandleFrameManagerCrash_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 144) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 144) &= ~2u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 152));
  }
}
