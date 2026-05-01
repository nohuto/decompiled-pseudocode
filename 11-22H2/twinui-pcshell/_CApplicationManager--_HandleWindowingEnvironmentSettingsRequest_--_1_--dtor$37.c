/*
 * XREFs of _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$37 @ 0x1803A4258
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor_37(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 408) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 408) &= ~0x20u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 32));
  }
}
