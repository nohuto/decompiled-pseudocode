/*
 * XREFs of _SnapLayoutHelpers::AdvancedSmartFill::DetermineFillWindow_::_1_::dtor$4 @ 0x1805A2E3F
 * Callers:
 *     <none>
 * Callees:
 *     ??1SecondaryViewInfo@JointResize@@QEAA@XZ @ 0x1801EA59C (--1SecondaryViewInfo@JointResize@@QEAA@XZ.c)
 */

void __fastcall SnapLayoutHelpers::AdvancedSmartFill::DetermineFillWindow_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    JointResize::SecondaryViewInfo::~SecondaryViewInfo((__int64 *)(a2 + 120));
  }
}
