/*
 * XREFs of _MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor$1 @ 0x1801EF97C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ @ 0x1800CE84C (--1-$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ.c)
 */

void __fastcall MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 288) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 288) &= ~1u;
    std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>(a2 + 152);
  }
}
