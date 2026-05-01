/*
 * XREFs of _CShellSnapComponent::PerformDelayedInitialization_::_1_::dtor$37 @ 0x1802C2867
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CShellSnapComponent::PerformDelayedInitialization_::_1_::dtor_37(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 320) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 320) &= ~4u;
    CompareToItemData::~CompareToItemData((CompareToItemData *)(a2 + 64));
  }
}
