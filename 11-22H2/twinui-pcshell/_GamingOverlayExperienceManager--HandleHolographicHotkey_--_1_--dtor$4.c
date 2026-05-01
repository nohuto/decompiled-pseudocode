/*
 * XREFs of _GamingOverlayExperienceManager::HandleHolographicHotkey_::_1_::dtor$4 @ 0x180400309
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall GamingOverlayExperienceManager::HandleHolographicHotkey_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~2u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 32));
  }
}
