/*
 * XREFs of _CImmersiveMode::_OnLauncherVisibilityChanged_::_1_::dtor$5 @ 0x1802BAE6D
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CImmersiveMode::_OnLauncherVisibilityChanged_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~2u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 112));
  }
}
