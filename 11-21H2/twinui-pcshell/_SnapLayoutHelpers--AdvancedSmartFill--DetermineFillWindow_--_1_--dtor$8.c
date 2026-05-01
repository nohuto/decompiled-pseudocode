/*
 * XREFs of _SnapLayoutHelpers::AdvancedSmartFill::DetermineFillWindow_::_1_::dtor$8 @ 0x1805A2E90
 * Callers:
 *     <none>
 * Callees:
 *     ??1SecondaryViewInfo@JointResize@@QEAA@XZ @ 0x1801EA59C (--1SecondaryViewInfo@JointResize@@QEAA@XZ.c)
 */

void __fastcall SnapLayoutHelpers::AdvancedSmartFill::DetermineFillWindow_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~4u;
    JointResize::SecondaryViewInfo::~SecondaryViewInfo((__int64 *)(a2 + 184));
  }
}
