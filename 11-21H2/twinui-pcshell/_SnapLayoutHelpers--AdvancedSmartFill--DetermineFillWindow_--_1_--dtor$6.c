/*
 * XREFs of _SnapLayoutHelpers::AdvancedSmartFill::DetermineFillWindow_::_1_::dtor$6 @ 0x1805A2E66
 * Callers:
 *     <none>
 * Callees:
 *     ??1SecondaryViewInfo@JointResize@@QEAA@XZ @ 0x1801EA59C (--1SecondaryViewInfo@JointResize@@QEAA@XZ.c)
 */

void __fastcall SnapLayoutHelpers::AdvancedSmartFill::DetermineFillWindow_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    JointResize::SecondaryViewInfo::~SecondaryViewInfo((__int64 *)(a2 + 152));
  }
}
