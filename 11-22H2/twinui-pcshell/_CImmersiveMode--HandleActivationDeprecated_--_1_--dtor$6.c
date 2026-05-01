/*
 * XREFs of _CImmersiveMode::HandleActivationDeprecated_::_1_::dtor$6 @ 0x1802C4477
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CImmersiveMode::HandleActivationDeprecated_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 160) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 160) &= ~2u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 144));
  }
}
